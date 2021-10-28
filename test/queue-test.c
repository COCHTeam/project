#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>
#include <assert.h> 
//#include "matrix.h"
#include "queue.h"
#include "queue-test.h"



void queue_test()
{
  {
    Queue *queue = CreateQueue(10);

    assert(IsEmptyQueue(queue));
    assert(!IsFullQueue(queue));
    assert(SizeQueue(queue)==0);

    FreeQueue(queue);
  }
  {
    Queue *queue = CreateQueue(10);

    EnQueue(queue, 1);
    EnQueue(queue, 2);
    EnQueue(queue, 3);
    EnQueue(queue, 4);
    assert(!IsFullQueue(queue));
    assert(SizeQueue(queue)==4);

    EnQueue(queue, 5);
    EnQueue(queue, 6);
    EnQueue(queue, 7);
    EnQueue(queue, 8);
    EnQueue(queue, 9);
    EnQueue(queue, 10);
    assert(IsFullQueue(queue));
    assert(SizeQueue(queue)==10);

    FreeQueue(queue);
  }
  {
    Queue *queue = CreateQueue(2);

    EnQueue(queue, 1);
    EnQueue(queue, 2);
   
    size_t info;

    assert((info = DeQueue(queue))==1);
    assert((info = DeQueue(queue))==2);
    assert(IsEmptyQueue(queue));
    assert(SizeQueue(queue)==0);

    EnQueue(queue, 3);
    EnQueue(queue, 4);

    assert((info = DeQueue(queue))==3);
    assert((info = DeQueue(queue))==4);
    assert(IsEmptyQueue(queue));
    assert(SizeQueue(queue)==0);

    FreeQueue(queue);
  }
  {
    Queue *queue = CreateQueue(2);

    EnQueue(queue, 1);
    EnQueue(queue, 2);
   
    size_t info;

    assert((info = DeQueue(queue))==1);

    EnQueue(queue, 3);

    FreeQueue(queue);
  }
  {
    Queue *queue = CreateQueue(10);

    EnQueue(queue, 1);
    EnQueue(queue, 2);
    EnQueue(queue, 3);
    EnQueue(queue, 4);

    size_t info;

    assert((info = DeQueue(queue))==1);
    assert((info = DeQueue(queue))==2);
    assert((info = DeQueue(queue))==3);
    assert((info = DeQueue(queue))==4);
    assert(IsEmptyQueue(queue));
    assert(SizeQueue(queue)==0);

    EnQueue(queue, 5);
    EnQueue(queue, 6);
    EnQueue(queue, 7);
    EnQueue(queue, 8);

    assert((info = DeQueue(queue))==5);
    assert((info = DeQueue(queue))==6);
    assert((info = DeQueue(queue))==7);
    assert((info = DeQueue(queue))==8);
    assert(IsEmptyQueue(queue));
    assert(SizeQueue(queue)==0);

    EnQueue(queue, 9);
    EnQueue(queue, 10);
    EnQueue(queue, 11);
    EnQueue(queue, 12);
  
    assert((info = DeQueue(queue))==9);
    assert((info = DeQueue(queue))==10);
    assert((info = DeQueue(queue))==11);
    assert((info = DeQueue(queue))==12);
    assert(IsEmptyQueue(queue));
    assert(SizeQueue(queue)==0);

    FreeQueue(queue);
  }
  {
    Queue *queue = CreateQueue(10);

    EnQueue(queue, 1);
    DeQueue(queue);
    EnQueue(queue, 3);
    DeQueue(queue);
    EnQueue(queue, 4);
    DeQueue(queue);
    EnQueue(queue, 5);
    DeQueue(queue);
    EnQueue(queue, 6);
    DeQueue(queue);
    EnQueue(queue, 7);
    DeQueue(queue);
    EnQueue(queue, 8);
    DeQueue(queue);

    EnQueue(queue, 9);
    EnQueue(queue, 10);
    EnQueue(queue, 11);
    EnQueue(queue, 12);

    assert(SizeQueue(queue)==4);

    FreeQueue(queue);
  }
}

