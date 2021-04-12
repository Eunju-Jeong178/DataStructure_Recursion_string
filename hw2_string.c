// �ڷᱸ��(003�й�)_����2_���ý����к�_1816862_������

//#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ����
//#include <stdio.h>
////#include <string.h>
//#define MAX 10
//void perm(char*, int, int);
//void swap(char*, char*);
//
//int main() {
//	char string[MAX];
//	int n;
//
//	printf("���� ���� ������ ���� �Է�:");
//	scanf_s("%d", &n);
//
//	scanf("%s", string);
//	
//	printf("\n������� ���\n");
//	perm(string, 0, n - 1);
//}
//
//void perm(char* string, int i, int n)
//{
//	int j;
//	if (i == n)
//		printf("%s\n", string);
//	else
//	{
//		for (j = i; j <= n; j++)
//		{
//			swap((string + i), (string + j));
//			perm(string, i + 1, n);
//			swap((string + i), (string + j)); //backtrack
//		}
//	}
//}
//
//void swap(char* a, char* b)
//{
//	char temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}

#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>
//#include <string.h>
#define MAX 10
void perm(char*, int, int);
void swap(char*, char*);
void inputData(char str[], int*);

int main() {
	char str[MAX];
	int n;
	inputData(str, &n);

	//printf("----%d---- \n", n);

	perm(str, 0, n - 1);
}

void perm(char* str, int i, int n)
{
	int j;
	if (i == n)
		printf("%s\n", str);
	else
	{
		for (j = i; j <= n; j++)
		{
			swap((str + i), (str + j));
			perm(str, i + 1, n);
			swap((str + i), (str + j)); 
		}
	}
}

void swap(char* a, char* b)
{
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void inputData(char str[], int *n)
{
	printf("���� ���� ������ ���� �Է�:");
	scanf("%d", n);
	scanf("%s", str);
	printf("\n������� ���\n");
}