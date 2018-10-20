#pragma once

#include<stdio.h>
#include<malloc.h>
#include<Windows.h>
#include<assert.h>

typedef int KeyType;
typedef struct BSTree
{
	KeyType data;
	struct BSTree *left;
	struct BSTree *right;
}BSTree,*pBSTree;

pBSTree BuyNewNode(KeyType data);//�����½ڵ�
void InsertBSTree(pBSTree *pBS, KeyType data);//����������
void RemoveBSTree(pBSTree *pBS,KeyType data);//ɾ���ڵ�
int  SearchBstree(pBSTree *pBS, KeyType data);//���ҽڵ�,�ҵ�����1��ʧ�ܷ���0