#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;

typedef struct LNode {
    ElemType data;
    struct LNode *next;
} LNode, *LinkList;

// 创建新节点
LNode* newNode(ElemType x) {
    LNode *p = (LNode*)malloc(sizeof(LNode));
    p->data = x;
    p->next = NULL;
    return p;
}

// 尾插法创建链表
LinkList createList(int n) {
    LinkList L = NULL, tail = NULL;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        LNode *p = newNode(x);
        if (L == NULL) {
            L = tail = p;
        } else {
            tail->next = p;
            tail = p;
        }
    }
    return L;
}

// 按位查找（第i个，从1开始）
int getElem(LinkList L, int i, ElemType *e) {
    if (i < 1) return 0;
    LNode *p = L;
    int j = 1;
    while (p && j < i) {
        p = p->next;
        j++;
    }
    if (!p) return 0;
    *e = p->data;
    return 1;
}

// 插入（第i个位置插入x）
int insert(LinkList *L, int i, ElemType x) {
    if (i < 1) return 0;

    // 插在第1个位置（头插）
    if (i == 1) {
        LNode *p = newNode(x);
        p->next = *L;
        *L = p;
        return 1;
    }

    LNode *pre = *L;
    int j = 1;
    while (pre && j < i - 1) {
        pre = pre->next;
        j++;
    }

    if (!pre) return 0;

    LNode *p = newNode(x);
    p->next = pre->next;
    pre->next = p;
    return 1;
}

// 删除第i个元素
int del(LinkList *L, int i, ElemType *e) {
    if (i < 1 || *L == NULL) return 0;

    // 删除第1个节点
    if (i == 1) {
        LNode *p = *L;
        *e = p->data;
        *L = p->next;
        free(p);
        return 1;
    }

    LNode *pre = *L;
    int j = 1;
    while (pre->next && j < i - 1) {
        pre = pre->next;
        j++;
    }

    if (!pre->next) return 0;

    LNode *q = pre->next;
    *e = q->data;
    pre->next = q->next;
    free(q);
    return 1;
}

