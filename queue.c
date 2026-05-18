//基本顺序队列
#include <stdio.h>

#define MAXSIZE 10

typedef struct {
    int data[MAXSIZE];
    int front;
    int rear;
} SqQueue;

// 初始化
void initQueue(SqQueue *Q) {
    Q->front = 0;
    Q->rear = 0;
}

// 判空
int isEmpty(SqQueue Q) {
    return Q.front == Q.rear;
}

// 入队
int enqueue(SqQueue *Q, int x) {
    if (Q->rear == MAXSIZE) {
        return 0;
    }

    Q->data[Q->rear] = x;
    Q->rear++;

    return 1;
}

// 出队
int dequeue(SqQueue *Q, int *x) {
    if (isEmpty(*Q)) {
        return 0;
    }

    *x = Q->data[Q->front];
    Q->front++;

    return 1;
}

// 遍历
void printQueue(SqQueue Q) {
    for (int i = Q.front; i < Q.rear; i++) {
        printf("%d ", Q.data[i]);
    }
    printf("\n");
}

int main() {
    SqQueue Q;
    initQueue(&Q);

    enqueue(&Q, 1);
    enqueue(&Q, 2);
    enqueue(&Q, 3);

    printQueue(Q);

    int x;
    dequeue(&Q, &x);

    printf("出队: %d\n", x);

    printQueue(Q);

    return 0;
}




//结构定义
typedef struct{
    int data[MAXSIZE];
    int front;
    int rear;
}SqQueue;

typedef struct{
    int data[MAXSIZE];
    int front;
    int rear;
}SqQueue;

typedef struct{
    int data[MAXSIZE];
    int front;]
    int rear;
}SqQueue;

typedef struct{
    int data[MAXSIZE];
    int front;
    int rear;
}SqQueue;

typedef struct{
    int data[MAXSIZE];
    int front;
    int rear;
}SqQueue;

typedef struct{
    int data[MAXSIZE];
    int front;
    int rear;
}SqQueue;





//初始化
void initQueue(SqQueue *Q){
    Q->front = 0;
    Q->rear = 0;
}

void initQueue(SqQueue *Q){
    Q->front = 0;
    Q->rear = 0;
}

void initQueue(SqQueue *Q){
    Q->front = 0;
    Q->rear = 0;
}

void initQueue(SqQueue *Q){
    Q->front = 0;
    Q->front = 0;
}

void initQueue(SqQueue *Q){
    Q->front = 0;
    Q->rear = 0;
}

void initQueue(SqQueue *Q){
    Q->front = 0;
    Q->rear = 0;
}





// 判空
int isEmpty(SqQueue Q) {
    return Q.front == Q.rear;
}

int isEmpty(SqQueue Q) {
    return Q.front == Q.rear;
}

int isEmpty(SqQueue Q) {
    return Q.front == Q.rear;
}

int isEmpty(SqQueue Q) {
    return Q.front == Q.rear;
} 

int isEmpty(SqQueue Q){
    return Q.front == Q.rear;
}

int isEmpty(SqQueue Q){
    return Q.front == Q.rear;
}





//入队
int enqueue(SqQueue *Q, int x) {
    if (Q->rear == MAXSIZE) {
        return 0;
    }

    Q->data[Q->rear] = x;
    Q->rear++;

    return 1;
}

int enqueue(SqQueue *Q, int x){
    if (Q->rear == MAXSIZE){
        return 0;
    }
    Q->data[Q->rear] = x;
    Q->rear++;
    return 1;
}

int enqueue(SqQueue *Q, int x){
    if(Q->rear == MAXSIZE){
        return 0;
    }
    Q->data[Q->rear] = x;
    Q->rear++;
    return 1;
}

int enqueue(SqQueue *Q ,int x){
    if(Q->rear == MAXSIZE){
        return 0;
    }
    Q->data[Q->rear] = x;
    Q->rear++;
    return 1;
}

int enqueue(SqQueue *Q, int x){
    if(Q->rear ==  MAXSIZE){
        return 0;
    }
    Q->data[Q->rear] = x;
    Q->rear++;
    return 1;
}

int enqueue(SqQueue *Q, int x){
    if(Q->rear == MAXSIZE){
        return 0;
    }
    Q->data[Q->rear] = x;
    Q->rear++;
    return 1;
}

// 出队
int dequeue(SqQueue *Q, int *x) {
    if (isEmpty(*Q)) {
        return 0;
    }

    *x = Q->data[Q->front];
    Q->front++;

    return 1;
}

