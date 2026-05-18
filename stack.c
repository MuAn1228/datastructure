#include <stdio.h>
#include <stdlib.h>

//定义结构体
typedef struct {
    int data[100];
    int top;
}SqStack;

typedef struct {
    int data[100];
    int top;
}SqStack;

typedef struct {
    int data[100];
    int top;
}SqStack;

typedef struct{
    int data[100];
    int top;
}SqStack;

typedef struct {
    int data[100];
    int top;
}SqStack;

typedef struct {
    int data[100];
    int top;
}SqStack;





//初始化
void InitStack(SqStack *S){
    S->top = -1;
}

void InitStack(SqStack *S){
    S->top = -1;
}

void InitStack(SqStack *S){
    S->top = -1;
}

void InitStack(SqStack *S){
    S->top = -1;
}

void InitStack(SqStack *S){
    S->top = -1;
}

void InitStack(SqStack *S){
    S->top = -1;
}





//判空
bool StackEmpty(SqStack S){
    return S.top == -1;
}

bool StackEmpty(SqStack S){
    return S.top == -1;
}

bool StackEmpty(SqStack S){
    return S.top == -1;
}

bool StackEmpty(SqStack S){
    return S.top == -1;
}

bool StackEmpty(SqStack S){
    return S.top == -1;
}

bool StackEmpty(SqStack S){
    return S.top == -1;
}





//入栈
bool Push(SqStack *S,int x){
    if(S->top == 99){
        return false;
    }
    S->data[++S->top] = x;
    return true;
}

bool Push(SqStack *S, int x){
    if(S->top == 99){
        return 0;
    }
    S->data[++S->top] = x;
    return 1;
}

bool Push(SqStack *S, int x){
    if(S->top == 99){
        return 0;
    }
    S->data[++S->top] = x;
    return 1;
}

bool Push(SqStack *S, int x){
    if(S->top == 99){
        return 0;
    }
    S->data[++S->top] = x;
    return 1;
}

bool Push(SqStack *S, int x){
    if(S->top == 99){
        return 0;
    }
    S->data[++S->top] = x;
    return 1;
}

bool Push(SqStack *S, int x){
    if(S->top == 99){
        return 0;
    }
    S->data[++S->top] = x;
    return 1;
}





//出栈
bool Pop(SqStack *S, int *x){
    if(S->top == -1){
        return false;
    }
    *x = S->data[S->top--];
    return true;
}  

bool Pop(SqStack *S, int *x){
    if(S->top == -1){
        return 0;
    }
    *x = S->data[S->top--];
    return 1;
}

bool Pop(SqStack *S, int *x){
    if(S->top == -1){
        return 0;
    }
    *x = S->data[S->top--];
    return 1;
}

bool Pop(SqStack *S, int *x){
    if(S->top == -1){
        return 0;
    }
    *x = S->data[S->top--];
    return 1;
}

bool Pop(SqStack *S, int *x){
    if(S->top == -1){
        return 0;
    }
    *x = S->data[S->top--];
    return 1;
}

bool Pop(SqStack *S, int *x){
    if(S->top == -1){
        return 0;
    }
    *x = S->data[S->top--];
    return 1;
}





//读栈顶
bool GetTop(SqStack S, int *x){
    if(S.top == -1){
        return 0;
    }
    *x = S.data[S.top];
    return 1;
}

bool GetTop(SqStack S,int *x){
    if(S.top == -1){
        return 0;
    }
    *x = S.data[S.top];
    return 1;
}

bool GetTop(SqStack S, int *x){
    if(S.top == -1){
        return 0;
    }
    *x = S.data[S.top];
    return 1;
}

bool GetTop(SqStack S, int *x){
    if(S.top == -1){
        return 0;
    }
    *x = S.data[S.top];
    return 1;
}

bool GetTop(SqStack S, int *x){
    if(S.top == -1){
        return 0;
    }
    *x = S.data[S.top];
    return 1;
}

bool GetTop(SqStack S, int *x){
    if(S.top == -1){
        return 0;
    }
    *x = S.data[S.top];
    return 1;
}










//链栈

//结点定义
typedef struct LinkNode{
    int data;
    struct LinkNode *next;
}LinkNode; 

typedef struct LinkNode{
    int data;
    struct LinkNode *next;
}LinkNode;

typedef struct LinkNode{
    int data;
    struct LinkNode *next;
}LinkNode;

typedef struct LinkNode{
    int data;
    struct LinkNode *next;
}LinkNode;

typedef struct LinkNode{
    int data;
    struct LinkNode *next;
}LinkNode;

