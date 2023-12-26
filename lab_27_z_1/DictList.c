////
//// реализаци€ словар€ на односв€занном списке
//// 
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <string.h>
//#include <stdlib.h>
//
//#include "dict.h"
//
//// =========================================================================================
//// реализаци€ словар€!!!
//
//
//// элемент односв€занного списка
//struct Node {
//	char* word;
//	struct Node* next;
//};
//
//
//// первый элемент списка
//struct Node* first = NULL;
//
//
///*
//insert Ц добавл€ет элемент в множество.
//множество Ц содержит только уникальные элементы.
//при повторном добавлении элемента в множество, множество не измен€етс€.
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
//member Ц сообщает, €вл€етс€ ли указанный элемент членом данного множества или нет.
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
///* create - создает словарь.
//вызываетс€ перед началом использовани€ словар€. */
//void Create() {
//	first = NULL;
//}
//
//
///* destroy - уничтожает словарь.
//вызываетс€ после окончани€ использовани€ словар€. */
//void Destroy() {
//	while (first != NULL) {
//		struct Node* delnode = first;
//		first = first->next;
//
//		free(delnode->word);
//		free(delnode);
//	}
//}