int dequeue(SqQueue *Q, int *x){
    if(isEmpty(*Q)){
        return 0;
    }
    *x = Q->data[Q->front];
    Q->front++;
    return 1;
}

int dequeue(SqQueue *Q, int *x){
    if(isEmpty(*Q)){
        return 0;
    }
    *x = Q->data[Q->front];
    Q->front++;
    return 1;
}

int dequeue(SqQueue *Q, int *x){
    if(isEmpty(*Q)){
        return 0;
    }
    *x = Q->data[Q->front];
    Q->front++;
    return 1;
}

int dequeue(SqQueue *Q, int *x){
    if(isEmpty(*Q)){
        return 0;
    }
    *x = Q->data[Q->front];
    Q->front++;
    return 1;
}

int dequeue(SqQueue *Q, int *x){
    if(isEmpty(*Q)){
        return 0;
    }
    *x = Q->data[Q->front];
    Q->front++;
    return 1;
}





// 遍历
void printQueue(SqQueue Q) {
    for (int i = Q.front; i < Q.rear; i++) {
        printf("%d ", Q.data[i]);
    }
    printf("\n");
}

void printQueue(SqQueue Q){
    for(int i = Q.front; i<Q.rear; i++){
        printf("%d",Q.data[i]);
    }
    printf("\n");
}

void printQueue(SqQueue Q){
    for(int i = Q.front; i<Q.rear; i++){
        printf("%d",Q.data[i]);
    }
    printf("\n"); 
}

void printQueue(SqQueue Q){
    for(int i = Q.front; i<Q.rear; i++){
        printf("%d",Q.data[i]);
    }
    printf("\n");
}

void printQueue(SqQueue Q){
    for(int i = Q.front; i<Q.rear; i++){
        printf("%d",Q.data[i]);
    }
    printf("\n");
}

void printQueue(SqQueue Q){
    for(int i = Q.front; i<Q.rear; i++){
        printf("%d",Q->data[i]);
    }
    printf("\n")
}





//测试
int main() {
    SqQueue Q;
    initQueue(&Q);

    enqueue(&Q, 1);
    enqueue(&Q, 2);
    enqueue(&Q, 3);

    printQueue(Q);

    int x;
    dequeue(&Q, &x);

    printf("出队: %d\n", x);

    printQueue(Q);

    return 0;
}

int main(){
    SqQueue Q;
    initQueue(&Q);

    enqueue(&Q, 1);
    enqueue(&Q, 2);
    enqueue(&Q, 3);
    printQueue(Q);
    int x;
    dequeue(&Q, &x);
    printf("出队: %d\n", x);
    printQueue(Q);
    return 0;
}

int main(){
    SqQueue Q;
    initQueue(&Q);
    enqueue(&Q, 1);
    enqueue(&Q, 2);
    enqueue(&Q, 3);
    printQueue(Q);
    int x;
    dequeue(&Q, &x);
    printf("出队：%d\n", x);
    printQueue(Q);
    return 0;
}

int main(){
    SqQueue Q;
    initQueue(&Q);
    enqueue(&Q, 1);
    enqueue(&Q, 2);
    enqueue(&Q, 3);
    printQueue(Q);
    int x;
    dequeue(&Q, &x);
    printf("出队：%d\n", x);
    printQueue(Q);
    return 0;
}

int main(){
    SqQueue Q;
    initQueue(&Q);
    enqueue(&Q, 1);
    enqueue(&Q, 2);
    enqueue(&Q, 3);
    printQueue(Q);
    int x;
    dequeue(&Q, &x);
    printf("出队：%d\n", x);
    printQueue(Q);
    return 0;
}

int main(){
    SqQueue Q;
    initQueue(&Q);
    enqueue(&Q, 1);
    enqueue(&Q, 2);
    enqueue(&Q, 3);
    printQueue(Q);
    int x;
    dequeue(&Q, &x);
    printf("出队：%d\n", x);
    printQueue(Q);
    return 0;
}










//循环队列
#include <stdio.h>

#define MAXSIZE 10

typedef struct {
    int data[MAXSIZE];
    int front;
    int rear;
} CirQueue;

// 初始化
void initQueue(CirQueue *Q) {
    Q->front = 0;
    Q->rear = 0;
}

// 判空
int isEmpty(CirQueue Q) {
    return Q.front == Q.rear;
}

// 判满
int isFull(CirQueue Q) {
    return (Q.rear + 1) % MAXSIZE == Q.front;
}

// 入队
int enqueue(CirQueue *Q, int x) {
    if (isFull(*Q)) {
        return 0;
    }

    Q->data[Q->rear] = x;

    Q->rear = (Q->rear + 1) % MAXSIZE;

    return 1;
}

