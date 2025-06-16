#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
	int data;
	ListNode* next;

	ListNode(int data) {
		this->data = data;
		this->next = NULL;
	}
};

int getMiddleElementOfLinkedList (ListNode* list) {
    int listSize = 0;
	ListNode *currentNode = list;
	while(currentNode != NULL) {
		listSize++;
		currentNode = currentNode->next;
	}
	int mid = listSize/2;
	if(listSize % 2 == 0) {
		mid--;
	}
	currentNode = list;
	int i = 0;
	while(i != mid) {
		i++;
		currentNode = currentNode->next;
	}
	return currentNode->data;
}