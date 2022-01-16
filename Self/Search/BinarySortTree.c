#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "time.h"

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define MAXSIZE 100

typedef int Status;

typedef struct BiTNode{
    int data;
    BiTNode *lchild,*rchild;
}BiTNode,*BiTree;

//f在此处为NULL，p在此处的作用为保存当前寻找位置的指针，以及指向最终查找值
Status SearchBST(BiTree T,int key,BiTree f,BiTree *p){
    if(!T){
        *p=f;
        return FALSE;
    }
    else if(key==T->data){
        *p=T;
        return TRUE;
    }
    else if(key<T->data){
        return SearchBST(T->lchild,key,T,p);
    }
    else return SearchBST(T->rchild,key,T,p);
}

Status InsertBST(BiTree *T,int key){
    BiTree p,s;
    if(!SearchBST(*T,key,NULL,&p)){
        s=(BiTree)malloc(sizeof(BiTNode));
        s->data=key;
        s->lchild=s->lchild=NULL;
        if(!T){
            *T=s;
        }
        else if(key<p->data){
            p->lchild=s;
        }
        else{
            p->rchild=s;
        }
        return TRUE;
    }
    else{
        return FALSE;
    }
}

/*通过二叉树的插入来构建二叉树*/
int a[10]={62, 88, 58, 47, 35, 73, 51, 99, 37, 93};
BiTree T=NULL;
/*for(int i=0;i<10;i++){
    InsertBST(&T,a[i]);
}*/ //因为不可知VS code识别错误，将其注释，实则代码正确