// 出队
int dequeue(CirQueue *Q, int *x) {
    if (isEmpty(*Q)) {
        return 0;
    }

    *x = Q->data[Q->front];

    Q->front = (Q->front + 1) % MAXSIZE;

    return 1;
}

// 队列长度
int length(CirQueue Q) {
    return (Q.rear - Q.front + MAXSIZE) % MAXSIZE;
}

// 遍历
void printQueue(CirQueue Q) {
    int i = Q.front;

    while (i != Q.rear) {
        printf("%d ", Q.data[i]);
        i = (i + 1) % MAXSIZE;
    }

    printf("\n");
}

int main() {
    CirQueue Q;

    initQueue(&Q);

    enqueue(&Q, 10);
    enqueue(&Q, 20);
    enqueue(&Q, 30);

    printQueue(Q);

    int x;

    dequeue(&Q, &x);

    printf("出队: %d\n", x);

    printQueue(Q);

    return 0;
}





//结构体定义
typedef struct {
    int data[MAXSIZE];
    int front;
    int rear;
} CirQueue;

typedef struct {
    int data[MAXSIZE];
    int front;
    int rear;
} CirQueue;

typedef struct {
    int data[MAXSIZE];
    int front;
    int rear;
} CirQueue;

typedef struct {
    int data[MAXSIZE];
    int front;
    int rear;
} CirQueue;

typedef struct {
    int data[MAXSIZE];
    int front;
    int rear;
} CirQueue;

typedef struct {
    int data[MAXSIZE];
    int front;
    int rear;
} CirQueue;





// 初始化
void initQueue(CirQueue *Q) {
    Q->front = 0;
    Q->rear = 0;
}

void initQueue(CirQueue *Q) {
    Q->front = 0;
    Q->rear = 0;
}

void initQueue(CirQueue *Q) {
    Q->front = 0;
    Q->rear = 0;
}

void initQueue(CirQueue *Q) {
    Q->front = 0;
    Q->rear = 0;
}

void initQueue(CirQueue *Q) {
    Q->front = 0;
    Q->rear = 0;
}

void initQueue(CirQueue *Q) {
    Q->front = 0;
    Q->rear = 0;
}





// 判空
int isEmpty(CirQueue Q) {
    return Q.front == Q.rear;
}

int isEmpty(CirQueue Q) {
    return Q.front == Q.rear;
}

int isEmpty(CirQueue Q) {
    return Q.front == Q.rear;
}

int idEmpty(CirQueue Q) {
    return Q.front == Q.rear;
}

int idEmpty(CirQueue Q) {
    return Q.front == Q.rear;
}

int idEmpty(CirQueue Q) {
    return Q.front == Q.rear;
}





// 判满
int isFull(CirQueue Q) {
    return (Q.rear + 1) % MAXSIZE == Q.front;
}

int isFull(CirQueue Q) {
    return (Q.rear + 1) % MAXSIZE == Q.front;
}

int isFull(CirQueue Q) {
    return (Q.rear + 1) % MAXSIZE == Q.front;
}

int isFull(CirQueue Q) {
    return (Q.rear + 1) % MAXSIZE == Q.front;
}

int isFull(CirQueue Q) {
    return (Q.rear + 1) % MAXSIZE == Q.front;
}

int isFull(CirQueue Q) {
    return (Q.rear + 1) % MAXSIZE == Q.front;
}





// 入队
int enqueue(CirQueue *Q, int x) {
    if (isFull(*Q)) {
        return 0;
    }

    Q->data[Q->rear] = x;

    Q->rear = (Q->rear + 1) % MAXSIZE;

    return 1;
}

int enqueue(CirQueue *Q, int x) {
    if (isFull(*Q)) {
        return 0;
    }
    Q->data[Q->rear] = x;
    Q->rear = (Q->rear + 1) %MAXSIZE;
    return 1;
}

int enqueue(CirQueue *Q, int x) {
    if (isFull(*Q)) {
        return 0;
    }
    Q->data[Q->rear] = x;
    Q->rear = (Q->rear + 1) % MAXSIZE;
    return 1;
}

int enqueue(CirQueue *Q, int x) {
    if (isFull(*Q)) {
        return 0;
    }
    Q->data[Q->rear] = x;
    Q->rear = (Q->rear + 1) % MAXSIZE;
    return 1;
}

int enqueue(CirQueue *Q, int x) {
    if (isFull(*Q)) {
        return 0;
    }
    Q->data[Q->rear] = x;
    Q->rear = (Q->rear + 1) % MAXSIZE;
    return 1;
}

