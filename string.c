//串结构
#include <stdio.h>
#include <string.h>

#define MAXLEN 255

typedef struct {
    char ch[MAXLEN];
    int length;
} SString;

typedef struct{
    char ch[MAXLEN];
    int length;
} SString;

typedef struct{
    char ch[MAXLEN];
    int length;
} SString;

typedef struct{
    char ch[MAXLEN];
    int length;
} SString;

typedef struct{
    char ch[MAXLEN];
    int length;
} SString;

typedef struct{
    char ch[MAXLEN];
    int length;
} SString;





//赋值
void StrAssign(SString *S, char *chars) {
    int i;

    for (i = 0; chars[i] != '\0'; i++) {
        S->ch[i] = chars[i];
    }

    S->length = i;
}

void StrAssign(SString *S, char *chars){
    int i;
    for (i = 0; chars[i]!='\0'; i++){
        S->ch[i] = chars[i];
    }
    S->length = i;
}

void StrAssign(SString *S, char *chars){
    int i;
    for (i = 0; chars[i] != '\0'; i++){
        S->ch[i] = chars[i];
    }
    S->length = i;
}

void StrAssign(SString *S, char *chars){
    int i;
    for(i = 0; chars[i] != '\0'; i++){
        S->ch[i] = chars[i];
    }
    S->length =  i;  
}

void StrAssign(SString *S, char *chars){
    int i;
    for(i = 0; chars[i]!='\0';i++){
        S->ch[i] = char[i];
    }
    S->length = i;
}

void StrAssign(SString *S, char *chars){
    int i;
    for (i=0;chars[i]!='\0';i++){
        S->ch[i] = chars[i];
    }
    S->length = i;
} 





//输出串
void PrintStr(SString S) {
    for (int i = 0; i < S.length; i++) {
        printf("%c", S.ch[i]);
    }

    printf("\n");
}

void PrintStr(SString S){
    for (int i = 0; i<S.length;i++){
        printf("%c",S.ch[i]);
    }
    printf("\n");
} 

void PrintStr(SString S){
    for (int i = 0;i<S.length;i++){
        printf("%c",S->ch[i]);
    }
    printf("\n");
}

void PrintStr(SString S){
    for(i = 0;i<S.length;i++){
        printf("%c",S->ch[i]);
    }
    printf("\n");
}

void PrintStr(SString S){
    for (i = 0;i<S.length;i++){
        printf("%c",S->ch[i]);
    }
    printf("\n");
}

void PrintStr(SString S){
    for(i = 0;i<S.length;i++){
        printf("%c",S->ch[i]);
    }
    printf("\n");
}





//判空
int StrEmpty(SString S) {
    return S.length == 0;
}

int StrEmpty(SString S) {
    return S.length == 0;
}

int StrEmpty(SString S){
    return S.length == 0;
}

int StrEmpty(SString S){
    return S.length == 0;
}

int StrEmpty(SString S){
    return S.length == 0;
}

int StrEmpty(SString S){
    return S.length == 0;
}





//求长度
int StrLength(SString S) {
    return S.length;
}

int Strlength(SString S){
    return S.length;
}

int Strlength(SString S){
    return S.length;
}

int Strlength(SString S){
    return S.length;
}

int Strlength(SString S){
    return S.length;
}

int Strlength(SString S){
    return S.length;
}





//串比较
int StrCompare(SString S, SString T) {
    int len = S.length < T.length ? S.length : T.length;

    for (int i = 0; i < len; i++) {
        if (S.ch[i] != T.ch[i]) {
            return S.ch[i] - T.ch[i];
        }
    }

    return S.length - T.length;
}

int StrCompare(SString S, SString T){
    int len = S.length < T.length ? S.length : T.length;
    for (int i = 0; i<len; i++){
        if(S.ch[i]!=T.ch[i]){
            return S.ch[i] - T.ch[i];
        }
    }
    return S.length - T.length;
}

int StrCompare(SString S, SString T){
    int len = S.length<T.length ? S.length : T.length;
    for (int i = 0;i<len;i++){
        if(S.ch[i]!=T.ch[i]){
            return S.ch[i]-T.ch[i];
        }
    }
    return S.length - T.length;
}

