#ifndef STOCK_H_INCLUDED
#define STOCK_H_INCLUDED
#include "appconst.h"


typedef _trading_queue_TradingQ;

struct _trading_queue_ {
     char name[50];
     char date[30];
     int32_t  price;
     int32_t quantity;
};
typedef struct _queue_Queue;
struct _queue_ {
    int32_t size;
    int32_t count;
    int rear;
    tradingQ share1[Q_LEN]
};
typedef struct _queue_res_ Queue_res_ QueueRes;
struct _queue_res
{

    tradingQ share;
    int status;`
};

Queue queue_new(int32_t size);
 int queue_full(Queue *q);
 int queue_empty(Queue *q);
 Queue*queue_add(Queue *q,tradingQ share,QueueRes *res);






#endif // STOCK_H_INCLUDED
