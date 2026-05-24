#include <stdio.h>
#include <stdlib.h>

#define MAX_CHILD 10  // 假设每个节点最多10个孩子

typedef struct TreeNode {
    int data;
    struct TreeNode* children[MAX_CHILD];
    int childCount;
} TreeNode;

// 创建节点
TreeNode* createNode(int value) {
    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
    node->data = value;
    node->childCount = 0;
    for(int i = 0; i < MAX_CHILD; i++)
        node->children[i] = NULL;
    return node;
}

// 添加孩子
int addChild(TreeNode* parent, TreeNode* child) {
    if(parent->childCount >= MAX_CHILD)
        return 0; // 添加失败
    parent->children[parent->childCount++] = child;
    return 1;
}





//树的一般定义
//结构体定义
typedef struct TreeNode {
    int data;
    struct TreeNode* children[MAX_CHILD];
    int childCount;
} TreeNode;

typedef struct TreeNode{
    int data;
    struct TreeNode* children[MAX_CHILD];
    int childCount;
}

typedef struct TreeNode{
    int data;
    struct TreeNode* children[MAX_CHILD];
    int childCount;
}

typedef struct TreeNode{
    int data;
    struct TreeNode* children[MAX_CHILD];
    int childCount;
}

typedef struct TreeNode{
    int data;
    struct TreeNode* children[MAX_CHILD];
    int childCount;
}

typedef struct TreeNode{
    int data;
    struct TreeNode* children[MAX_CHILD];
    int childCount;
}





// 创建节点
TreeNode* createNode(int value) {
    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
    node->data = value;
    node->childCount = 0;
    for(int i = 0; i < MAX_CHILD; i++)
        node->children[i] = NULL;
    return node;
}

TreeNode* createNode(int value) {
    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
    node->data = value;
    node->childCount = 0;
    for(int i = 0; i<MAX_CHILD; i++){
        node->children[i] = NULL;
    }
    return node;
}

TreeNode* createNode(int value){
    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
    node->data = value;
    node->childCount = 0;
    for(int i = 0; i<MAX_CHILD; i++){
        node->children[i] = NULL;
    }
    return node;
}

TreeNode* createNode(int value){
    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
    node->data = value;
    node->childCount = 0;
    for(int i = 0; i<MAX_CHILD; i++){
        node->children[i] = NULL;
    }
    return node;
}

TreeNode* createNode(int value){
    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
    node->data = value;
    node->childCount = 0;
    for(int i = 0; i<MAX_CHILD; i++){
        node->children[i] = NULL;
    }
    return node;
}
TreeNode* createNode(int value){
    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
    node->data = value;
    node->childCount = 0;
    for(int i = 0; i<MAX_CHILD){
        node->children[i] = NULL;
    }
    return node;
}





// 添加孩子
int addChild(TreeNode* parent, TreeNode* child) {
    if(parent->childCount >= MAX_CHILD)
        return 0; // 添加失败
    parent->children[parent->childCount++] = child;
    return 1;
}

int addChild(TreeNode* parent, TreeNode* child){
    if(parent->childCount >= MAX_CHILD){
        return 0;
    }
    parent->children[parent->childCount++] = child;
    return 1;
}

int addChild(TreeNode* parent, TreeNode* child){
    if(parent->childCount >= MAX_CHILD){
        return 0;
    }
    parent->children[parent->childCount++] = child;
    return 1;
}

int addChild(TreeNode* parent, TreeNode* child){
    if(parent->childCount >= MAX_CHILD){
        return 0;
    }
    parent->children[parent->childCount++] = child;
    return 1;
}
 
int addChild(TreeNode* parent, TreeNode* child){
    if(parent->childCount >= MAX_CHILD){
        return 0;
    }
    parent->children[parent->childCount++] = child;
    return 1; 
}

int addChild(TreeNode* parent, TreeNode* child){
    if(parent->childCount >= MAX_CHILD){
        return 0;
    }
    parent->children[parent->childCount++] = child;
    return 1;
}










//二叉树定义
typedef struct BiNode {
    int data;
    struct BiNode* left;
    struct BiNode* right;
} BiNode;

// 创建二叉树节点
BiNode* createBiNode(int value) {
    BiNode* node = (BiNode*)malloc(sizeof(BiNode));
    node->data = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}





//二叉树定义
typedef struct BiNode{
    int data;
    struct BiNode* left;
    struct BiNode* right;
} BiNode;

typedef struct BiNode{
    int data;
    struct BiNode* left;
    struct BiNode* right;
} BiNode;

