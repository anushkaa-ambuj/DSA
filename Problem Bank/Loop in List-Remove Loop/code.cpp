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

void removeLoop(ListNode* list) {
    ListNode *slow = list, *fast = list;

    // Step 1: Detect loop using Floyd's cycle-finding algorithm
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        // Loop detected
        if (slow == fast) {
            slow = list;

            // Case 1: Loop starts at head
            if (fast == list) {
                while (fast->next != list)
                    fast = fast->next;
            } 
            // Case 2: Loop starts somewhere after head
            else {
                while (slow->next != fast->next) {
                    slow = slow->next;
                    fast = fast->next;
                }
            }

            // Break the loop
            fast->next = NULL;
            return;
        }
    }
}