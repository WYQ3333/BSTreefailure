#include"BSTree.h"

void test()
{
	BSTree *pRoot = NULL;
	InsertBSTree(&pRoot, 5);
	InsertBSTree(&pRoot, 3);
	InsertBSTree(&pRoot, 4);
	InsertBSTree(&pRoot, 8);
	InsertBSTree(&pRoot, 7);
	InsertBSTree(&pRoot, 6);
	InsertBSTree(&pRoot, 9);
	InsertBSTree(&pRoot, 2);
	InsertBSTree(&pRoot, 1);
	printf("%d ", SearchBstree(&pRoot, 1));

	/*RemoveBSTree(&pRoot, 1);*/
}

int main()
{
	test();
	system("pause");
	return 0;
}