typedef struct BiNode{
    int data;
    struct BiNode* left;
    struct BiNode* right;
} BiNode;

typedef struct BiNode{
    int data;
    struct BiNode* left;
    struct BiNode* right;
} BiNode;

typedef struct BiNode{
    int data;
    struct BiNode* left;
    struct BiNode* right;
} BiNode;

typedef struct BiNode{
    int data;
    struct BiNode* left;
    struct BiNode* right;
} BiNode;





// 创建二叉树节点
BiNode* createBiNode(int value) {
    BiNode* node = (BiNode*)malloc(sizeof(BiNode));
    node->data = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

BiNode* createBiNode(int value){
    BiNode* node = (BiNode*)malloc(sizeof(BiNode));
    node->data = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

BiNode* createBiNode(int value){
    BiNode* node = (BiNode*)malloc(sizeof(BiNode));
    node->data = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

BiNode* createBiNode(int value){
    BiNode* node = (BiNode*)malloc(sizeof(BiNode));
    node->data = value;
    node->left = NULL;
    node->right = NULL;
}

BiNode* createBiNode(int value){
    BiNode* node = (BiNode*)malloc(sizeof(BiNode));
    node->data = value;
    node->left = NULL;
    node->right = NULL;
}

BiNode* createBiNode(int value){
    BiNode* node = (BiNode*)malloc(sizeof(BiNode));
    node->data = value;
    node->left = NULL;
    node->right = NULL;
}










//二叉树遍历
// 前序遍历
void preOrder(BiNode* root) {
    if(root == NULL) return;
    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}

void preOrder(BiNode* root){
    if(root == NULL){
        return;
    }
    printf("%d",root->data);
    preOrder(root->left);
    preOrder(root->right);
}

void preOrder(BiNode* root){
    if(root == NULL){
        return;
    }
    printf("%d",root->data);
    preOrder(root->left);
    preOrder(root->right);
}

void preOrder(BiNode* root){
    if(root == NULL){
        return;
    }
    printf("%d",root->data);
    preOrder(root->left);
    preOrder(root->right);
}

void preOrder(BiNode* root){
    if(root == NULL){
        return;
    }
    preOrder(root->left);
    preOrder(root->right);
}

void preOrder(BiNode* root){
    if(root == NULL){
        return;
    }
    preOrder(root->left);
    preOrder(root->right);
}





// 中序遍历
void inOrder(BiNode* root) {
    if(root == NULL) return;
    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
}

void inOrder(BiNode* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    printf("%d",root->data);
    inOrder(root->right);
}

void inOrder(BiNode* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    printf("%d",root->data);
    inOrder(root->right);
}

void inOrder(BiNode* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    printf("%d",root->data);
    inOrder(root->right);
}

void inOrder(BiNode* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    printf("%d",root->data);
    inOrder(root->right);
}

void inOrder(BiNode* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    printf("%d",root->data);
    inOrder(root->right);
}





// 后序遍历
void postOrder(BiNode* root) {
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->data);
}

void postOrder(BiNode* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d",root->data);
}

void postOrder(BiNode* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d",root->data);
}

void postOrder(BiNode* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d",root->data);
}

void postOrder(BiNode* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d",root->data);
}





//非递归前序遍历
#include <stack.h> // 可以用自己实现的栈

void preOrderNonRec(BiNode* root) {
    if(root == NULL) return;
    Stack s;
    initStack(&s);
    push(&s, root);
    while(!isEmpty(&s)) {
        BiNode* node = pop(&s);
        printf("%d ", node->data);
        if(node->right) push(&s, node->right);
        if(node->left) push(&s, node->left);
    }
}

void preOrderNonRec(BiNode* root){
    if(root == NULL){
        return;
    }
    Stack s;
    initStack(&s);
    push(&s,root);
    while(!isEmpty(&s)){
        BiNode* node = pop(&s);
        printf("%d",node->data);
        if(node->right){
            push(&s,node->right);
        }
        if(node->left){
            push(&s,node->left);
        }
    }
}

void preOrderNonRec(BiNode* root){
    if(root == NULL){
        return;
    }
    Stack s;
    initStack(&s);
    push(&s,root);
    while(!isEmpty(&s)){
        BiNode* node = pop(&s);
        printf("%d",node->data);
        if(node->right){
            push(&s,node->right);
        }
        if(node->left){
            push(&s,node->left);
        }
    }
}

void preOrderNonRec(BiNode* root){
    if(root == NULL){
        return;
    }
    Stack s;
    initStack(&s);
    push(&s,root);
    while(!isEmpty(&s)){
        BiNode* node = pop(&s);
        printf("%d",node->data);
        if(node->right){
            push(&s,node->right);
        }
        if(node->left){
            push(&s,node->left);
        }
    }
}

void preOrderNonRec(BiNode* root){
    if(root == NULL){
        return;
    }
    Stack s;
    initStack(&s);
    push(&s,root);
    while(!isEmpty(&s)){
        BiNode* node = pop(&s);
        printf("%d",root->data);
        if(node->right){
            push(&s,node->right);
        }
        if(node->left){
            push(&s,node->left);
        }
    }
}

void preOrderNonRec(BiNode* root){
    if(root == NULL){
        return;
    }
    Stack s;
    initStack(&s);
    push(&s,root);
    while(!isEmpty(&s)){
        Binode* node = pop(&s);
        printf("%d",root->data);
        if(node->right){
            pop(&s,node->right);
        }
        if(node->left){
            pop(&s,node->left);
        }
    }
}





//非递归中序遍历
void inOrderNonRec(BiNode* root){
    Stack s;
    initStack(&s);
    BiNode* node = root;
    while(node != NULL || !isEmpty(&s)){
        while(node != NULL){
            push(&s, node);
            node = node->left;
        }
        node = pop(&s);
        printf("%d", node->data);
        node = node->right;
    }
}

void inOrderNonRec(BiNode* root){
    Stack s;
    initStack(&s);
    BiNode* node = root;
    while(node != NULL || !isEmpty(&s)){
        while(node != NULL){
            push(&s,node);
            node = node->left;
        }
        node = pop(&s);
        printf("%d",node->data);
        node = node->right;
    }
}

void inOrderNonRec(BiNode* root){
    Stack s;
    initStack(&s);
    BiNode* node = root;
    while(node != NULL || !isEmpty(&s)){
        while(node!=NULL){
            push(&s,node);
            node = node->left;
        }
        node = pop(&s);
        printf("%d",node->data);
        node = node->right;
    }
}

void inOrderNonRec(BiNode* root){
    Stack s;
    initStack(&s);
    BiNode* node = root;
    while(node!=NULL||!isEmpty(&s)){
        while(node!=NULL){
            push(&s,node);
            node = node->left;
        }
        pop(&s,node);
        printf("%d",node->data);
        node = node->right;
    }
}

void inOrderNonRec(BiNode* root){
    Stack s;
    initStack(&s);
    BiNode* node = root;
    while(node != NULL || !isempty(&s)){
        while(node!=NULL){
            push(&s,node);
            node = node->left;
        }
        pop(&s,node);
        printf("%d",node->data);
        node = node->right;
    }
}

void inOrderNonRec(BiNode* root){
    Stack s;
    initStack(&s);
    BiNode* node = root;
    while(node!=NULL || !isEmpty(&s)){
        while(node!=NULL){
            push(&s,node);
            node = node->left;
        }
        pop(&s,node);
        printf("%d",node->data);
        node = node->right;
    }
}





//非递归后序遍历
void postOrderNonRec(BiNode* root) {
    Stack s;
    initStack(&s);
    BiNode* node = root;
    BiNode* lastVisited = NULL;

    while(node != NULL || !isEmpty(&s)) {
        while(node != NULL) {
            push(&s, node);
            node = node->left;
        }
        BiNode* peekNode = top(&s); 
        if(peekNode->right != NULL && lastVisited != peekNode->right) {
            node = peekNode->right;
        } else {
            printf("%d ", peekNode->data);
            lastVisited = pop(&s);
            node = NULL;
        }
    }
}

void postOrderNonRec(BiNode* root){
    Stack s;
    initStack(&s);
    BiNode* node = root;
    BiNode* lastVisited = NULL;
    while(node!=NULL || !isEmpty(&s)){
        while(node!=NULL){
            push(*s,node);
            node = node->left;
        }
        BiNode* peekNode = top(*s);
        if(peekNode->right!=NULL && lastVisited != peekNode->right){
            node = peekNode->right;
        }else{
            printf("%d",peekNode->data);
            lastVisited = pop(&s);
            node = NULL;
        }
    }
}

void postOrderNonRec(BiNode* root){
    Stack s;
    initStack(&s);
    BiNode* node = root;
    BiNode* lastVisted = NULL;
    while(node!=NULL || !isEmpty(&s)){
        while(node!=NULL){
            push(*s,node);
            node = node->left;
        }
        BiNode* peekNode = top(*s);
        if(peekNode->right!=NULL && lastVisted != peekNode->right){
            node = peekNode->right;
        }else{
            printf("%d",peekNode->data);
            lastVisited = pop(&s);
            node = NULL;
        }
    }
}

void postOrderNonRec(BiNode* root){
    Stack s;
    initStack(&s);
    BiNode* node = root;
    BiNode* lastVisted = NULL;
    while(node!=NULL || !isEmpty(&s)){
        while(node!=NULL){
            push(*s,node);
            node = node->left;
        }
        BiNode* peekNode = top(*s);
        if(peekNode->right != NULL && lastVisted != peekNode->right){
            node = peekNode->right;
        }else{
            printf("%d",peekNode->data);
            lastVisited = pop(&s);
            node = NULL; 
        }
    }
}

void postOrderNonRec(BiNode* root){
    Stack s;
    initStack(&s);
    BiNode* node = root;
    BiNode* lastVisited = NULL;
    while(node!=NULL && !isEmpty(&s)){
        while(node!=NULL){
            push(&s,node);
            node = node->left;
        }
        BiNode* peekNode = top(*s);
        if(peekNode->right!=NULL && lastVisited!=peekNode->right){
            node = peekNode->right;
        }else{
            printf("%d",peekNode->data);
            lastVisited = pop(&s);
            node = NULL;
        }
    }
}

void postOrderNonRec(BiNode* root){
    Stack s;
    initStack(&s);
    BiNode* node = root;
    BiNode* lastVisited = NULL;
    while(node!=NULL && !isEmpty(&s)){
        while(node!=NULL){
            push(&s,node);
            node = node->left;
        }
        BiNode* peekNode = top(*s);
        if(peekNode->right!=NULL && lastVisited!=peekNode->right){
            node = node->right;
        }else{
            printf("%d",peekNode->data);
            lastVisited = pop(&s);
            node = NULL;
        }
    }
}





//二叉树查找
BiNode* search(BiNode* root, int key) {
    if(root == NULL) return NULL;
    if(root->data == key) return root;
    BiNode* left = search(root->left, key);
    if(left) return left(;
    return search(root->right, key);
}

BiNode* search(BiNode* root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }
    BiNode* left = search(root->left, key);
    if(left){
        return left;
    }
    return search(root->right, key);
}

BiNode* search(BiNode* root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }
    BiNode* left = search(root->left, key);
    if(left){
        return left;
    }
    return search(root->right, key);
}

BiNode* search(BiNode* root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }
    BiNode* left = search(root->left, key)
    if(left){
        return left;
    }
    return search(root->right, key)
}