int enqueue(CirQueue *Q, int x){
    if (isEmpty(*Q)) {
        return 0;
    }
    Q->data[Q->rear] = x;
    Q->rear = (Q->rear + 1) % MAXSIZE;
    return 1;
}





// 出队
int dequeue(CirQueue *Q, int *x) {
    if (isEmpty(*Q)) {
        return 0;
    }

    *x = Q->data[Q->front];

    Q->front = (Q->front + 1) % MAXSIZE;

    return 1;
}

int dequeue(CirQueue *Q, int *x) {
    if (isEmpty(*Q)){
        return 0;
    }
    *x = Q->data[Q->front];
    Q->front = (Q->front + 1) % MAXSIZE;
    return 1;
}

int dequeue(CirQueue *Q, int *x) {
    if (isEmpty(*Q)) {
        return 0;
    }
    *x = Q->data[Q->front];
    Q->front = (Q->front + 1) % MAXSIZE;
    return 1;
}

int dequeue(CirQueue *Q, int *x) {
    if (isEmpty(*Q)) {
        return 0;
    }
    *x = Q->data[Q->front];
    Q->front = (Q->front + 1) % MAXSIZE;
    return 1;
}

int dequeue(CirQueue *Q, int *x) {
    if (isEmpty(*Q)) {
        return 0;
    }
    *x = Q->data[Q->front];
    Q->front = (Q->front + 1) % MAXSIZE;
    return 1;
}

int dequeue(CirQueue *Q, int *x) {
    if(isEmpty(*Q)) {
        return 0;
    }
    *x = Q->data[Q->front];
    Q->front = (Q->front + 1) % MAXSIZE;
    return 1;
}





// 队列长度
int length(CirQueue Q) {
    return (Q.rear - Q.front + MAXSIZE) % MAXSIZE;
}

int length(CirQueue Q) {
    return (Q.rear - Q.front + MAXSIZE) % MAXSIZE;
}

int length(CirQueue Q) {
    return (Q.rear - Q.front + MAXSIZE) % MAXSIZE;
}

int length(CirQueue Q) {
    return (Q.rear - Q.front + MAXSIZE) % MAXSIZE;
}

int length(CirQueue Q) {
    return (Q.rear - Q.front + MAXSIZE) % MAXSIZE;
}

int length(CirQueue Q) {
    return (Q.rear - Q.front + MAXSIZE) % MAXSIZE;
}





// 遍历
void printQueue(CirQueue Q) {
    int i = Q.front;

    while (i != Q.rear) {
        printf("%d ", Q.data[i]);
        i = (i + 1) % MAXSIZE;
    }

    printf("\n");
}

void printQueue(CirQueue Q){
    int i = Q.front;
    while(i != Q.rear) {
        printf("%d",Q.data[i]);
        i = (i+1) % MAXSIZE;
    }
    printf("\n");
}

void printQueue(CirQueue Q){
    int i = Q.front;
    while(i != Q.rear) {
        printf("%d", Q.data[i]);
        i = (i+1) % MAXSIZE;
    }
    printf("\n");
}

void printQueue(CirQueue Q){
    int i = Q.front;
    while(i != Q.rear) {
        printf("%d", Q.data[i]);
        i = (i+1) % MAXSIZE;
    }
    printf("\n");
}

void printQueue(CirQueue Q) {
    int i = Q.front;
    while(i!=Q.rear){
        printf("%d", Q.data[i]);
        i = (i+1)% MAXSIZE;
    }
    printf("\n");
}

void printQueue(CirQueue Q){
    int i = Q.front;
    while(i!= Q.rear){
        printf("%d", Q.data[i]);
        i = (i+1)% MAXSIZE;
    }
    printf("\n");
}





//测试
int main() {
    CirQueue Q;

    initQueue(&Q);

    enqueue(&Q, 10);
    enqueue(&Q, 20);
    enqueue(&Q, 30);

    printQueue(Q);

    int x;

    dequeue(&Q, &x);

    printf("出队: %d\n", x);

    printQueue(Q);

    return 0;
}

int main() {
    CirQueue Q;
    initQueue(*Q);
    enqueue(&Q, 10);
    enqueue(&Q, 20);
    enqueue(&Q, 30);
    printQueue(Q);
    int x;
    dequeue(&Q, &x);
    printf("出队：%d\n", x);
    printQueue(Q);
    return 0;
}

