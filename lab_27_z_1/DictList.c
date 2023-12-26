////
//// ���������� ������� �� ������������� ������
//// 
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <string.h>
//#include <stdlib.h>
//
//#include "dict.h"
//
//// =========================================================================================
//// ���������� �������!!!
//
//
//// ������� �������������� ������
//struct Node {
//	char* word;
//	struct Node* next;
//};
//
//
//// ������ ������� ������
//struct Node* first = NULL;
//
//
///*
//insert � ��������� ������� � ���������.
//��������� � �������� ������ ���������� ��������.
//��� ��������� ���������� �������� � ���������, ��������� �� ����������.
//*/
//void Insert(char* word) {
//	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//
//	newNode->next = first;
//	newNode->word = (char*)calloc(strlen(word) + 1,	sizeof(char));
//	strcpy(newNode->word, word);
//
//	first = newNode;
//}
//
//
///*
//member � ��������, �������� �� ��������� ������� ������ ������� ��������� ��� ���.
//*/
//int  Member(char* word) {
//	struct Node* ptr = first;
//	while (ptr != NULL) {
//		if (strcmp(ptr->word, word) == 0) {
//			return 1;
//		}
//		ptr = ptr->next;
//	}
//	return 0;
//}
//
//
///* create - ������� �������.
//���������� ����� ������� ������������� �������. */
//void Create() {
//	first = NULL;
//}
//
//
///* destroy - ���������� �������.
//���������� ����� ��������� ������������� �������. */
//void Destroy() {
//	while (first != NULL) {
//		struct Node* delnode = first;
//		first = first->next;
//
//		free(delnode->word);
//		free(delnode);
//	}
//}