// 打印链表
void printList(LinkList L) {
    LNode *p = L;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

// 测试
int main() {
    int n;
    scanf("%d", &n);

    LinkList L = createList(n);

    printList(L);

    ElemType e;

    // 查找
    if (getElem(L, 2, &e))
        printf("第2个元素: %d\n", e);

    // 插入
    insert(&L, 2, 99);
    printList(L);

    // 删除
    del(&L, 3, &e);
    printf("删除元素: %d\n", e);
    printList(L);

    return 0;
}

/*定义单链表默写五遍
#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode;

#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode;

#include <stdio.h>
#include <stdio.h>
typedef int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode;

#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode;

#include <stdio.h>
#include <stdlib.H>
typedef int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode;*/



/*无头结点初始化单链表默写五遍
Node* initList() {
    return NULL;
}
Node* initList() {
    return NULL;
}
Node* initList() {
    return NULL;
}
Node* initList() {
    return NULL;
}
Node* initList() {
    return NULL;
}

带头结点初始化单链表默写五遍
Node* initList() {
    Node* head = (Node*)malloc(sizeof(Node));
    head->next = NULL;
    return head;
}
Node* initList() {
    Node* head = (Node*)malloc(sizeof(Node));
    head->next = NULL;
    return head;
}
Node* initList() {
    Node* head = (Node*)malloc(sizeof(Node));
    head->next = NULL;
    return head;
}
Node* initList() {
    Node* head = (Node*)malloc(sizeof(Node));
    head->next = NULL;
    return head;
}
Node* initList() {
    Node* head = (Node*)malloc(sizeof(Node));
    head->next = NULL;
    return head;
}*/



/*创建一个新结点代码
LNode* createNode(ElemType x) {
    LNode *p = (LNode*)malloc(sizeof(LNode)); // 分配内存
    if (p == NULL) return NULL;               // 防止分配失败

    p->data = x;     // 赋值
    p->next = NULL;  // 指针置空

    return p;        // 返回新结点地址
}
LNode* createNode(ElenType x) {
    LNode *p = (LNode*)malloc(sizeof(LNode));
    if (p == NULL) return NULL;

    p->data = x;
    p->next = NULL;

    return p;
}
LNode* createNode(ElemType x) {
    LNode *p = (LNode*)malloc(sizeof(LNode));
    if (p == NULL) return NULL;

    p->data = x;
    p->next = NULL;

    return p;
}
LNode* createNode(ElemType x) {
    LNode *p = (LNode*)malloc(sizeof(LNode));
    if (p == NULL) return NULL;

    p->data = x;
    p->next = NULL;

    return p;
}
LNode* createNode(ElemType x) {
    LNode* p = (LNode*)malloc(sizeof(LNode));
    if (p == NULL) return NULL;

    p->data = x;
    p->next = NULL;

    return p;
}
*/



/*头插法创建单链表默写五遍
LNode* headInsert(LNode *head, ElemType x) {
    LNode *s = createNode(x);
    s->next = head->next;
    head->next = s;
    return head;
}
LNode* headInsert(LNode *head, ElemType x) {
    LNode *s = createNode(x);
    s->next = head->next;
    head->next = s;
    return head;
}
LNode* headInsert(LNode *head, ElemType x) {
    LNode *s = createNode(x);
    s->next = head->next;
    head->next = s;
    return head;
}
LNode* headInsert(LNode *head, ElemType x) {
    LNode *s = createNode(x);
    s->next = head->next;
    head->next = s->next;
    return head;
}
LNode* InsertNode(LNode *head,ElemType x) {
    LNode *s = createNode(x);
    s->next = head->next;
    head->next = s;
    return s;
}
*/


尾插法
LNode* tailInsert(LNode* head, ElemType x) {
    LNode* s = createNode(x);
    LNode* p = head;
    while (p->next != NULL)
        p = p->next;
    p->next = s;
    return head;
}
遍历
void printList(LNode* head) {
    LNode* p = head->next;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
}
按值查找
LNode* find(LNode* head, ElemType x) {
    LNode* p = head->next;
    while (p != NULL) {
        if (p->data == x)
            return p;
        p = p->next;
    }
    return NULL;
}
按位查找
LNode* getElem(LNode* head, int i) {
    LNode* p = head->next;
    int j = 1;
    while (p != NULL && j < i) {
        p = p->next;
        j++;
    }
    return p;
}
按位置插入
int insertByPos(LinkList head, int i, ElemType x) {
    LNode *p = head;
    int j = 0;

    // 找到第 i-1 个结点
    while (p != NULL && j < i - 1) {
        p = p->next;
        j++;
    }

    if (p == NULL) return 0; // 插入位置非法

    LNode *s = newNode(x);
    s->next = p->next;
    p->next = s;

    return 1;
}
删除
int deleteNode(LNode* head, ElemType x) {
    LNode* p = head;
    while (p->next != NULL) {
        if (p->next->data == x) {
            LNode* q = p->next;
            p->next = q->next;
            free(q);
            return 1;
        }
        p = p->next;
    }
    return 0;
}



/*尾插法默写五遍
LNode* tailInsert(LNode *head, ElemType x){
    LNode *s = createNode(x);
    LNode *p = head;
    while (p->next != NULL){
        p = p->next;
    }
    p->next = s;
    return head;
}
LNode* tailInsert(LNode *head, ElemType x){
    LNode *s = createNode(x);
    LNode *p = head;
    while (p->next != NULL){
        p = p->next;
    }
    p->next = s;
    return head;
}
LNode* tailInsert(LNode *head, ElemType x){
    LNode *s = createNode(x);
    LNode *p = head;
    while (p->next != NULL){
        p = p->next;
    }
    p->next = s;
    return head;
}
LNode* tailInsert(LNode *head, ElemType x){
    LNode *s = createNode(x);
    LNode *p = head;
    while (p->next != NULL){
        p = p->next;
    }
    p->next = s;
    return head;
}
LNode* tailInsert(LNode *head, ElemType x){
    LNode *s = createNode(x);
    LNode *p = head;
    while(p->next != NULL){
        p = p->next;
    }
    p->next = s;
    return head;
}
*/



/*遍历默写五遍
void printList(LNode *head){
    LNode *p = head->next;
    while (p != NULL){
        printf("%d ",p->data);
        p = p->next;
    }
}
void printList(LNode *head){
    LNode *p = head->next;
    while (p != NULL){
        printf("%d ",p->data);
        p = p->next;
    }
}
void printList(LNode *head){
    LNode *p = head->next;
    while (p != NULL){
        printf("%d ",p->data);
        p = p->next;
    }
}
void printList(LNode *head){
    LNode *p = head->next;
    while (p! = NULL){
        printf("%d ",p->data);
        p = p->next;
    }
}
void printList(LNode *head){
    LNode *p = head->next;
    while (p != NULL){
        printf("%d ",p->data);
        p = p->next;
    }
}
*/











按值查找
LNode* find(LNode* head, ElemType x) {
    LNode* p = head->next;
    while (p != NULL) {
        if (p->data == x)
            return p;
        p = p->next;
    }
    return NULL;
}
按位查找
LNode* getElem(LNode* head, int i) {
    LNode* p = head->next;
    int j = 1;
    while (p != NULL && j < i) {
        p = p->next;
        j++;
    }
    return p;
}
/*按值查找默写五遍
LNode* find(LNode *head,ElemType x){
    LNode *p = head->next;
    while(p!=NULL){
        if(p->data = x){
            return p;
        }
        p=p->next;
    }
    return NULL;
}
LNode* find(LNode *head,ElemType x){
    LNode *p = head->next;
    while(p!=NULL){ 
        if(p->data==x){
            return p;
        }
        p=p->next;
    }
    return NULL;
}
LNode* find(LNode *head,ElemType x){
    LNode *p = head->next;
    while(p!=NULL){
        if(p->data==x){
            return p;
        }
        p=p->NULL;
    }
    return NULL;
}
LNode* find(LNode *head,ElemType x){
    LNode *p=head->next;
    while(p!=NULL){
        if(p->next==x){
            return p;
        }
        p=p->next;
    }
    return NULL;
}
LNode* find(LNode *head,ElemType x){
    LNode *p = head->next;
    while(p!=NULL){
        if(p->data==x){
            return p;
        }
        p=p->next;
    }
    return NULL;
}
*/

/*按位查找默写五遍
LNode* getElem(LNode* head, int i) {
    LNode* p = head->next;
    int j = 1;
    while (p != NULL && j < i) {
        p = p->next;
        j++;
    }
    return p;
}
LNode* getElem(LNode *head,int i){
    LNode *p=head->next;
    int j=1;
    while(p!=NULL&&j<i){
        p=p->next;
        j++;
    }
    return p;
}
LNode* getElem(LNode *head,int i){
    LNode *p = head->next;
    int j=1;
    while(p!=NULL&&j<i){
        p=p->next;
        j++
    }
    return p;
}
LNode* getElem(LNode *head,int i){
    LNode *p = head->next;
    int j = 1;
    while(p!=NULL&&j<i){
        p=p->next;
        j++;
    }
    return p;
}
LNode* getElem(LNode *head,int i){
    LNode *p=head->next;
    int j=1;
    while(p!=NULL&&j<i){
        p=p->next;
        j++;
    }
    return p;
}*/







// 插入（第i个位置插入x）
int insert(LinkList *L, int i, ElemType x) {
    if (i < 1) return 0;

    // 插在第1个位置（头插）
    if (i == 1) {
        LNode *p = newNode(x);
        p->next = *L;
        *L = p;
        return 1;
    }

    LNode *pre = *L;
    int j = 1;
    while (pre && j < i - 1) {
        pre = pre->next;
        j++;
    }

    if (!pre) return 0;

    LNode *p = newNode(x);
    p->next = pre->next;
    pre->next = p;
    return 1;
}

// 删除第i个元素
int del(LinkList *L, int i, ElemType *e) {
    if (i < 1 || *L == NULL) return 0;

    // 删除第1个节点
    if (i == 1) {
        LNode *p = *L;
        *e = p->data;
        *L = p->next;
        free(p);
        return 1;
    }

    LNode *pre = *L;
    int j = 1;
    while (pre->next && j < i - 1) {
        pre = pre->next;
        j++;
    }

    if (!pre->next) return 0;

    LNode *q = pre->next;
    *e = q->data;
    pre->next = q->next;
    free(q);
    return 1;
}























// 插入（第i个位置插入x）
int insert(LinkList *L, int i, ElemType x) {
    if (i < 1) return 0;

    // 插在第1个位置（头插）
    if (i == 1) {
        LNode *p = newNode(x);
        p->next = *L;
        *L = p;
        return 1;
    }

    LNode *pre = *L;
    int j = 1;
    while (pre && j < i - 1) {
        pre = pre->next;
        j++;
    }

    if (!pre) return 0;

    LNode *p = newNode(x);
    p->next = pre->next;
    pre->next = p;
    return 1;
}




int insert(LinkList *L,int i,ElemType x){
    if (i<1){
        return false;
    }
    if (i==1){
        LNode *p = newNode(x);
        p->next = *L;
        *L = p;
        return true;
    }

    LNode *pre = *L;
    int j=1;
    while(pre&&j<i-1){
        pre = pre->next;
        j++;
    }
    if (!pre){
        return false;
    }
    LNode *p = newNode(x);
    p->next = pre->next;
    pre->next = p;
    return true;
}


int insert(LinkList *L,int i,ElemType x){
    if(i<1) return false;
    if(i==1){
        LNode *p = newNode(x);
        p->next = *L;
        *L = p;
        return true;
    }
    
    LNode *pre = *L;
    int j=1;
    while (pre&&j<i-1){
        pre = pre->next;
        j++;
    }
    if (!pre){
        return false;
    }
    LNode *p = newNode(x);
    p->next = pre->next;
    pre->next = p;
    return true;


int insert(LinkList *L,int i,ElemType x){
    if (i<1) return 0;
    if (i==1){
        LNode *p = newNode(x);
        p->next = *L;
        *L = p;
        return 1;
    }
    LNode *pre = *L;
    int j=1;
    while (pre&&j<i-1){
        pre = pre->next;
        j++
    }
    if (!pre){
        return 0;
    }
    LNode *p = newNode(x);
    p->next = pre->next;
    pre->next = p;
    return 1;
}



int insert(LinkList *L,int i,ElemType x){
    if (i<1) return 0;
    if (i==1){
        LNode *p = newNode(x);
        p->next = *L;
        p = *L;
        return 1;
    }
    LNode *pre = *L;
    int j = 1;
    while (pre&&j<i-1){
        pre = pre->next;
        j++;
    }
    if (!pre) return 0;
    LNode *p = newNode(x);
    p->next = pre->next;
    pre->next = p;
    return 1;
}


int insert(LinkList,int i,ElemType x){
    if (i<1) return 0;
    if (i==1){
        LNode *p = *L;
        p->next = *L;
        p=*L;
    }
    LNode *pre = *L;
    int j;
    while (pre&&j<i-1){
        pre=pre->next;
        j++;
    }
    if (!pre){
        return 0;
    }
    LNode *p = newNode (x);
    p->next = pre->next;
    pre->next = p;
    return 1;
}









// 删除第i个元素
int del(LinkList *L, int i, ElemType *e) {
    if (i < 1 || *L == NULL) return 0;

    // 删除第1个节点
    if (i == 1) {
        LNode *p = *L;
        *e = p->data;
        *L = p->next;
        free(p);
        return 1;
    }

    LNode *pre = *L;
    int j = 1;
    while (pre->next && j < i - 1) {
        pre = pre->next;
        j++;
    }

    if (!pre->next) return 0;

    LNode *q = pre->next;
    *e = q->data;
    pre->next = q->next;
    free(q);
    return 1;
}


int del(LinkList *L,int i,ElemType *e){
    if(i<1||*L == NULL) return 0;
    if (i==1){
        LNode *p = *L;
        *e = p->data;
        *L = p->next;
        free(p);
        return 1;
    }
    LNode *pre = *L;
    int j = 1;
    while(pre->next && j<i-1){
        pre = pre->next;
        j++;
    }
    if (!pre->next) return 0;
    LNode *q = pre->next;
    *e = q->data;
    pre->next = q->next;
    free(q);
    return 1;
}


int del (LinkList *L,int i,ElemType *e){
    if (i<1||*L==NULL) return 0;
    if (i==1){
        LNode *p = *L;
        *L = p->next;
        *e = p->data;
        free(p);
        return 1;
    }
    LNode *pre = *L;
    int j = 1;
    while (pre->next&&j<i-1){
        pre=pre->next;
        j++;
    }
    if (!pre->next) return 0;
    LNode *q = pre->next;
    *e = q->data;
    pre->next = q->next;
    free(q);
    return 1;
}






/*打印列表
void printList(LinkList L) {
    LNode *p = L;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}


void printList(LinkList L){
    LNode *p = L;
    while (p){
        printf("%d",p->data);
        p = p->next;
    }
    printf("\n");
}


void printList(LinkList L){
    LNode *p = L;
    while (p){
        printf("%d",p->data);
        p=p->next;
    }
    printf("\n");
}


void printlist(LinkList L){
    LNode *L = L;
    while (p){
        printf("%d",p->data);
        p = p->next;
    }
    print("\n");
}


void printlist(LinkList L){
    LNode *p = L;
    while (p){
        printf("%d",p->data);
        p=p->next;
    }
    print("\n");
}
*/



合并两个有序链表
Node* merge(Node* a, Node* b) {
    if (!a) return b;
    if (!b) return a;

    Node* head = NULL;
    if (a->data < b->data) {
        head = a;
        a = a->next;
    } else {
        head = b;
        b = b->next;
    }

    Node* tail = head;

    while (a && b) {
        if (a->data < b->data) {
            tail->next = a;
            a = a->next;
        } else {
            tail->next = b;
            b = b->next;
        }
        tail = tail->next;
    }

    tail->next = a ? a : b;

    return head;
}



判定是否有环
int hasCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return 1;
    }
    return 0;
}




