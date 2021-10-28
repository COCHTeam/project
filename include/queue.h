#ifndef QUEUE_H
#define QUEUE_H


typedef struct {
  int     _first,_last,_size;
  size_t *_array;
  int     _hight;
  int     _max;
} Queue;


Queue  *CreateQueue(size_t);
int     SizeQueue(Queue *);
int     IsEmptyQueue(Queue *);
int     IsFullQueue(Queue *);
void    EnQueue(Queue *, size_t );
size_t  DeQueue(Queue *);
void    FreeQueue(Queue *);

#endif /* QUEUE_H */

