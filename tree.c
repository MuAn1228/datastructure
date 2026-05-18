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