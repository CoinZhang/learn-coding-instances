#include "datastr.h"







/* =============================================================
 *  type implementations
 * ============================================================= */
    struct queuenode {
        struct queuenode *next;
    int data;
};

struct queue {
    queuenode *head, *rear;
    queue *self;

    void (*add)(int, queue *);
    void (*printrear)(queue *);
};



/* =============================================================
 *  function implementations
 * ============================================================= */

void init_queue(queue *q) {
    q->self = q;

    q->head = (queuenode*)malloc(sizeof(queuenode));
    q->head->next = NULL;
    q->rear = q->head;

    q->add = add;
    q->printrear = &printrear;
}

void add(queue *q, int data) {
    q->rear->next = (queuenode *)malloc(sizeof(queuenode));
    q->rear->next->next = NULL;
    q->rear->next->data = data;
    q->rear = q->rear->next;
}

void printrear(queue *q) {
    fprintf(stdout, "rear number is %d\n",q->rear->data);
}