BiNode* search(BiNode* root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root == key){
        return root;
    }
    return search(root->left, key);
    if(left){
        return left;
    }
    return search(root->right, key);
}

BiNode* search(BiNode* root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root == key){
        return root;
    }
    return search(root->left, key);
    if(left){
        return left;
    }
    return search(root->right, key);
}




//二叉树按层序插入
#include <queue.h> // 可以用自己实现的队列

void insert(BiNode** root, int value) {
    BiNode* node = createBiNode(value);
    if(*root == NULL) {
        *root = node;
        return;
    }
    Queue q;
    initQueue(&q);
    enqueue(&q, *root);
    while(!isEmpty(&q)) {
        BiNode* tmp = dequeue(&q);
        if(tmp->left == NULL) {
            tmp->left = node;
            break;
        } else {
            enqueue(&q, tmp->left);
        }
        if(tmp->right == NULL) {
            tmp->right = node;
            break;
        } else {
            enqueue(&q, tmp->right);
        }
    }
}

void insert(BiNode** root, int value){
    BiNode* node = createBiNode(value);
    if(*root == NULL){
        *root = node;
        return;
    }
    Queue q;
    initQueue(&q);
    enqueue(&q,*root);
    while(!isEmpty(&q)){
        BiNode* tmp = dequeue(&q);
        if(tmp->left == NULL){
            tmp->left = node;
            break;
        }else{
            enqueue(&q,tmp->left);
        }
        if(tmp->right == NULL){
            tmp->right = node;
            break;
        }else{
            enqueue(&q,tmp->right);
        }
    }
}