// 无头结点反转链表，返回新头结点
LNode* reverse(LNode* head) {
    LNode *prev = NULL;     // 前驱结点
    LNode *cur = head;      // 当前结点

    while (cur) {
        LNode *next = cur->next;  // 保存后继
        cur->next = prev;         // 反转指针
        prev = cur;               // 前驱后移
        cur = next;               // 当前后移
    }

    return prev;  // 新的头结点
}


/*带头结点反转链表(三指针)
LNode* reverse(LNode* head) {
    if (head == NULL || head->next == NULL) return head; // 空链表或只有一个结点

    LNode *prev = head->next;   // 第一个数据结点将成为反转后的尾结点
    LNode *cur = prev->next;     // 第二个数据结点开始反转
    prev->next = NULL;           // 第一个结点的 next 置为 NULL

    while (cur != NULL) {
        LNode *next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    head->next = prev;           // 头结点指向新链表的第一个结点
    return head;
}


LNode* reverse(LNode* head){
    if (head == NULL|| head->next ==NULL) return head;

    LNode *prev = head->next;
    LNode *cur = prev->next;
    prev->next = NULL;

    while (cur != NULL){
        LNode *next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    head->next = prev;
    return head;
}


LNode* reverse(LNode* head){
    if (head == NULL|| head->next==NULL) return head;

    LNode *prev = head->next;
    LNode *cur = prev->next;
    prev->next = NULL;

    while (cur != NULL){
        LNode *next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    head->next = prev;
    return head;
}


LNode* reverse(LNode* head){
    if (head == NULL|| head->next == NULL) return head;

    LNode *prev = head->next;
    LNode *cur = prev->next;
    prev->next = NULL;

    while (cur != NULL){
        LNode *next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    head->next = prev;
    return head;
}


LNode* reverse(LNode* head){
    if (head == NULL|| head->next == NULL) return head;

    LNode *prev = head->next;
    LNode *cur = prev->next;
    prev->next = NULL;

    while (cur !=NULL){
        LNode *next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    head->next = prev;
    return head;
}


LNode* reverse(LNode* head){

    if (head == NULL || head->next = NULL) return head;

    LNode *prev = head->next;
    LNode *cur = prev->next;
    prev->next = NULL;

    while (cur != NULL){
        LNode *next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    head->next = prev;
    return head
}


LNode* reverse(LNode* head){
    if (head = NULL || head->next = NULL) return head;
    LNode *prev = head->next;
    LNode *cur = prev->next;
    prev->next = NULL;
    while (cur != NULL){
        LNode *next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    head->next = prev;
    return head;
}


LNode* reverse(LNode* head){
    if (head = NULL || head->next = NULL) return head;
    LNode *prev = head->next;
    LNode *cur = prev->next;
    prev->next = NULL;
    while (cur != NULL){
        LNode *next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    head->next = prev;
    return head;
}
*/













