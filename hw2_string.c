// 자료구조(003분반)_과제2_기계시스템학부_1816862_정은주

//#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지
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
//	printf("순열 문자 데이터 개수 입력:");
//	scanf_s("%d", &n);
//
//	scanf("%s", string);
//	
//	printf("\n순열결과 출력\n");
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

#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지
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
	printf("순열 문자 데이터 개수 입력:");
	scanf("%d", n);
	scanf("%s", str);
	printf("\n순열결과 출력\n");
}