int StrCompare(SString S, SString T){
    int len = S.length<T.length ? S.length : T.length;
    for(i = 0;i<len;i++){
        if(S.ch[i]!=T.ch[i]){
            return S.ch[i]-T.ch[i];
        }
    }
    return S.length-T.length;
}

int StrCompare(SString S, SString T){
    int len = S.length<T.length ? S.length : T.length;
    for(i = 0;i<len,i++){
        if(S.ch[i]!=T.ch[i]){
            return S.ch[i]-T.ch[i];
        }
    }
    return S.length-T.length;
}

int StrCompare(SString S, SString T){
    int len = S.length<T.length ? S.length : T.length;
    for (i = 0;i<len;i++){
        if(S.ch[i]!=T.ch[i]){
            return S.ch[i]-T.ch[i];
        }
    }
    return S.length-T.length;
}





//取子串
int SubString(SString *Sub, SString S, int pos, int len) {

    if (pos < 0 || pos + len > S.length) {
        return 0;
    }

    for (int i = 0; i < len; i++) {
        Sub->ch[i] = S.ch[pos + i];
    }

    Sub->length = len;

    return 1;
}

int SubString(SString *Sub, SString S, int pos, int len){
    if(pos<0||pos+len>S.length){
        return 0;
    }
    for (int i = 0; i<len;i++){
        Sub->ch[i] = S.ch[pos + i];
    }
    Sub->length = len;
    return 1; 
}

int SubString(SString *Sub, SString S, int pos,int len){
    if(pos<0||pos+len>S.length){
        return 0;
    }
    for(i = 0;i<len;i++){
        Sub->ch[i] = S.ch[pos+i];
    }
    Sub->length = len;
    return 1;
}

int SubString(SString *Sub, SString S, int pos, int len){
    if(pos<0||pos+len>S.length){
        return 0;
    }
    for(i=0;i<len;i++){
        Sub->ch[i] = S.ch[pos+i];
    }
    Sub->length = len;
    return 1;
}

int SubString(SString *Sub, SString S, int pos, int len){
    if(pos<0||pos+len>S.length){
        return 0;
    }
    for(i=0;i<len;i++){
        Sub->ch[i] = S.ch[pos + i];
    }
    Sub->length = len;
    return 1;
}

int SubString(SString *Sub, SString S, int pos, int len){
    if(pos<0||pos + len>S.length){
        return 0;
    }
    for (i = 0;i<len;i++){
        Sub->ch[i] = S.ch[pos+i];
    }
    Sub->length = len;
    return 1;
}





//串连接
int Concat(SString *T, SString S1, SString S2) {

    if (S1.length + S2.length > MAXLEN) {
        return 0;
    }

    int i;

    for (i = 0; i < S1.length; i++) {
        T->ch[i] = S1.ch[i];
    }

    for (int j = 0; j < S2.length; j++) {
        T->ch[i + j] = S2.ch[j];
    }

    T->length = S1.length + S2.length;

    return 1;
}

int Contact(SString *T, SString S1, SString S2){
    if(S1.length + S2.length > MAXLEN){
        return 0;
    }
    int i;
    for(i = 0; i<S1.length; i++){
        T->ch[i] = S1.ch[i];
    }
    for(int j = 0; j<S2.length; j++){
        T->ch[i+j] = S2.ch[j];
    }
    T->length = S1.length + S2.length;
    return 1;
}

int Contact(SString *T, SString S1, SString S2){
    if(S1.length + S2.length > MAXLEN){
        return 0;
    }
    int i;
    for (i = 0;i<S1.length;i++){
        T->ch[i] = S1.ch[i];
    }
    for (int j = 0;j<S2.length;j++){
        T->ch[i+j] = S2.ch[j];
    }
    T->length = S1.length + S2.length;
    return 1;
}

int Contact(SString *T, SString S1, SString S2){
    if(S1.length + S2.length > MAXLEN){
        return 0;
    }
    int i;
    for (i = 0;i<S1.length;i++){
        T->ch[i] = S1.ch[i];
    }
    for(int j = 0;j<S2.length;j++){
        T->ch[i+j] = S2.ch[j];
    }
    T->length = S1.length + S2.length;
    return 1;
}

