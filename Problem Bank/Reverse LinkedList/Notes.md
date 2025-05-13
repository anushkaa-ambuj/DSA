"I would use three pointers — prev, curr, and next.
prev starts as NULL, curr starts at head.
For each node, I:

Save curr->next to next.

Reverse curr->next = prev.

Move prev = curr and curr = next.

I continue until curr becomes NULL.

Time Complexity: O(n) — one pass through the list.

Space Complexity: O(1) — no extra memory, in-place reversal."