int main() {
    CirQueue Q;
    initQueue(*Q);
    enqueue(&Q, 10);
    enqueue(&Q, 20);
    enqueue(&Q, 30);
    printQueue(Q);
    int x;
    dequeue(*Q, *x);
    printf("出队：%d\n", x);
    printQueue(Q);
    return 0;
}

int main() {
    CirQueue Q;
    initQueue(*Q);
    enqueue(&Q,10);
    enqueue(&Q,20);
    enqueue(&Q,30);
    printQueue(Q);
    int x;
    dequeue(&Q,&x);
    printf("出队：%d\n",x);
    printQueue(Q);
    return 0;
}

int main(){
    CirQueue Q;
    initQueue(*Q);
    enqueue(&Q,10);
    enqueue(&Q,20);
    enqueue(&Q,30);
    printQueue(Q);
    int x;
    dequeue(&Q,&x);
    printf("出队：%d\n", x);
    printQueue(Q);
    return 0;
}

int main{
    CirQueue Q;
    enqueue(&Q,10);
    enqueue(&Q,20);
    enqueue(&Q,30);
    printQueue(Q);
    int x;
    dequeue(&Q,&x);
    printf("出队：%d\n",x);
    printQueue(Q);
    return 0;
}










带头结点链式队列
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct {
    Node *front;
    Node *rear;
} LinkQueue;

// 初始化
void initQueue(LinkQueue *Q) {
    Node *head = (Node *)malloc(sizeof(Node));

    head->next = NULL;

    Q->front = head;
    Q->rear = head;
}

// 判空
int isEmpty(LinkQueue Q) {
    return Q.front == Q.rear;
}

// 入队
void enqueue(LinkQueue *Q, int x) {
    Node *s = (Node *)malloc(sizeof(Node));

    s->data = x;
    s->next = NULL;

    Q->rear->next = s;

    Q->rear = s;
}

// 出队
int dequeue(LinkQueue *Q, int *x) {
    if (isEmpty(*Q)) {
        return 0;
    }

    Node *p = Q->front->next;

    *x = p->data;

    Q->front->next = p->next;

    if (Q->rear == p) {
        Q->rear = Q->front;
    }

    free(p);

    return 1;
}

// 遍历
void printQueue(LinkQueue Q) {
    Node *p = Q.front->next;

    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }

    printf("\n");
}

int main() {
    LinkQueue Q;

    initQueue(&Q);

    enqueue(&Q, 1);
    enqueue(&Q, 2);
    enqueue(&Q, 3);

    printQueue(Q);

    int x;

    dequeue(&Q, &x);

    printf("出队: %d\n", x);

    printQueue(Q);

    return 0;
}






//结构体定义
typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct {
    Node *front;
    Node *rear;
} LinkQueue;

typedef struct Node{
    int data;
    struct Node *next;
}Node;
typedef struct {
    Node *front;
    Node *rear;
}LinkQueue;

typedef struct Node{
    int data;
    struct Node *next;
}Node; 
typedef struct{
    Node *front;
    Node *rear;
}LinkQueue;

typedef struct Node{
    int data;
    struct Node *next;
}Node;
typedef struct{
    Node *front;
    Node *rear;
}LinkQueue;  

typedef struct Node{
    int data;
    struct Node *next;  
}Node;
typedef struct{
    Node *front;
    Node *rear;
}LinkQueue;

typedef struct Node{
    int data;
    struct Node *next;
}Node;
typedef struct{
    Node *front;
    Node *rear;
}LinkQueue;





// 初始化
void initQueue(LinkQueue *Q) {
    Node *head = (Node *)malloc(sizeof(Node));

    head->next = NULL;

    Q->front = head;
    Q->rear = head;
}

void initQueue(LinkQueue *Q) {
    Node *head = (Node *)malloc(sizeof(Node));
    head->next = NULL;
    Q->front = head;
    Q->rear = head;
}

void initQueue(LinkQueue *Q) {
    Node *head = (Node *)malloc(sizeof(Node));
    head->next = NULL;
    Q->front = head;
    Q->rear = head;
}

void initQueue(LinkQueue *Q) {
    Node *head = (Node *)malloc(sizeof(Node));
    head->next = NULL;
    Q->front = head;
    Q->rear = head;
}

void initQueue(LinkQueue *Q){
    Node *head = (Node *)malloc(sizeof(Node));
    head->next = NULL;
    Q->front = head;
    Q->rear = head; 
}

void initQueue(LinkQueue *Q){
    Node *head = (Node *)malloc(sizeof(Node));
    head->next = NULL;
    Q->front = head;
    Q->rear = head;
}





// 判空
int isEmpty(LinkQueue Q) {
    return Q.front == Q.rear;
}