typedef struct LinkNode{
    int data;
    struct LinkNode *next;
}LinkNode;





//栈定义
typedef struct{
    LinkNode *top;
}LiStack;

typedef struct{
    LinkNode *top;
}LiStack;

typedef struct{
    LinkNode *top;
}LiStack;

typedef struct{
    LinkNode *top;
}LiStack;

typedef struct{
    LinkNode *top;
}LiStack;

typedef struct{
    LinkNode *top;
}LiStack;





//初始化
void InitStack(LiStack *S){
    S->top = NULL;
}

void InitStack(LiStack *S){
    S->top = NULL;
}

void InitStack(LiStack *S){
    S->top = NULL;
}

void InitStack(LiStack *S){
    S->top = NULL;
}

void InitStack(LiStack *S){
    S->top = NULL;
}

void InitStack(LiStack *S){
    S->top = NULL;
}





//入栈
void Pust(LiStack *S, int x){
    LinkNode *s = (LinkNode*)malloc(sizeof(LinkNode));
    s->data = x;
    s->next = S->top;
    S->top = s;
}

void Pust(LiStack *S, int x){
    LinkNode *s = (LinkNode*)malloc(sizeof(LinkNode));
    s->data = x;
    s->next = S->top;
    S->top = s;
}

void Pust(LiStack *S, int x){
    LinkNode *s = (LinkNode*)malloc(sizeof(LinkNode));
    s->data = x;
    s->next = S->top;
    S->top = s;
}

void Pust(LiStack *S, int x){
    LinkNode *s = (LinkNode*)malloc(sizeof(LinkNode));
    s->data = x;
    s->next = S->top;
    S->top = s;
}

void Pust(LiStack *S, int x){
    LinkNode *s = (LinkNode*)malloc(sizeof(LinkNode));
    s->data = x;
    s->next = S->top;
    S->top = s;
}

void Pust(LiStack *S, int x){
    LinkNode *s = (LinkNode*)malloc(sizeof(LinkNode));
    s->data = x;
    s->next = S->top;
    S->top = s;
}

void Pust(LiStack *S, int x){
    LinkNode *s = (LinkNode*)malloc(sizeof(LinkNode));
    s->data = x;
    s->next = S->top;
    S->top = s;
}





//出栈
bool Pop(LiStack *S, int *x){
    if(S->top == NULL){
        return 0;
    }
    LinkNode *p = S->top;
    *x = p->data;
    S->top = p->next;
    free(p);
    return 1;
}

bool Pop(LiStack *S, int *x){
    if(S->top == NULL){
        return 0;
    }
    LinkNode *p = S->top;
    *x = p->data;
    S->top = p->next;
    free(p);
    return 1;
}

bool Pop(LiStack *S, int *x){
    if(S->top == NULL){
        return 0;
    }
    LinkNode *p = S->top;
    *x = p->data;
    S->top = p->next;
    free(p);
    return 1;
}

bool Pop(LiStack *S, int *x){
    if(S->top == NULL){
        return 0;
    }
    LinkNode *p = S->top;
    *x = p->data;
    S->top = p->next;
    free(p);
    return 1;
}










//共享栈
#define MaxSize 100

typedef struct{
    int data[MaxSize];

    int top0;
    int top1;

}ShareStack;

#define MaxSize 100
typedef struct{
    int data[MaxSize];
    int top0;
    int top1;
}ShareStack;

#define MaxSize 100
typedef struct{
    int data[MaxSize];
    int top 0;
    int top 1;
}ShareStack;

#define MaxSize 100
typedef struct{
    int data[MaxSize];
    int top 0;
    int top 1;
}ShareStack;

#define MaxSize 100
typedef struct{
    int data[MaxSize];
    int top 0;
    int top 1;
}ShareStack;

#define MaxSize 100;
typedef struct {
    int data[MaxSize];
    int top 0;
    int top 1;
}ShareStack;





//初始化
void InitStack(ShareStack *S){

    S->top0 = -1;
    S->top1 = MaxSize;

}

void InitStack(ShareStack *S){
    S->top0 = -1;
    S->top1 = MaxSize;
}

void InitStack(ShareStack *S){
    S->top0 = -1;
    S->top1 = MaxSize;
}

void InitStack(ShareStack *S){
    S->top0 = -1;
    S->top1 = MaxSize;
}

void InitStack(ShareStack *S){
    S->top0 = -1;
    S->top1 = MaxSize;
}

void InitStack(ShareStack *S){
    S->top0 = -1;
    S->top1 = MaxSize;
}

void InitStack(ShareStack *S){
    S->top0 = -1;
    S->top1 = MaxSize;
}