void insert(BiNode** root, int value){
    BiNode* node = createBiNode(value);
    if(*root == NULL){
        *root = node;
        return;
    }
    Queue q;
    initQueue(&q);
    enqueue(&q,*root);
    while(!isEmpty(&q)){
        BiNode* tmp = dequeue(&q);
        if(tmp->left == NULL){
            tmp->left = node;
            break;
        }else{
            enqueue(&q,tmp->left);
        }
        if(tmp->right == NULL){
            tmp->right = node;
            break;
        }else{
            enqueue(&q,tmp->right);
        }
    }
}

void insert(BiNode** root, int value){
    BiNode* node = createBiNode(value);
    if(*root == NULL){
        *root = node;
        return;
    }
    Queue q;
    initQueue(&q);
    enqueue(&q,*root);
    while(!isEmpty(&q)){
        BiNode* tmp = dequeue(&q);
        if(tmp->left == NULL){
            tmp->left = node;
            break;
        }else{
            enqueue(&q,tmp->left);
        }
        if(tmp->right == NULL){
            tmp->right = node;
            break;
        }else{
            enqueue(&q,tmp->right);
        }
    }
}

void insert(BiNode** root, int value){
    BiNode* node = createBiNode(value);
    if(*root == NULL);{
        *root = node;
        return;
    }
    Queue q;
    initQueue(&q);
    enqueue(&q,*root);
    while(!isEmpty(&q)){
        BiNode* tmp = dequeue(&q);
        if(tmp->left == NULL){
            tmp->left = node;
            break
        }else{
            enqueue(&q,tmp->left);
        }
        if(tmp->right == NULL){
            tmp->right = node;
        }else{
            enqueue(&q,tmp->right);
        }
    }
}

