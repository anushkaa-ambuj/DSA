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
    ListNode* slow = list;
	ListNode* fast = list;
	while (true) {
		if (fast->next == NULL || fast->next->next == NULL) {
			break;
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (slow->data);
}