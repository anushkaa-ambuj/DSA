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

bool detectLoop(ListNode* list){
	ListNode *fast = list, *slow = list;
	
	while (fast && fast->next){
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast){
			return true;
		}
	}
	return false;
}