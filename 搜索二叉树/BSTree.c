#include"BSTree.h"

pBSTree BuyNewNode(KeyType data)//�����½ڵ�
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



void InsertBSTree(pBSTree *pBS, KeyType data)//����������
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

int  SearchBstree(pBSTree *pBS, KeyType data)//���ҽڵ�,�ҵ�����1��ʧ�ܷ���0
{
	assert(pBS != NULL);
	if (*pBS == NULL)
	{
		return 0;//û�ҵ�
	}
	pBSTree cur = *pBS;
	if (cur->data == data)
	{
		return 1;
	}
	else if (cur->data > data)
	{
		SearchBstree(&cur->left, data);//ȥ����������
	}
	else if (cur->data < data)
	{
		SearchBstree(&cur->right, data);//ȥ��������ȥ��
	}
	else
	{
		return 0;//û�ҵ�
	}
}

void Remove(pBSTree *pBS,KeyType data)
{

}

void RemoveBSTree(pBSTree *pBS, KeyType data)//ɾ���ڵ�
{
	assert(pBS != NULL);
	pBSTree cur = *pBS;
	if (cur->data ==)
}


//����������
//��������
//����
//���key == root->key�ҵ���
//���key<root->key��Ҫ����������ȥ��
//���key>root->key��Ҫ����������ȥ��
//����root == NULL  key ����������������
//����
//�Ƚ��в���
//����ҵ��ˣ�����ʧ��
//���root == NULL; ����ʧ��
//
//
//if (cur->right == NULL)
//{
//	if (parent == NULL)
//	{
//		*root = cur->left;
//		free(cur);
//		return;
//	}
//	if (cur == parent->left)
//	{
//		parent->left = cur->left;
//	}
//	else
//	{
//		parent->right = cur->left;
//	}
//}
//
//�滻�����������е����ֵ�����������е���Сֵ
