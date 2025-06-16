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

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* head = NULL, *tail = NULL;
    int carry = 0;

    while (l1 || l2 || carry){
        int sum = (l1 ? l1->data:0) + (l2 ? l2->data:0) + carry;
        carry = sum/10;

        ListNode* newNode = new ListNode(sum%10);

        if (!head) head = tail = newNode;
        else tail = tail->next = newNode;

        if(l1) l1 = l1->next;
        if(l2) l2 = l2->next;
    }
    return head;
}


// Utility to print linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->data;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Utility to create linked list from integer (digits reversed)
ListNode* createList(int num) {
    if (num == 0) return new ListNode(0);
    ListNode* head = NULL, *tail = NULL;
    while (num > 0) {
        int digit = num % 10;
        ListNode* newNode = new ListNode(digit);
        if (!head) head = tail = newNode;
        else tail = tail->next = newNode;
        num /= 10;
    }
    return head;
}

int main() {
    int a = 342;  // Will be stored as 2 -> 4 -> 3
    int b = 465;  // Will be stored as 5 -> 6 -> 4

    ListNode* l1 = createList(a);
    ListNode* l2 = createList(b);

    cout << "Input List 1: ";
    printList(l1);
    cout << "Input List 2: ";
    printList(l2);

    ListNode* result = addTwoNumbers(l1, l2);

    cout << "Result List:  ";
    printList(result);  // Should print 7 -> 0 -> 8 (807)
    return 0;
}
