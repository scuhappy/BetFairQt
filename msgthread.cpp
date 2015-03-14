#include "msgthread.h"

msgThread::msgThread(QObject *parent) :
    QThread(parent)
{
    m_hostName="127.0.0.1";
    m_hostPort=8888;
    connect(m_msgSock,SIGNAL(readyRead()),this,SLOT(m_slot_ReadBytes()));
}
void msgThread::run()
{
    m_msgSock=new QTcpSocket(this);
    m_msgSock->connectToHost(m_hostName,m_hostPort,QIODevice::ReadWrite);
    m_msgSock->waitForConnected();

    while(true)
    {

        if(!m_cmdQueue.isEmpty())
        {
            Message msg=m_cmdQueue.dequeue();
            DoWork(msg);
        }

    }
}
void msgThread::DoWork(Message msg)
{
    char* _msg=(char*)msg;
    m_msgSock->write(_msg);
    m_msgSock->waitForBytesWritten();
}
void msgThread::sendCmd(Message msg)
{
    m_cmdQueue.enqueue(msg);
}
void msgThread::m_slot_ReadBytes()
{
    int length=m_msgSock->bytesAvailable();

    QByteArray bytes = m_msgSock->read(length);
    Message msg=(Message)bytes;
    switch (msg.type) {
    case MSG_RESPONCE:
        ;
        break;
    default:
        break;
    }
}
