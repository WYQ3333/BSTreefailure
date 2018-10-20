#include"BSTree.h"

pBSTree BuyNewNode(KeyType data)//购买新节点
{
	pBSTree NewNode = (pBSTree)malloc(sizeof(BSTree));
	if (NewNode == NULL)
	{
		return NULL;
	}
	NewNode->data = data;
	NewNode->left = NULL;
	NewNode->right = NULL;
	return NewNode;
}



void InsertBSTree(pBSTree *pBS, KeyType data)//创建二叉树
{
	assert(pBS != NULL);
	if (*pBS == NULL)
	{
		*pBS = BuyNewNode(data);
	}
	pBSTree cur = *pBS;
	if (data < cur->data)
	{
		InsertBSTree(&cur->left, data);
	}
	else if (data>cur->data)
	{
		InsertBSTree(&cur->right, data);
	}
	else
	{
		return;
	}
}

int  SearchBstree(pBSTree *pBS, KeyType data)//查找节点,找到返回1，失败返回0
{
	assert(pBS != NULL);
	if (*pBS == NULL)
	{
		return 0;//没找到
	}
	pBSTree cur = *pBS;
	if (cur->data == data)
	{
		return 1;
	}
	else if (cur->data > data)
	{
		SearchBstree(&cur->left, data);//去左子树中找
	}
	else if (cur->data < data)
	{
		SearchBstree(&cur->right, data);//去右子树中去找
	}
	else
	{
		return 0;//没找到
	}
}

void Remove(pBSTree *pBS,KeyType data)
{

}

void RemoveBSTree(pBSTree *pBS, KeyType data)//删除节点
{
	assert(pBS != NULL);
	pBSTree cur = *pBS;
	if (cur->data ==)
}