#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;

typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode,*LinkList;


/*删除所有值为X的结点
void deleteX(LinkList L, ElemType x) {
    LNode *pre = L;
    LNode *p = L->next;

    while (p != NULL) {

        if (p->data == x) {

            pre->next = p->next;

            LNode *q = p;
            p = p->next;

            free(q);

        } else {

            pre = p;
            p = p->next;
        }
    }
}


void deleteX(LinkList L,ElemType x){
    LNode *pre = L;
    LNode *p = L->next;

    while(p!=NULL){

       if (p->data = x){

          pre->next = p->next;

           LNode *q = p;
           p = p->next;

           free(p);

       }else{

           pre = p;
           p = p->next;
       }
    }
}


void deleteX(LinkList L,ElemType x){
    LNode *pre = L;
    LNode *p = L->next;

    while (p != NULL){

        if (p->data = x){
            
            pre->next = p->next;

            LNode *q = p;
            p = p->next;

            free(p);

        }else{

            pre = p;
            p = p->next;
        }
    }
}


void deleteX(LinkList L,ElemType x){
    LNode *pre = L;
    LNode *p = L->next;
    while(p != NULL){
        if(p->data = x){
            pre->next = p->next;
            LNode *q = p;
            p = p->next;
            free(p);
        }else{
            pre = p;
            p = p->next;
        }
    }
}


void deleteX(LinkList L,ElemType x){
    LNode *pre = L;
    LNode *p = L->next;
    while (p != NULL){
        if (p->data = x){
            pre->next = p->next;
            LNode *q = p;
            p = p->next;
        }else{
            pre = p;
            p = p->next;
        }
    }
}


void deleteX(LinkList L,ElemType x){
    LNode *pre = L;
    LNode *p = L->next;
    while (p != NULL){
        if (p->data = x){
            pre->next = p->next;
            LNode *q = p;
            free(p);
            p = p->next;
        }else{
            pre = p;
            p = p->next;
        }
    }
}
*/