int isEmpty(LinkQueue Q) {
    return Q.front == Q.rear;
}

int isEmpty(LinkQueue Q) {
    return Q.front == Q.rear;
}

int isEmpty(LinkQueue Q) {
    return Q.front == Q.rear;
}

int isEmpty(LinkQueue Q) {
    return Q.front == Q.rear;
}

int isEmpty(LinkQueue Q){
    return Q.front == Q.rear;
}





// 入队
void enqueue(LinkQueue *Q, int x) {
    Node *s = (Node *)malloc(sizeof(Node));

    s->data = x;
    s->next = NULL;

    Q->rear->next = s;

    Q->rear = s;
}

void enqueue(LinkQueue *Q, int x) {
    Node *s = (Node *)malloc(sizeof(Node));
    s->data = x;
    s->next = NULL;
    Q->rear->next = s;
    Q->rear = s;
}

void enqueue(LinkQueue *Q, int x) {
    Node *s = (Node *)malloc(sizeof(Node));
    s->data = x;
    s->next = NULL;
    Q->rear->next = s;
    Q->rear = s;
}

void enqueue(LinkQueue *Q, int x){
    Node *s = (Node *)malloc(sizeof(Node));
    s->data = x;
    s->next = NULL;
    Q->rear->next = s;
    Q->rear = s;
}

void enqueue(LinkQueue *Q, int x){
    Node *s = (Node *)malloc(sizeof(Node));
    s->data = x;
    s->next = NULL;
    Q->rear->next = s;
    Q->rear = s;
}

void enqueue(LinkQueue *Q, int x){
    Node *s = (Node *)malloc(sizeof(Node));
    s->data = x;
    s->next = NULL;
    Q->rear->next = s;
    Q->rear =s;
}

// 出队
int dequeue(LinkQueue *Q, int *x) {
    if (isEmpty(*Q)) {
        return 0;
    }

    Node *p = Q->front->next;

    *x = p->data;

    Q->front->next = p->next;

    if (Q->rear == p) {
        Q->rear = Q->front;
    }

    free(p);

    return 1;
}

int dequeue(LinkQueue *Q, int *x){
    if(isEmpty(*Q)){
        return 0;
    }
    Node *p = Q->front->next;
    *x = p->data;
    Q->front->next = p->next;
    if(Q->rear == p){
        Q->rear = Q->front;
    }
    free(p);
    return 1;
}

int dequeue(LinkQueue *Q, int *x){
    if(isEmpty(*Q)){
        return 0;
    }
    Node *p = Q->front->next;
    *x = p->data;
    Q->front->next = p->next;
    if(Q->rear = p){
        Q->rear = Q->front;
    }
    free(p);
    return 1;
}

int dequeue(LinkQueue *Q, int *x){
    if(isEmpty(*Q)){
        return 0;
    }
    Node *p = Q->front->next;
    *x = p->data;
    Q->front->next = p->next;
    if(Q->rear = p){
        Q->rear = Q->front;
    }
    free(p);
    return 1;
}

int dequeue(LinkQueue *Q, int *x){
    if(isEmpty(*Q)){
        return 0;
    }
    Node *p = Q->front->next;
    *x = p->data;
    Q->front->next = p->next;
    if(Q->rear = p){
        Q->rear = Q->front;
    }
    free(p);
    return 1;
}

int dequeue(LinkQueue *Q, int *x){
    if(isEmpty(*Q)){
        return 0;
    }
    Node *p = Q->front->next;
    *x = p->data;
    Q->front->next = p->next;
    if(Q->rear = p){
        Q->rear = Q->front;
    }
    free(p);
    return 1;
}





// 遍历
void printQueue(LinkQueue Q) {
    Node *p = Q.front->next;

    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }

    printf("\n");
}

void printQueue(LinkQueue Q){
    Node *p = Q.front->next;
    while(p!=NULL){
        printf("%d",p->data);
        p = p->next;
    }
    printf("\n");
}

void printQueue(LinkQueue Q){
    Node *p = Q.front->next;
    while(p!=NULL){
        printf("%d",p->data);
        p = p->next;
    }
    printf("\n");
}

void printQueue(LinkQueue Q){
    Node *p = Q.front->next;
    while(p!=NULL){
        printf("%d",p->data);
        p = p->next;
    }
    printf("\n");
}  

void printQueue(LinkQueue Q){
    Node *p = Q->front->next;
    while(p!=NULL){
        printf("%d",p->data);
        p = p->next;
    }
    printf("\n");
}

