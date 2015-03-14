#ifndef COMMON_H
#define COMMON_H
#include<QString>
enum MsgType{
    MSG_RESPONCE,
    MSG_ASK
};
class Message
{
public:
    MsgType type;
    QString content;
    
    
};

#endif // COMMON_H