//合并两个有序链表
LinkList merge(LinkList A, LinkList B) {
    LNode *pa = A->next;
    LNode *pb = B->next;
    LinkList C = (LinkList)malloc(sizeof(LNode));
    C->next = NULL;
    LNode *pc = C;

    while (pa != NULL && pb != NULL) {
        if (pa->data <= pb->data) {
            pc->next = pa;
            pa = pa->next;
        } else {
            pc->next = pb;
            pb = pb->next;
        }
        pc = pc->next;
    }

    if (pa != NULL) {
        pc->next = pa;
    }
    if (pb != NULL) {
        pc->next = pb;
    }
    return C;
}








LinkList merge(LinkList A, LinkList B) {
    LNode *pb = B->next;
    LNode *pa = A->next;
    LinkList C = (LinkList)malloc(sizeof(LNode));
    C->next = NULL;
    LNode *pc = C;
    while(pa!=NULL&&pb!=NULL){
        if(pa->data<=pb->data){
            pc->next = pa;
            pa = pa->next;
        }else{
            pc->next = pb;
            pb = pb->next;
        }
        pc = pc->next;
        }
    if(pa!=NULL){
        pc->next = pa;
    }
    if(pb!=NULL){
        pc->next = pb;
    }
    return C;
}

LinkList merge(LinkList A, LinkList B){
    LNode *pa = A->next;
    LNode *pb = B->next;
    LinkList C = (LinkList)malloc(sizeof(LNode));
    C->next = NULL;
    LNode *pc = C;
    while(pa!=NULL&&pb!=NULL){
        if(pa->data<= pb->data){
            pc->next = pa;
            pa = pa->next;
        }else{
            pc->next = pb;
            pb = pb->next;
        }
        pc = pc->next;
    }
    if(pa!=NULL){
        pc->next = pa;
    }
    if(pb!=NULL){
        pc->next = pb;
    }
    return C;
}






