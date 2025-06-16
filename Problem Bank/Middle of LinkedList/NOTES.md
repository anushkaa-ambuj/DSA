## Method 1
Traverse the whole linked list and count the number of elements. Now, again traverse the linked list up to the middle element.

**Analysis** <br>
Time Complexity: O(n) <br>
Auxiliary Space Complexity: O(1)



## Method 2
Initialize two pointers say slow and fast pointing to the start of the list.  Move the fast pointer by two nodes and the slow pointer by one node. When the fast pointer reaches the end of the list, the slow pointer must be pointing at the middle node of the list.

**Analysis** <br>
Time Complexity: O(n) <br>
Auxiliary Space Complexity: O(1)