void printQueue(LinkQueue Q){
    Node *p = Q->front->next;
    while(p!=NULL){
        printf("%d",p->data);  
        p = p->next; 
    }
    printf("\n");
}





//测试代码和循环队列一致










//双端队列
#include <stdio.h>

#define MAXSIZE 10

typedef struct {
    int data[MAXSIZE];
    int front;
    int rear;
} Deque;

// 初始化
void initDeque(Deque *D) {
    D->front = 0;
    D->rear = 0;
}

// 判空
int isEmpty(Deque D) {
    return D.front == D.rear;
}

// 判满
int isFull(Deque D) {
    return (D.rear + 1) % MAXSIZE == D.front;
}

// 队尾插入
int pushRear(Deque *D, int x) {
    if (isFull(*D)) {
        return 0;
    }

    D->data[D->rear] = x;

    D->rear = (D->rear + 1) % MAXSIZE;

    return 1;
}

// 队头插入
int pushFront(Deque *D, int x) {
    if (isFull(*D)) {
        return 0;
    }

    D->front = (D->front - 1 + MAXSIZE) % MAXSIZE;

    D->data[D->front] = x;

    return 1;
}

// 队头删除
int popFront(Deque *D, int *x) {
    if (isEmpty(*D)) {
        return 0;
    }

    *x = D->data[D->front];

    D->front = (D->front + 1) % MAXSIZE;

    return 1;
}

// 队尾删除
int popRear(Deque *D, int *x) {
    if (isEmpty(*D)) {
        return 0;
    }

    D->rear = (D->rear - 1 + MAXSIZE) % MAXSIZE;

    *x = D->data[D->rear];

    return 1;
}





//结构体定义
typedef struct {
    int data[MAXSIZE];
    int front;
    int rear;
} Deque;

typedef struct {
    int data[MAXSIZE];
    int front;
    int rear;
} Deque;

typedef struct {
    int data[MAXSIZE];
    int front;
    int rear;
} Deque;

typedef struct{
    int data[MAXSIZE];
    int front;
    int rear;
} Deque;

typedef struct {
    int data[MAXSIZE];
    int front;
    int rear;
} Deque;

typedef struct{
    int data[MAXSIZE];
    int front;
    int rear;
}





//初始化
void initDeque(Deque *D){
    D->front = 0;
    D->rear = 0;
}

void initDeque(Deque *D){
    D->front = 0;
    D->rear = 0;
}

void initDeque(Deque *D){
    D->front = 0;
    D->rear = 0;
}

void initDeque(Deque *D){
    D->front = 0;
    D->rear = 0;
}

void initDeque(Deque *D){
    D->front = 0;
    D->rear = 0;
}

void initDeque(Deque *D){
    D->front = 0;
    D->rear = 0;
}





// 判空
int isEmpty(Deque D) {
    return D.front == D.rear;
}

int isEmpty(Deque D) {
    return D.front == D.rear;
}

int isEmpty(Deque D) {
    return D.front == D.rear;
}

int isEmpty(Deque D) {
    return D.front == D.rear;
}

int isEmpty(Deque D) {
    return D.front == D.rear;
}

int isEmpty(Deque D) {
    return D.front == D.rear;
}





// 判满
int isFull(Deque D) {
    return (D.rear + 1) % MAXSIZE == D.front;
}

int isFull(Deque D) {
    return (D.rear + 1) % MAXSIZE == D.front;
}

int isFull(Deque D){
    return (D.rear + 1) % MAXSIZE == D.front;
}
 
int isFull(Deque D){
    return (D.rear + 1) % MAXSIZE == D.front;
}

int isFull(Deque D){
    return (D.rear + 1) % MAXSIZE == D.front;
}

int isFull(Deque D){
    return (D.rear + 1) % MAXSIZE == D.front;
}





// 队尾插入
int pushRear(Deque *D, int x) {
    if (isFull(*D)) {
        return 0;
    }

    D->data[D->rear] = x;

    D->rear = (D->rear + 1) % MAXSIZE;

    return 1;
}

int pushRear(Deque *D, int x) {
    if (isFull(*D)) {
        return 0;
    }
    D->data[D->rear] = x;
    D->rear = (D->rear +1) %MAXSIZE;
    return 1;
}

int pushRear(Deque *D, int x) {
    if (isFull(*D)){
        return 0; 
    }
    D->data[D->rear] = x;
    D->rear = (D->rear + 1)%MAXSIZE;
    return 1; 
}

int pushRear(Deque *D, int x) {
    if(isFull(*D)){
        return 0;
    }
    D->data[D->rear] = x;
    D->rear = (D->rear + 1)%MAXSIZE;
    return 1; 
}