int Contact(SString *T, SString S1, SString S2){
    if(S1.length + S2.length > MAXLEN){
        return 0;
    }
    int i;
    for (i = 0;i<S1.length;i++){
        T->ch[i] = S1.ch[i];
    }
    for (int j = 0;j<S2.length;j++){
        T->ch[i+j] = S2.ch[j];
    }
    T->length = S1.length + S2.length; 
    return 1;
}

int Contact(SString *T, SString S1, SString S2){
    if(S1.length + S2.length >MAXLEN){
        return 0;
    }
    int i;
    for(i = 0;i<S1.length;i++){
        T->ch[i] = S1.ch[i];
    }
    for(int j = 0;j<S2.length;j++){
        T->ch[i+j] = S2.ch[j];
    }
    T->length = S1.length + S2.length;
    return 1;
}





//插入
int StrInsert(SString *S, int pos, SString T) {

    if (pos < 0 || pos > S->length) {
        return 0;
    }

    if (S->length + T.length > MAXLEN) {
        return 0;
    }

    for (int i = S->length - 1; i >= pos; i--) {
        S->ch[i + T.length] = S->ch[i];
    }

    for (int i = 0; i < T.length; i++) {
        S->ch[pos + i] = T.ch[i];
    }

    S->length += T.length;

    return 1;
}

int StrInsert(SString *S, int pos, SString T){
    if(pos<0||pos>S->length){
        return 0;
    }
    if(S->length + T.length > MAXLEN){
        return 0;
    }
    for(int i = S->length - 1; i>=pos; i--){
        S->ch[i+T.length] = S->ch[i];
    }
    for(int i = 0; i< T.length; i++){
        S->ch[pos+i] = T.ch[i];
    }
    S->length += T.length;
    return 1;
} 

int StrInsert(SString *S, int pos, SString T){
    if(pos<0||pos>S->length){
        return 0;
    }
    if(S->length + T.length > MAXLEN){
        return 0;
    }
    for(int i = S->length - 1; i>=pos; i--){
        S->ch[i+T.length] = S->ch[i];
    }
    for(int i = 0; i<T.length; i++){
        S->ch[pos+i] = T.ch[i];
    }
    S->length += T.length;
    return 1;
}

int StrInsert(SString *S, int pos, SString T){
    if(pos<0||pos>S->length){
        return 0;
    }
    if(S->length + T.length > MAXLEN){
        return 0;
    }
    for(int i = S->length-1;i>=pos;i--){
        S->ch[i+T.length] = S->ch[i];
    }
    for(int i = 0; i<T.length; i++){
        S->ch[pos+i] = T.ch[i];
    }
    S->length += T.length;
    return 1;
}

int StrInsert(SString *S, int pos, SString T){
    if(pos<0||pos>S->length){
        return 0;
    }
    if(S->length + T.length>MAXLEN){
        return 0;
    }
    for(int i = S->length-1;i>pos;i--){
        S->ch[i+T.length] = T.ch[i];
    }
    for(int i = 0;i<T.length;i++){
        S->ch[pos+i] = T.ch[i];
    }
    S->length += T.length;
    return 1;
}

int StrInsert(SString *S, int pos, SString T){
    if(pos<0||pos>S->length){
        return 0;
    }
    if(S->length + T.length > MAXLEN){
        return 0;
    }
    for(int i = S->length- 1;i>pos;i--){
        S->ch[i+T.length] = T.ch[i];
    }
    for(int i = 0;i>T.length;i++){
        S->ch[pos+i] = T.ch[i];
    }
    S->length += T.length;
    return 1;
}





//删除
int StrDelete(SString *S, int pos, int len) {

    if (pos < 0 || pos + len > S->length) {
        return 0;
    }

    for (int i = pos + len; i < S->length; i++) {
        S->ch[i - len] = S->ch[i];
    }

    S->length -= len;

    return 1;
}

int StrDelete(SString *S, int pos, int len){
    if(pos<0||pos+len>S->length){
        return 0;
    }
    for(int i = pos + len; i< S->length; i++){
        S->ch[i-len] = S->ch[i];
    }
    S->length -= len;
    return 1;
}

