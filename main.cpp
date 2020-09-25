#include"head.h"

using namespace std;

void main()
{
	//manually initialize bitree example.
	BiNode* node1 = new BiNode;
	BiNode* node2 = new BiNode;
	BiNode* node3 = new BiNode;
	BiNode* node4 = new BiNode;
	BiNode* node5 = new BiNode;
	BiNode* node6 = new BiNode;
	BiNode* node7 = new BiNode;
	BiNode* node8 = new BiNode;
	node1->data = 1; node1->lchild = node2; node1->rchild = node3;
	node2->data = 2; node2->lchild = node4; node2->rchild = node5;
	node3->data = 3; node3->lchild = node6; node3->rchild = node7;
	node4->data = 4; node4->lchild = NULL; node4->rchild = NULL;
	node5->data = 5; node5->lchild = NULL; node5->rchild = NULL;
	node6->data = 6; node6->lchild = node8; node6->rchild = NULL;
	node7->data = 7; node7->lchild = NULL; node7->rchild = NULL;
	node8->data = 8; node8->lchild = NULL; node8->rchild = NULL;
	LevelOrder(node1);
	//test and output recursion result.
	/*cout << "In order traverse sequence:";
	BiTraverseIn(node1);
	cout << endl;

	cout << "Pre order traverse sequence:";
	BiTraversePre(node1);
	cout << endl;

	cout << "Post order traverse sequence:";
	BiTraversePost(node1);
	cout << endl;

	//test and output non-recursion result.
	cout << "non recursion Pre-traverse:";
	BTnonRecPre(node1);
	cout << endl;

	cout << "non recursion Post-traverse:";
	BTnonRecPost(node1);
	cout << endl;

	cout << "non recursion IN-traverse:";
	BTnonRecIn(node1);
	cout << endl;
	*/
	/*----------Threading experiment -------------------------*/
	//manually initialize

	/*TBiNode* nodearray[6];
	for (int i = 0; i < 6; i++)
	{
		nodearray[i] = (TBiNode*)malloc(sizeof(TBiNode));
		nodearray[i]->data = i + 1;
		nodearray[i]->ltag = 0; nodearray[i]->rtag = 0;
	}
	nodearray[0]->lchild = nodearray[1]; nodearray[0]->rchild = nodearray[2];
	nodearray[1]->lchild = nodearray[3]; nodearray[1]->rchild = nodearray[4];
	nodearray[2]->lchild = nodearray[5]; nodearray[2]->rchild = NULL;
	nodearray[3]->lchild = NULL; nodearray[3]->rchild = NULL;
	nodearray[4]->lchild = NULL; nodearray[4]->rchild = NULL;
	nodearray[5]->lchild = NULL; nodearray[5]->rchild = NULL;

	TBiNode* nullpre = NULL;
	*/
	//test inThread
	/*
	cout << "#################inThread test output:#################" << endl;
	inThread(nodearray[0], nullpre);
	for (int i = 0; i < 6; i++)
	{
		cout << "The " << i + 1 << " th node`s " << endl;
		cout << "ADDRESS: " << nodearray[i] << endl;
		cout << "LTAG= " << nodearray[i]->ltag;
		cout << "\t\t\tRTAG= " << nodearray[i]->rtag << endl;
		cout << "lchild: " << nodearray[i]->lchild;
		cout << "\trchild: " << nodearray[i]->rchild << endl;
		cout << "----------------------------------------------" << endl;
	}

	//test preThread
		cout << "#################preThread test output:#################" << endl;
		preThread(nodearray[0], nullpre);
		for (int i = 0; i < 6; i++)
		{
			cout << "The " << i + 1 << " th node`s " << endl;
			cout << "ADDRESS: " << nodearray[i] << endl;
			cout << "LTAG= " << nodearray[i]->ltag;
			cout << "\t\t\tRTAG= " << nodearray[i]->rtag << endl;
			cout << "lchild: " << nodearray[i]->lchild;
			cout << "\trchild: " << nodearray[i]->rchild << endl;
			cout << "----------------------------------------------" << endl;
		}
		//test postThread
		cout << "#################postThread test output:#################" << endl;
		postThread(nodearray[0], nullpre);
		for (int i = 0; i < 6; i++)
		{
			cout << "The " << i + 1 << " th node`s " << endl;
			cout << "ADDRESS: " << nodearray[i] << endl;
			cout << "LTAG= " << nodearray[i]->ltag;
			cout << "\t\t\tRTAG= " << nodearray[i]->rtag << endl;
			cout << "lchild: " << nodearray[i]->lchild;
			cout << "\trchild: " << nodearray[i]->rchild << endl;
			cout << "----------------------------------------------" << endl;
		}
		*/
}