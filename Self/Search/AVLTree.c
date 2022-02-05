#include "stdio.h"
#include "stdlib.h"

#include "math.h"
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define ERROR 0
#define MAXSIZE 100

typedef int Status;

typedef struct BiTNode{
    int data;
    int bf;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;

void R_Rotate(BiTree *p){
    BiTree L;
    L=(*p)->lchild;
    (*p)->lchild=L->rchild;
    L->rchild=*p;
    *p=L;
}

void L_Rotate(BiTree *p){
    BiTree R;
    R=(*p)->rchild;
    (*p)->rchild=R->lchild;
    R->lchild=*p;
    *p=R;
}