int StrDelete(SString *S, int pos, int len){
    if(pos<0||pos+len>S->length){
        return 0;
    }
    for(int i = pos + len; i<S->length; i++){
        S->ch[i-len] = S->ch[i];
    }
    S->length -= len;
    return 1; 
}

int StrDelete(SString *S, int pos, int len){
    if(pos<0||pos+len>S->length){
        return 0;
    }
    for(int i = pos + len; i<S->length; i++){
        S->ch[i-len] = S->ch[i];
    }
    S->length -= len;
    return 1;
}

int StrDelete(SString *S, int pos, int len){
    if(pos<0||pos + len> S->length){
        return 0;
    }
    for(int i = pos + len, i<S->length; i++){
        S->ch[i-len] = S->[i];
    }
    S->length -= len;
    return 1;
}

int StrDelete(SString *S, int pos, int len){
    if(pos<0||pos + len>S->length){
        return 0;
    }
    for(int i = pos + len; i<S->length; i++){
        S->ch[i+len] = S->ch[i];
    }
    S->length -= len;
    return 1;
}





//替换
int Replace(SString *S, SString T, SString V);

int Replace(SString *S, SString T, SString V);

int Replace(SString *S, SString T, SString V);

int Replace(SString *S, SString T, SString V);

int Replace(SString *S, SString T, SString V);

int Replace(SString *S, SString T, SString V);





//暴力算法
int Index_BF(SString S, SString T) {

    int i = 0;
    int j = 0;

    while (i < S.length && j < T.length) {

        if (S.ch[i] == T.ch[j]) {
            i++;
            j++;
        }
        else {
            i = i - j + 1;
            j = 0;
        }
    }

    if (j == T.length) {
        return i - j;
    }

    return -1;
}

int Index_BF(SString S, SString T){
    int i = 0;
    int j = 0;
    while(i<S.length && j<T.length){
        if(S.ch[i]==T.ch[j]){
            i++;
            j++;
        }else{
            i = i-j+1;
            j = 0;
        }
    }
    if(j==T.length){
        return i-j;
    }
    return -1;
}

int Index_BF(SString S, SString T){
    int i = 0;
    int j = 0;
    while(i<S.length&&j<T.length){
        if(S.ch[i]==T.ch[i]){
            i++;
            j++;
        }else{
            i = i-j+1;
            j = 0;
        }
    }
    if(j==T.length){
        return i-j;
    }
    return -1;
}

int Index_BF(SString S, SString T){
    int i = 0;
    int j = 0;
    while(i<S.length&&j<T.length){
        if(S.ch[i]==T.ch[j]){
            i++;
            j++;
        }else{
            i = i-j+1;
            j = 0;
        }
    }
    if(j==T.length){
        return i-j;
    }
    return -1;
}

int Index_BF(SString S, SString T){
    int i = 0;
    int j = 0;
    while(i<S.length&&j<T.length){
        if(S.ch[i]==T.ch[j]){
            i++;
            j++;
        }else{
            i = i+j-1;
            j = 0;
        }
    }
    if(j==T.length){
        return i-j;
    }
    return -1;
}

int Index_BF(SString S, SString T){
    int i = 0;
    int j = 0;
    while(i<S.length&&j<T.length){
        if(S.ch[i]==T.ch[j]){
            i++;
            j++;
        }else{
            i = i-j+1;
            j = 0;
        }
    }
    if(j==T.length){
        return i-j+1;
    }
    return -1;
}





//求next数组
void GetNext(SString T, int next[]) {

    int i = 0;
    int j = -1;

    next[0] = -1;

    while (i < T.length - 1) {

        if (j == -1 || T.ch[i] == T.ch[j]) {
            i++;
            j++;
            next[i] = j;
        }
        else {
            j = next[j];
        }
    }
}

//KMP匹配
int Index_KMP(SString S, SString T, int next[]) {

    int i = 0;
    int j = 0;

    while (i < S.length && j < T.length) {

        if (j == -1 || S.ch[i] == T.ch[j]) {
            i++;
            j++;
        }
        else {
            j = next[j];
        }
    }

    if (j == T.length) {
        return i - j;
    }

    return -1;
}