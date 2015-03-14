#ifndef MSGTHREAD_H
#define MSGTHREAD_H

#include <QThread>
#include<QTcpSocket>
#include<QQueue>
#include"common.h"
class msgThread : public QThread
{
    Q_OBJECT
public:
    explicit msgThread(QObject *parent = 0);
protected:
    void run();
private:
    void DoWork(Message msg);
    void sendCmd(Message msg);
private:
    QTcpSocket *m_msgSock;
    QString m_hostName;
    int m_hostPort;
    QQueue<Message> m_cmdQueue;
signals:

public slots:
    void m_slot_ReadBytes();
};

#endif // MSGTHREAD_H
