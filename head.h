#pragma once
#include<iostream>
#define MAXSIZE 10

using namespace std;
typedef int datatype;

/*-----------Node defining----------------------------*/
/*--------BiTree node-----------------*/
typedef struct BiNode {
	datatype data;
	BiNode* lchild; BiNode* rchild;
}BiTree;

/*--------Normal Tree node------------*/
typedef struct Branch {
	datatype data;
	Branch* next;
}Branch;

typedef struct Tnode {
	datatype data;
	Branch* branch;
	Tnode* next;
}Tnode;

/*--------Threaded BiTree node--------*/
typedef struct TBiNode {
	datatype data;
	int ltag; int rtag;
	TBiNode* lchild; TBiNode* rchild;
}TBiNode;

/*-----------Method designing-------------------------*/
/*------------------Traversing-------------------*/

/*---------Recursion traverse----------*/
void BiTraverseIn(BiNode* node)
{
	if (node != NULL)
	{
		BiTraverseIn(node->lchild);
		cout << node->data;
		BiTraverseIn(node->rchild);
	}
}
void BiTraversePre(BiNode* node)
{
	if (node != NULL)
	{
		cout << node->data;
		BiTraversePre(node->lchild);
		BiTraversePre(node->rchild);
	}
}
void BiTraversePost(BiNode* node)
{
	if (node != NULL)
	{
		BiTraversePost(node->lchild);
		BiTraversePost(node->rchild);
		cout << node->data;
	}
}

/*--------non recursion traverse--------*/
void BTnonRecPre(BiNode* node)
{
	BiNode* BNstack[MAXSIZE]; int top = -1;
	BiNode* p; BNstack[++top] = node;
	while (top != -1)
	{
		p = BNstack[top--];
		cout << p->data;
		if (p->rchild != NULL)
		{
			BNstack[++top] = p->rchild;
		}
		if (p->lchild != NULL)
		{
			BNstack[++top] = p->lchild;
		}
	}
}
void BTnonRecPost(BiNode* node)
{
	BiNode* BNstack[MAXSIZE]; int top = -1;
	BiNode* p = NULL; BNstack[++top] = node;
	int result_stack[MAXSIZE]; int retop = -1;
	while (top != -1)
	{
		p = BNstack[top--];
		result_stack[++retop] = p->data;
		if (p->lchild != NULL)
		{
			BNstack[++top] = p->lchild;
		}
		if (p->rchild != NULL)
		{
			BNstack[++top] = p->rchild;
		}
	}
	while (retop != -1)
	{
		cout << result_stack[retop--];
	}
}
void BTnonRecIn(BiNode* node)
{
	BiNode* BNstack[MAXSIZE]; int top = -1;
	BiNode* p = node;
	while (top != -1 || p != NULL)
	{
		while (p != NULL)
		{
			BNstack[++top] = p;
			p = p->lchild;
		}
		if (top != -1)
		{
			p = BNstack[top--];
			cout << p->data;
			p = p->rchild;
		}
	}
}

/*------------------Threading---------------------*/
void inThread(TBiNode* node, TBiNode*& pre)
{
	if (node != NULL)
	{
		if (node->ltag == 0)inThread(node->lchild, pre);
		if (node->lchild == NULL)
		{
			node->ltag = 1;
			node->lchild = pre;
		}
		if (pre != NULL && pre->rchild == NULL)
		{
			pre->rtag = 1;
			pre->rchild = node;
		}
		pre = node;
		if (node->ltag == 0)inThread(node->rchild, pre);
	}
}
void preThread(TBiNode* node, TBiNode*& pre)
{
	if (node != NULL) {
		if (node->lchild == NULL)
		{
			node->ltag = 1;
			node->lchild = pre;
		}
		if (pre != NULL && pre->rchild == NULL)
		{
			pre->rtag = 1;
			pre->rchild = node;
		}
		pre = node;
		if (node->ltag == 0)preThread(node->lchild, pre);
		if (node->rtag == 0)preThread(node->rchild, pre);
	}
}
void postThread(TBiNode* node, TBiNode*& pre)
{
	if (node != NULL) {
		if (node->ltag == 0)postThread(node->lchild, pre);
		if (node->rtag == 0)postThread(node->rchild, pre);
		if (node->lchild == NULL)
		{
			node->ltag = 1;
			node->lchild = pre;
		}
		if (pre != NULL && pre->rchild == NULL)
		{
			pre->rtag = 1;
			pre->rchild = node;
		}
		pre = node;
	}
}
/*-----------Test Zone--------------------------------*/