//判断栈满
int StackFull(ShareStack S){
    return S.top0 + 1 == S.top1;
}

int StackFull(ShareStack S){
    return S.top0 + 1 == S.top1;
}

int StackFull(ShareStack S){
    return S.top0 + 1 == S.top1;
}

int StackFull(ShareStack S){
    return S.top0 + 1 == S.top1;
}

int StackFull(ShareStack S){
    return S.top0 + 1 == S.top1;
}

int StackFull(ShareStack S){
    return S.top0 + 1 == S.top1;
}





//入栈
int Push(ShareStack *S, int stackNum, int x){

    if(S->top0 + 1 == S->top1){
        return 0;
    }

    if(stackNum == 0){

        S->top0++;
        S->data[S->top0] = x;

    }else{

        S->top1--;
        S->data[S->top1] = x;

    }

    return 1;
}

int Push(ShareStack *S, int stackNum, int x){
    if(S->top0 + 1 == S->top1){
        return 0;
    }
    if(stackNum == 0){
        S->top0++;
        S->data[S->top0] = x;
    }else{
        S->top1--;
        S->data[S->top1] = x;
    }
    return 1;
}

int Push(ShareStack *S, int stackNum, int x){
    if(S->top0 + 1 == S->top1){
        return 0;
    }
    if(stackNum == 0){
        S->top0++;
        S->data[S->top0] = x;
    }else{
        S->top1--;
        S->data[S->top1] = x;
    }
    return 1;
}

int Push(ShareStack *S, int stackNum, int x){
    if(S->top0 + 1 == S->top1){
        return 0;
    }
    if(stackNum == 0){
        S->top0++;
        S->data[S->top0] = x;
    }else{
        S->top1--;
        S->data[S->top1] = x;
    }
    return 1;
}

int Push(ShareStack *S, int stackNum, int x){
    if(S->top0 + 1 == S->top1){
        return 0;
    }
    if(stackNum == 0){
        S->top0++;
        S->data[S->top0] = x;
    }else{
        S->top1--;
        S->data[S->top1] = x;
    }
    return 1;
}

int Push(ShareStack *S, int stackNum, int x){
    if(S->top0 + 1 == S->top1){
        return 0;
    }
    if(stackNum == 0){
        S->top0++;
        S->data[S->top0] = x;
    }else{
        S->top1--;
        S->data[S->top1] = x;
    }
    return 1;
}





//出栈
int Pop(ShareStack *S, int stackNum, int *x){

    if(stackNum == 0){

        if(S->top0 == -1){
            return 0;
        }

        *x = S->data[S->top0];
        S->top0--;

    }else{

        if(S->top1 == MaxSize){
            return 0;
        }

        *x = S->data[S->top1];
        S->top1++;

    }

    return 1;
}

int Pop(ShareStack *S, int stackNum, int *x){
    if(stackNum == 0){
        if(S->top0 == -1){
            return 0;
        }
        *x = S->data[S->top0];
        S->top0--;
    }else{
        if(S->top1 == MaxSize){
            return 0;
        }
        *x = S->data[S->top1];
        S->top1++;
    }
    return 1;
}

int Pop(ShareStack *S, int stackNum, int *x){
    if(stackNum == 0){
        if(S->top0 == -1){
            return 0;
        }
        *x = S->data[S->top0];
        S->top0--;
    }else{
        if(S->top1 == MaxSize){
            return 0;
        }
        *x = S->data[S->top1];
        S->top1++;
    }
    return 1;
}

int Pop(ShareStack *S, int stackNum, int *x){
    if(stackNum == 0){
        if(S->top0 == -1){
            return 0;
        }
        *x = S->data[S->top0];
        S->top0--;
    }else{
        if(S->top1 == MaxSize){
            return 0;
        }
        *x = S->data[S->top1];
        S->top1++;
    }
    return 1;
}

int Pop(ShareStack *S, int stackNum, int *x){
    if(stackNum == 0){
        if(S->top0 == -1){
            return 0;
        }
        *x = S->data[S->top0];
        S->top0--;
    }else{
        if(S->top1 == MaxSize){
            return 0;
        }
        *x = S->data[S->top1];
        S->top1++;
    }
    return 1;
}

int Pop(ShareStack *S, int stackNum, int *x){
    if(stackNum == 0){
        if(S->top0 == -1){
            return 0;
        }
        *x = S->data[S->top0];
        S->top0--;
    }else{
        if(S->top1 == MaxSize){
            return 0;
        }
        *x = S->data[S->top1];
        S->top1++;
    }
    return 1;
}

