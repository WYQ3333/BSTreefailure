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

pBSTree BuyNewNode(KeyType data);//购买新节点
void InsertBSTree(pBSTree *pBS, KeyType data);//创建二叉树
void RemoveBSTree(pBSTree *pBS,KeyType data);//删除节点
int  SearchBstree(pBSTree *pBS, KeyType data);//查找节点,找到返回1，失败返回0