void insert(BiNode** root, int value){
    BiNode* node = createBiNode(value);
    if(*root == NULL){
        *root = node;
        return;
    }
    Queue q;
    initQueue(&q);
    enqueue(&q,*root);
    while(!isEmpty(&q)){
        BiNode* tmp = dequeue(&q);
        if(tmp->left == NULL){
            tmp->left = node;
        }else{
            enqueue(&q,tmp->left);
        }
        if(tmp->right == NULL){
            tmp->right = node;
        }else{
            enqueue(&q,tmp->right);
        }
    }
}





// 删除节点较复杂，这里提供一个删除叶子的简化版本
int deleteLeaf(BiNode* root, int key) {
    if(root == NULL) return 0;
    if(root->left && root->left->data == key && !root->left->left && !root->left->right) {
        free(root->left);
        root->left = NULL;
        return 1;
    }
    if(root->right && root->right->data == key && !root->right->left && !root->right->right) {
        free(root->right);
        root->right = NULL;
        return 1;
    }
    return deleteLeaf(root->left, key) || deleteLeaf(root->right, key);
}





//树释放内存
void freeBiTree(BiNode* root) {
    if(root == NULL) return;
    freeBiTree(root->left);
    freeBiTree(root->right);
    free(root);
}

void freeBiTree(BiNode* root){
    if(root == NULL){
        return;
    }
    freeBiTree(root->left);
    freeBiTree(root->right);
    free(root);
}

void freeBiTree(BiNode* root){
    if(root == NULL){
        return;
    }
    freeBiTree(root->left);
    freeBiTree(root->right);
    free(root);
}

void freeBiTree(BiNode* root){
    if(root == NULL){
        return;
    }
    freeBiTree(root->left);
    freeBiTree(root->right);
    free(root);
}

void freeBiTree(BiNode* root){
    if(root == NULL){
        return;
    }
    freeBiTree(root->left);
    freeBiTree(root->right);
    free(root);
}

void freeBiTree(BiNode* root){
    if(root = NULL){
        return;
    }
    freeBiTree(root->left);
    freeBiTree(root->right);
    free(root);
}





//二叉树层序遍历
void levelOrder(BiNode* root) {
    if (root == NULL) return;

    Queue q;
    initQueue(&q);
    enqueue(&q, root);

    while (!isEmpty(&q)) {
        BiNode* node = dequeue(&q);
        printf("%d ", node->data);
        if (node->left) enqueue(&q, node->left);
        if (node->right) enqueue(&q, node->right);
    }
}





//查找父节点（假设值不重复）
BiNode* findParent(BiNode* root, int key, BiNode* parent) {
    if (!root) return NULL;
    if (root->data == key) return parent;
    BiNode* leftRes = findParent(root->left, key, root);
    if (leftRes) return leftRes;
    return findParent(root->right, key, root);
}





//根据前序+中序重建二叉树
BiNode* buildFromPreIn(int* pre, int* in, int preL, int preR, int inL, int inR) {
    if (preL > preR) return NULL;
    int rootVal = pre[preL];
    BiNode* root = createBiNode(rootVal);
    int i;
    for (i = inL; i <= inR; i++) if (in[i] == rootVal) break;
    int leftLen = i - inL;
    root->left = buildFromPreIn(pre, in, preL+1, preL+leftLen, inL, i-1);
    root->right = buildFromPreIn(pre, in, preL+leftLen+1, preR, i+1, inR);
    return root;
}