int pushRear(Deque *D, int x) {
    if(isFull(*D)){
        return 0;
    }
    D->data[D->rear] = x;
    D->rear = (D->rear + 1)%MAXSIZE;
    return 1;
}

int pushRear(Deque *D, int x){
    if(isFull(*D)){
        return 0;
    }
    D->data[D->rear] = x;
    D->rear = (D->rear+1)%MAXSIZE;
    return 1;
}





// 队头插入
int pushFront(Deque *D, int x) {
    if (isFull(*D)) {
        return 0;
    }

    D->front = (D->front - 1 + MAXSIZE) % MAXSIZE;

    D->data[D->front] = x;

    return 1;
}

int pushFront(Deque *D, int x) {
    if(isFull(*D)){
        return 0;
    }
    D->front = (D->front - 1 + MAXSIZE) % MAXSIZE;
    D->data[D->front] = x;
    return 1;
}

int pushFront(Deque *D, int x) {
    if(isFull(*D)) {
        return 0;
    }
    D->front = (D->front - 1 + MAXSIZE) % MAXSIZE;
    D->data[D->front] = x;
    return 1;
}

int pushFront(Deque *D, int x) {
    if(isFull(*D)){
        return 0;
    }
    D->front = (D->front - 1 + MAXSIZE) % MAXSIZE;
    D->data[D->front] = x;
    return 1;
}

int pushFront(Deque *D, int x) {
    if(isFull(*D)){
        return 0;
    }
    D->front = (D->front - 1 + MAXSIZE) % MAXSIZE;
    D->data[D->front] = x;
    return 1;
}

int pushFront(Deque *D, int x){
    if(isFull(*D)){
        return 0;
    }
    D->front = (D->front - 1 + MAXSIZE);
    D->data[D->front] = x;
    return 1;
}





// 队头删除
int popFront(Deque *D, int *x) {
    if (isEmpty(*D)) {
        return 0;
    }

    *x = D->data[D->front];

    D->front = (D->front + 1) % MAXSIZE;

    return 1;
}

int popFront(Deque *D, int *x) {
    if(isEmpty(*D)){
        return 0;
    }
    *x = D->data[D->front];
    D->front = (D->front + 1) % MAXSIZE;
    return 1;
}

int popFront(Deque *D, int *x){
    if(isEmpty(*D)){
        return 0;
    }
    *x = D->data[D->front];
    D->front = (D->front + 1) % MAXSIZE;
    return 1;
}

int popFront(Deque *D, int *x){
    if(isEmpty(*D)){
        return 0;
    }
    *x = D->data[D->front];
    D->front = (D->front + 1)% MAXSIZE;
    return 1;
}

int popFront(Deque *D, int *x) {
    if(isEmpty(*D)){
        return 0;
    }
    *x = D->data[D->front];
    D->front = (D->front + 1) % MAXSIZE;
    return 1; 
}

int popFront(Deque *D, int *x){
    if(isEmpty(*D)){
        return 0;
    }
    *x = D->data[D->front];
    D->front = (D->front + 1) % MAXSIZE;
    return 1;
}

// 队尾删除
int popRear(Deque *D, int *x) {
    if (isEmpty(*D)) {
        return 0;
    }

    D->rear = (D->rear - 1 + MAXSIZE) % MAXSIZE;

    *x = D->data[D->rear];

    return 1;
}

int popRear(Deque *D, int *x){
    if(isEmpty(*D)){
        return 0;
    }
    D->rear = (D->rear - 1 + MAXSIZE) % MAXSIZE;
    *x = D->data[D->rear];
    return 1;
}

int popRear(Deque *D, int *x){
    if(isEmpty(*D)){
        return 0;
    }
    D->rear = (D->rear - 1 + MAXSIZE) % MAXSIZE;
    *x = D->data[D->rear];
    return 1;
}

int popRear(Deque *D, int *x){
    if(isEmpty(*D)){
        return 0;
    }
    D->rear = (D->rear - 1 + MAXSIZE) % MAXSIZE;
    *x = D->data[D->rear];
    return 1;
}

int popRear(Deque *D, int *x){
    if(isEmpty(*D)){
        return 0;
    }
    D->rear = (D->rear - 1 + MAXSIZE) % MAXSIZE;
    *x = D->data[D->rear];
    return 1;
}

int popRear(Deque *D, int *x){
    if(isEmpty(*D)){
        return 0;
    }
    D->rear = (D->rear - 1 + MAXSIZE) % MAXSIZE;
    *x = D->data[D->rear];
    return 1;
}