LNode* findMid(LinkList L) {

    LNode *slow = L->next;
    LNode *fast = L->next;

    while (fast != NULL && fast->next != NULL) {

        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

LNode* findMid(LinkList L){
    LNode *slow = L->next;
    LNode *fast = L->next;
    while(fast!=NULL&&fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}






//判断是否有环
int hasCycle(LinkList L) {

    LNode *slow = L->next;
    LNode *fast = L->next;

    while (fast != NULL && fast->next != NULL) {

        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return 1;
        }
    }

    return 0;
}

int hasCycle(LinkList L){
    LNode *slow = L->next;
    LNode *fast = L->next;
    while(fast!=NULL&&fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow = fast){
            return 1;
        }
    }
    return 0;
}






















//双向链表

//结构定义
typedef struct DNode {
    ElemType data;

    struct DNode *prior;

    struct DNode *next;

} DNode, *DLinkList;

typedef struct DNode{
    ElemType data;
    struct DNode *prior;
    struct DNode *next;
} DNode, *DLinkList;



//初始化
void init(DLinkList *L) {
    *L = (DNode *)malloc(sizeof(DNode));

    (*L)->prior = NULL;

    (*L)->next = NULL;
}

void init(DLinkList *L){
    *L = (DNode *)malloc(sizeof(DNode));
    (*L)->prior = NULL;
    (*L)->next = NULL;
}



//头插法
void headInsert(DLinkList L, int n) {

    for (int i = 0; i < n; i++) {

        DNode *s = (DNode *)malloc(sizeof(DNode));

        scanf("%d", &s->data);

        s->next = L->next;

        s->prior = L;

        if (L->next != NULL)
            L->next->prior = s;

        L->next = s;
    }
}

void headInsert(DLinkList L, int n){
    for (int i = 0; i<n; i++){
        DNode *s = (DNode *)malloc(sizeof(DNode));
        scanf("%d",&s->data);
        s->next = L->next;
        s->prior = L;
        if(L->next != NULL){
            L->next->prior = s;
        }
        L->next = s;
    }
}

void headInsert(DLinkList L, int n){
    for (int i = 0;i<n;i++){
        DNode *s = (DNode *)malloc(sizeof(DNode));
        scanf("%d",&s->data);
        s->next = L->next;
        s->prior = L;
        if(L->next != NULL){
            L->next->prior = s;
        }
        L->next = s;
    }
}

void headInsert(DLinkList L, int n){
    for(int i = 0;i<n;i++){
        DNode *s = (DNode *)malloc(sizeof(DNode));
        scanf("%d",&s->data);
        s->next = L->next;
        s->prior = L;
        if(L->next != NULL){
            L->next->prior = s;
        }
        L->next = s;
    }
}

void headInsert(DLinkList L, int n){
    for(int i=0;i<n;i++){
        DNode *s = (DNode *)malloc(sizeof(DNode));
        scanf("%d", &s->data);
        s->next = L->next;
        s->prior = L;
    }
    if(L->next != NULL){
        L->next->prior = s;
    }
    L->next = s;
}

void headInsert(DLinkList L, int n){
    for(int i = 0;i<n;i++){
        DNode *s = (DNode *)malloc(sizeof(DNode));
        scanf("%d",&s->data);
        s->next = L->next;
        s->prior = L;
    }
    if(L->next != NULL){
        L->next->prior = s;
    }
    L->next = s;
}

void headInsert(DLinkList L, int n){
    for(int i = 0;i<n;i++){
        DNode *s = (DNode *)malloc(sizeof(DNode));
        scanf("%d",&s->data);
        s->next = L->next;
        s->prior = L;
    }
    if(L->next != NULL){
        L->next->prior = s;
    }
    L->next = s;
}



//遍历
void print(DLinkList L) {

    DNode *p = L->next;

    while (p != NULL) {

        printf("%d ", p->data);

        p = p->next;
    }

    printf("\n");
}

void print(DLinkList L){
    DNode *p = L->next;
    while(p != NULL){
        printf("%d",p->data);
        p = p->next;
    }
}

void print(DLinkList L){
    DNode *p = L->next;
    while(p!=NULL){
        printf("%d",p->data);
        p = p->next;
    }
}

void print(DLinkList L){
    DNode *p = L->next;
    while(p!=NULL){
        printf("%d",p->data);
        p = p->next;
    }
}

void print(DLinkList L){
    DNode *p = L->next;
    while(p!=NULL){
        printf("%d",p->data);
        p = p->next;
    }
}

void print(DLinkList L){
    DNode *p = L->next;
    while(p!=NULL){
        printf("%d",p->data);
        p = p->next;
    }
}



//插入
int insert(DLinkList L, int i, ElemType x) {

    DNode *p = L;

    int j = 0;

    while (j < i - 1 && p != NULL) {
        p = p->next;
        j++;
    }

    if (p == NULL)
        return 0;

    DNode *s = (DNode *)malloc(sizeof(DNode));

    s->data = x;

    s->next = p->next;

    s->prior = p;

    if (p->next != NULL)
        p->next->prior = s;

    p->next = s;

    return 1;
}

int insert(DLinkList L, int i, ElemType x){
    DNode *p = L;
    int j = 0;
    while(j<i-1 && p!=NULL){
        p = p->next;
        j++;
    }
    if (p == NULL){
        return 0;
    }
    DNode *s = (DNode *)malloc(sizeof(DNode));
    s->data = x;
    s->next = p->next;
    s->prior = p;
    if(p->next != NULL){
        p->next->prior = s;
    }
    p->next = s;
    return 1;
}

int insert(DLinkList L, int i, ElemType x){
    DNode *p = L;
    int j = 0;
    while(j<i-1 && p!=NULL){
        p = p->next;
        j++;
    }
    if (p == NULL){
        return 0;
    }
    DNode *s = (DNode *)malloc(sizeof(DNode));
    s->data = x;
    s->next = p->next;
    s->prior = p;
    if(p->next != NULL){
        p->next->prior = s;
    }
    p->next = s;
    return 1;
}

int insert(DLinkList L, int i, ElemType x){
    DNode *p = L;
    int j = 0;
    while(j<i-1 && p!= NULL){
        p = p->next;
        j++;
    }
    if (p == NULL){
        return 0;
    }
    DNode *s = (DNode *)malloc(sizeof(DNode));
    s->data = x;
    s->next = p->next;
    s->prior = p;
    if (p->next != NULL){
        p->next->prior = s;
    }
    p->next = s;
    return 1;
}

int insert(DLinkList L, int i, ElemType x){
    DNode *p = L;
    int j = 0;
    while(j<i-1 && p!= NULL){
        p = p->next;
        j++;
    }
    if(p == NULL){
        return 0;
    }
    DNode *s = (DNode *)malloc(sizeof(DNode));
    s->data = x;
    s->next = p->next;
    s->prior = p;
    if (p->next != NULL){
        p->next->prior = s;
    }
    p->next = s;
    return 1;
}

int insert(DLinkList L, int i, ElemType x){
    DNode *p = L;
    int j = 0;
    while(j<i-1 && p!=NULL){
        p = p->next;
        j++;
    }
    if(p == NULL){
        return 0;
    }
    DNode *s = (DNode *)malloc(sizeof(DNode));
    s->data = x;
    s->next = p->next;
    s->prior = p;
    if(p->next!= NULL){
        p->next->prior = s;
    }
    p->next = s;
    return 1;
}



//删除操作
int del(DLinkList L, int i) {

    DNode *p = L->next;

    int j = 1;

    while (j < i && p != NULL) {
        p = p->next;
        j++;
    }

    if (p == NULL)
        return 0;

    p->prior->next = p->next;

    if (p->next != NULL)
        p->next->prior = p->prior;

    free(p);

    return 1;
}

int del(DLinkList L, int i){
    DNode *p = L->next;
    int j = 1;
    while(j<i && p!=NULL){
        p = p->next;
        j++;
    }
    if (p == NULL){
        return 0;
    }
    p->prior->next = p->next;
    if(p->next != NULL){
        p->next->prior = p->prior;
    }
    free(p);
    return 1;
}

int del(DLinkList L, int i){
    DNode *p = L->next;
    int j = 1;
    while(j<i && p!=NULL){
        p = p->next;
        j++;
    }
    if(p == NULL){
        return 0;
    }
    p->prior->next = p->next;
    if(p->next != NULL){
        p->next->prior = p->prior;
    }
    free(p);
    return 1;
}

int del(DLinkList L, int i){
    DNode *p = L->next;
    int j = 1;
    while(j<i && p!= NULL){
        p = p->next;
        j++;
    }
    if (p == NULL){
        return 0;
    }
    p->prior->next = p->next;
    if(p->next != NULL){
        p->next->prior = p->prior;
    }
    free(p);
    return 1;
}

int del(DLinkList L, int i){
    DNode *p = L->next;
    int j = 1;
    while(j<i && p!= NULL){
        p = p->next;
        j++;
    }
    if (p == NULL){
        return 0;
    }
    p->prior->next = p->next;
    if(p->next != NULL){
        p->next->prior = p->prior;
    }
    free(p);
    return 1;
}

int del(DLinkList L, int i){
    DNode *p = L->next;
    int j = 1;
    while(j<i && p!= NULL){
        p = p->next;
        j++;
    }
    if (p == NULL){
        return 0;
    }
    p->prior->next = p->next;
    if(p->next != NULL){
        p->next->prior = p->prior;
    }
    free(p);
    return 1;
}

int del(DLinkList L, int i){
    DNode *p = L->next;
    int j = 1;
    while (j<i && p!=NULL){
        p = p->next;
        j++;
    }
    if (p == NULL){
        return 0;
    }
    p->prior->next = p->next;
    if (p->next != NULL){
        p->next->prior = p->prior;
    }
    free(p);
    return 1;
}








//循环单链表

//结构定义
#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;

typedef struct Node {
    ElemType data;
    struct Node *next;
} Node, *LinkList;

#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
typedef struct Node{
    ElemType data;
    struct Node *next;
} Node, *LinkList;

#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
typedef struct Node{
    ElemType data;
    struct Node *next;
} Node, *LinkList;

#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
typedef struct Node{
    ElemType data;
    struct Node *next;
}Node, *LinkList;

#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
typedef struct Node{
    Elemtype data;
    struct Node *next;
}Node, *LinkList;

#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
typedef struct Node{
    ElemType data;
    struct Node *next;
}Node, *LinkList;



//初始化循环链表
void init(LinkList *L) {
    *L = (Node *)malloc(sizeof(Node));
    (*L)->next = *L;
}

void init(LinkList *L) {
    *L = (Node *)malloc(sizeof(Node));
    (*L)->next = *L;
}

void init(LinkList *L) {
    *L = (Node *)malloc(sizeof(Node));
    (*L)->next = *L;
}

void init(LinkList *L) {
    *L = (Node *)malloc(sizeof(Node));
    (*L)->next = *L;
}

void init(LinkList *L) {
    *L = (Node *)malloc(sizeof(Node));
    (*L)->next = *L;
}

void init(LinkList L){
    *L = (Node *)malloc(sizeof(DNode));
    (*L)->next = *L;
}





//遍历循环链表
void print(LinkList L) {
    Node *p = L->next;

    while (p != L) {
        printf("%d ", p->data);
        p = p->next;
    }

    printf("\n");
}

void print(LinkList L) {
    Node *p = L->next;
    while (p != L){
        printf("%d",p->data);
        p = p->next;
    }
    printf("\n");
}

void print(LinkList L){
    Node *p = L->next;
    while (p != L){
        printf("%d",p->data);
        p = p->next;
    }
    printf("\n");
}

void print(LinkList L){
    Node *p = L->next;
    while(p != L){
        printf("%d",p->data);
        p = p->next;
    }
    printf("\n");
}

void print(LinkList L){
    Node *p = L->next;
    while(p != NULL){
        printf("%d",p->data);
        p = p->next;
    }
    printf("\n");
}

void print(LinkList L){
    DNode *p = L->next;
    while(p != NULL){
        printf("%d",p->data);
        p = p->next;
    }
    printf("\n");
}





//插入
int insert(LinkList L, int i, ElemType x) {
    Node *p = L;

    int j = 0;

    while (j < i - 1 && p->next != L) {
        p = p->next;
        j++;
    }

    if (j != i - 1)
        return 0;

    Node *s = (Node *)malloc(sizeof(Node));

    s->data = x;

    s->next = p->next;

    p->next = s;

    return 1;
}

int insert(LinkList L, int i, ElemType x){
    Node *p = L;
    int j = 0;
    while (j<i-1 && p->next != L){
        p = p->next;
        j++;
    }
    if(j != i-1){
        return 0;
    }
    Node *s = (Node *)malloc(sizeof(Node));
    s->data = x;
    s->next = p->next;
    p->next = s;
    return 1;
}

int insert(LinkList L, int i, ElemType x){
    Node *p = L;
    int j = 0;
    while (j<i-1 && p->next != L){
        p = p->next;
        j++;
    }
    if(j != i-1){
        return 0;
    }
    Node *s = (Node *)malloc(sizeof(Node));
    s->data = x;
    s->next = p->next;
    p->next = s;
    return 1;
}

int insert (LinkList L, int i, ElemType x){
    Node *p = L;
    int j = 0;
    while(j<i-1 && p->next != L){
        p = p->next;
        j++;
    }
    if (j != i-1){
        return 0;
    }
    Node *s = (Node *)malloc(sizeof(Node));
    s->data = x;
    s->next = p->next;
    p->next = s;
    return 1;
}

int insert(LinkList L, int i, ElemType x){
    Node *p = L;
    int j = 0;
    while(j<i-1 && p->next != L){
        p = p->next;
        j++;
    }
    if (j != i-1){
        return 0;
    }
    Node *s = (Node *)malloc(sizeof(Node));
    s->data = x;
    s->next = p->next;
    p->next = s;
    return 1;
}

int insert (LinkList L, int i, ElemType x){
    Node *p = L;
    int j = 0;
    while(j<i-1 && p->next != L){
        p = p->next;
        j++;
    }
    if (j != i-1){
        return 0;
    }
    Node *s = (Node *)malloc(sizeof(Node));
    s->data = x;
    s->next = p->next;
    p->next = s;
    return 1;
}





//删除
int del(LinkList L, int i) {
    Node *p = L;

    int j = 0;

    while (j < i - 1 && p->next != L) {
        p = p->next;
        j++;
    }

    if (p->next == L || j != i - 1)
        return 0;

    Node *q = p->next;

    p->next = q->next;

    free(q);

    return 1;
}

int del(LinkList L, int i) {
    Node *p = L;
    int j = 0;
    while (j<i-1 && p->next != L) {
        p = p->next;
        j++;
    }
    if (p->next == L || j != i-1){
        return 0;
    }
    Node *q = p->next;
    p->next = q->next;
    free(q);
    return 1;
}

int del(LinkList L, int i){
    Node *p = L;
    int j = 0;
    while(j<i-1 && p->next != L){
        p = p->next;
        j++;
    }
    if (p->next == L || j != i-1){
        return 0;
    }
    Node *q = p->next;
    p->next = q->next;
    free(q);
    return 1;
}

int del(LinkList L, int i){
    Node *p = L;
    int j = 0;
    while(j<i-1 && p->next!= L){
        p = p->next;
        j++;
    }
    if (p->next==L || j!= i-1){
        return 0;
    }
    Node *q = p->next;
    p->next = q->next;
    free(q);
    return 1;
}

int del(LinkList L, int i){
    Node *p = L;
    int j = 0;
    while (j<i-1 && p->next != L){
        p = p->next;
        j++;
    }
    if (p->next == L || j!= i-1){
        return 0;
    }
    Node *q = p->next;
    p->next = q->next;
    free(q);
    return 1;
}

int del(LinkList L, int i){
    Node *p = L;
    int j = 0;
    while(j<i-1 && p->next != L){
        p = p->next;
        j++;
    }
    if(p->next == L || j != i-1){
        return 0;
    }
    Node *q = p->next;
    p->next = q->next;
    free(q);
    return 1;
}