//判断两棵二叉树是否相同
bool isSameTree(BiNode* a, BiNode* b) {
    if (!a && !b) return true;
    if (!a || !b) return false;
    return (a->data == b->data) && isSameTree(a->left, b->left) && isSameTree(a->right, b->right);
}





//判断是否对称（镜像）
bool isMirror(BiNode* left, BiNode* right) {
    if (!left && !right) return true;
    if (!left || !right) return false;
    return (left->data == right->data) && isMirror(left->left, right->right) && isMirror(left->right, right->left);
}
bool isSymmetric(BiNode* root) {
    return !root || isMirror(root->left, root->right);
}





//递归求高度
int getHeight(BiNode* root) {
    if (!root) return 0;
    int lh = getHeight(root->left);
    int rh = getHeight(root->right);
    return (lh > rh ? lh : rh) + 1;
}





//统计节点总数
int countNodes(BiNode* root) {
    return root ? 1 + countNodes(root->left) + countNodes(root->right) : 0;
}





//统计叶子节点数
int countLeaves(BiNode* root) {
    if (!root) return 0;
    if (!root->left && !root->right) return 1;
    return countLeaves(root->left) + countLeaves(root->right);
}





// 判断满二叉树
bool isFullBinaryTree(BiNode* root) {
    if(!root) return true;
    if(!root->left && !root->right) return true;
    if(root->left && root->right)
        return isFullBinaryTree(root->left) && isFullBinaryTree(root->right);
    return false;
}





//镜像翻转
void mirror(BiNode* root) {
    if (!root) return;
    BiNode* tmp = root->left;
    root->left = root->right;
    root->right = tmp;
    mirror(root->left);
    mirror(root->right);
}





// 打印根到某节点路径
bool printPath(BiNode* root, int key) {
    if(!root) return false;
    if(root->data == key) {
        printf("%d ", root->data);
        return true;
    }
    if(printPath(root->left, key) || printPath(root->right, key)) {
        printf("%d ", root->data);
        return true;
    }
    return false;
}





// 打印所有从根到叶子节点路径
void printAllPaths(BiNode* root, int path[], int pathLen) {
    if(!root) return;
    path[pathLen] = root->data;
    pathLen++;
    if(!root->left && !root->right) {
        for(int i=0; i<pathLen; i++) printf("%d ", path[i]);
        printf("\n");
    } else {
        printAllPaths(root->left, path, pathLen);
        printAllPaths(root->right, path, pathLen);
    }
}





//二叉排序树（BST）操作
// BST 插入（递归）
BiNode* bstInsert(BiNode* root, int val) {
    if (!root) return createBiNode(val);
    if (val < root->data) root->left = bstInsert(root->left, val);
    else if (val > root->data) root->right = bstInsert(root->right, val);
    return root;
}





// BST 查找（递归）
BiNode* bstSearch(BiNode* root, int key) {
    if (!root || root->data == key) return root;
    if (key < root->data) return bstSearch(root->left, key);
    else return bstSearch(root->right, key);
}





// 查找最小节点
BiNode* findMin(BiNode* root) {
    while (root && root->left) root = root->left;
    return root;
}





// 查找最大节点
BiNode* findMax(BiNode* root) {
    while(root && root->right) root = root->right;
    return root;
}





// 查找前驱节点
BiNode* predecessor(BiNode* root, int value) {
    BiNode* pred = NULL;
    while(root) {
        if(value > root->data) {
            pred = root;
            root = root->right;
        } else {
            root = root->left;
        }
    }
    return pred;
}





// 查找后继节点
BiNode* successor(BiNode* root, int value) {
    BiNode* succ = NULL;
    while(root) {
        if(value < root->data) {
            succ = root;
            root = root->left;
        } else {
            root = root->right;
        }
    }
    return succ;
}





// BST 删除（递归）
BiNode* bstDelete(BiNode* root, int key) {
    if (!root) return NULL;
    if (key < root->data) root->left = bstDelete(root->left, key);
    else if (key > root->data) root->right = bstDelete(root->right, key);
    else {
        // 找到要删除的节点
        if (!root->left) {
            BiNode* right = root->right;
            free(root);
            return right;
        } else if (!root->right) {
            BiNode* left = root->left;
            free(root);
            return left;
        } else {
            // 有两个孩子：找到右子树的最小节点
            BiNode* minNode = findMin(root->right);
            root->data = minNode->data;
            root->right = bstDelete(root->right, minNode->data);
        }
    }
    return root;
}





// 判断是否为BST（中序遍历递增）
void inorderArray(BiNode* root, int* arr, int* idx) {
    if (!root) return;
    inorderArray(root->left, arr, idx);
    arr[(*idx)++] = root->data;
    inorderArray(root->right, arr, idx);
}
bool isBST(BiNode* root) {
    if (!root) return true;
    int arr[1000], idx = 0;
    inorderArray(root, arr, &idx);
    for (int i = 1; i < idx; i++)
        if (arr[i] <= arr[i-1]) return false;
    return true;
}





//树（多叉树）操作（孩子兄弟表示法 + 转换）
#define MAX_CHILD 10
// 孩子兄弟表示法（本质就是二叉树）
typedef struct CSNode {
    int data;
    struct CSNode *firstChild, *nextSibling;
} CSNode;

CSNode* createCSNode(int val) {
    CSNode* p = (CSNode*)malloc(sizeof(CSNode));
    p->data = val; p->firstChild = p->nextSibling = NULL;
    return p;
}





// 树的先根遍历（递归）
void preOrderTree(CSNode* root) {
    if (!root) return;
    printf("%d ", root->data);
    preOrderTree(root->firstChild);
    preOrderTree(root->nextSibling);
}





// 树的后根遍历（递归）
void postOrderTree(CSNode* root) {
    if (!root) return;
    postOrderTree(root->firstChild);
    printf("%d ", root->data);
    postOrderTree(root->nextSibling);
}





// 树的层次遍历（队列）
void levelOrderTree(CSNode* root) {
    if (!root) return;
    Queue q; initQueue(&q, 100);
    enqueue(&q, (BiNode*)root);  // 强制转换（仅作示例，实际应单独实现队列）
    while (!isEmpty(&q)) {
        CSNode* cur = (CSNode*)dequeue(&q);
        printf("%d ", cur->data);
        CSNode* child = cur->firstChild;
        while (child) {
            enqueue(&q, (BiNode*)child);
            child = child->nextSibling;
        }
    }
    freeQueue(&q);
}





// 计算树的高度（孩子兄弟表示法）
int treeHeight(CSNode* root) {
    if (!root) return 0;
    int maxChildHeight = 0;
    CSNode* child = root->firstChild;
    while (child) {
        int h = treeHeight(child);
        if (h > maxChildHeight) maxChildHeight = h;
        child = child->nextSibling;
    }
    return maxChildHeight + 1;
}





// 树 ↔ 二叉树转换（孩子兄弟法本身就是二叉树，无需额外转换）
// 从孩子表示法转为孩子兄弟法（示例）
void convertToCS(TreeNode* root, CSNode** csRoot) {
    if (!root) return;
    *csRoot = createCSNode(root->data);
    if (root->childCount > 0) {
        convertToCS(root->children[0], &((*csRoot)->firstChild));
        CSNode* cur = (*csRoot)->firstChild;
        for (int i = 1; i < root->childCount; i++) {
            convertToCS(root->children[i], &(cur->nextSibling));
            cur = cur->nextSibling;
        }
    }
}





#include <string.h>
typedef struct HuffNode {
    int weight;
    int parent, left, right;
} HuffNode;
// 构建哈夫曼树（静态数组）
void buildHuffman(int weights[], int n, HuffNode tree[], int* root) {
    int m = 2 * n - 1;
    for (int i = 0; i < n; i++) {
        tree[i].weight = weights[i];
        tree[i].parent = tree[i].left = tree[i].right = -1;
    }
    for (int i = n; i < m; i++) {
        tree[i].weight = 0;
        tree[i].parent = tree[i].left = tree[i].right = -1;
    }
    for (int i = n; i < m; i++) {
        int s1 = -1, s2 = -1;
        for (int j = 0; j < i; j++) {
            if (tree[j].parent == -1) {
                if (s1 == -1 || tree[j].weight < tree[s1].weight) {
                    s2 = s1; s1 = j;
                } else if (s2 == -1 || tree[j].weight < tree[s2].weight) {
                    s2 = j;
                }
            }
        }
        tree[s1].parent = i; tree[s2].parent = i;
        tree[i].left = s1; tree[i].right = s2;
        tree[i].weight = tree[s1].weight + tree[s2].weight;
    }
    *root = m - 1;
}





// 生成哈夫曼编码（从叶子向上）
void huffmanCoding(HuffNode tree[], int n, char** codes) {
    char* tmp = (char*)malloc(n * sizeof(char));
    tmp[n-1] = '\0';
    for (int i = 0; i < n; i++) {
        int start = n-1;
        int cur = i;
        int parent = tree[cur].parent;
        while (parent != -1) {
            if (tree[parent].left == cur) tmp[--start] = '0';
            else tmp[--start] = '1';
            cur = parent;
            parent = tree[cur].parent;
        }
        codes[i] = (char*)malloc((n-start) * sizeof(char));
        strcpy(codes[i], tmp+start);
    }
    free(tmp);
}





//线索二叉树
typedef struct ThreadNode {
    int data;
    struct ThreadNode *left, *right;
    int ltag, rtag;   // 0: child, 1: thread
} ThreadNode;





ThreadNode* createThreadNode(int val) {
    ThreadNode* p = (ThreadNode*)malloc(sizeof(ThreadNode));
    p->data = val; p->left = p->right = NULL; p->ltag = p->rtag = 0;
    return p;
}





// 中序线索化
ThreadNode* pre = NULL;
void inThread(ThreadNode* root) {
    if (!root) return;
    inThread(root->left);
    if (!root->left) {
        root->left = pre;
        root->ltag = 1;
    }
    if (pre && !pre->right) {
        pre->right = root;
        pre->rtag = 1;
    }
    pre = root;
    inThread(root->right);
}





void createInThread(ThreadNode* root) {
    pre = NULL;
    inThread(root);
    // 处理最后一个节点的右指针
    if (pre) pre->rtag = 1;
}





// 遍历中序线索二叉树（非递归）
void inOrderThread(ThreadNode* root) {
    ThreadNode* p = root;
    while (p) {
        while (p->ltag == 0) p = p->left;
        printf("%d ", p->data);
        while (p->rtag == 1) {
            p = p->right;
            printf("%d ", p->data);
        }
        p = p->right;
    }
}





// 打印二叉树（凹入表示）
void printTree(BiNode* root, int level) {
    if (!root) return;
    printTree(root->right, level+1);
    for (int i = 0; i < level; i++) printf("    ");
    printf("%d\n", root->data);
    printTree(root->left, level+1);
}





// 复制二叉树
BiNode* copyTree(BiNode* root) {
    if (!root) return NULL;
    BiNode* newNode = createBiNode(root->data);
    newNode->left = copyTree(root->left);
    newNode->right = copyTree(root->right);
    return newNode;
}





// 释放整棵二叉树（已有）
void freeBiTree(BiNode* root) {
    if (!root) return;
    freeBiTree(root->left);
    freeBiTree(root->right);
    free(root);
}




//堆（完全二叉树）操作
typedef struct Heap {
    int* arr;
    int size;
    int capacity;
} Heap;

Heap* createHeap(int cap) {
    Heap* h = (Heap*)malloc(sizeof(Heap));
    h->arr = (int*)malloc(cap * sizeof(int));
    h->size = 0; h->capacity = cap;
    return h;
}





// 向下调整（用于建堆和删除）
void heapify(Heap* h, int idx) {
    int left = 2*idx+1, right = 2*idx+2, smallest = idx;
    if (left < h->size && h->arr[left] < h->arr[smallest]) smallest = left;
    if (right < h->size && h->arr[right] < h->arr[smallest]) smallest = right;
    if (smallest != idx) {
        int tmp = h->arr[idx]; h->arr[idx] = h->arr[smallest]; h->arr[smallest] = tmp;
        heapify(h, smallest);
    }
}






// 建堆（自底向上）
void buildHeap(Heap* h, int* data, int n) {
    h->size = n;
    for (int i = 0; i < n; i++) h->arr[i] = data[i];
    for (int i = n/2-1; i >= 0; i--) heapify(h, i);
}






// 向上调整（用于插入）
void shiftUp(Heap* h, int idx) {
    while (idx > 0) {
        int parent = (idx-1)/2;
        if (h->arr[parent] <= h->arr[idx]) break;
        int tmp = h->arr[parent]; h->arr[parent] = h->arr[idx]; h->arr[idx] = tmp;
        idx = parent;
    }
}





// 插入
void heapInsert(Heap* h, int val) {
    if (h->size == h->capacity) return;
    h->arr[h->size] = val;
    shiftUp(h, h->size);
    h->size++;
}





// 删除堆顶
int heapDeleteMin(Heap* h) {
    if (h->size == 0) return -1;
    int minVal = h->arr[0];
    h->arr[0] = h->arr[h->size-1];
    h->size--;
    heapify(h, 0);
    return minVal;
}






// 堆排序
void heapSort(int* arr, int n) {
    Heap* h = createHeap(n);
    buildHeap(h, arr, n);
    for (int i = n-1; i >= 0; i--) {
        arr[i] = heapDeleteMin(h);
    }
    free(h->arr); free(h);
}