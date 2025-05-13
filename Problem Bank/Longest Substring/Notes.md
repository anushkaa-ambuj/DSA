"I would use a sliding window approach.
I’ll maintain a window where all characters are unique.

I'll expand the window by moving the right pointer.
If a duplicate character is found, I’ll shrink the window from the left until the duplicate is removed.

I will use a HashSet to track characters in the current window.

Time Complexity: O(n) (each character is visited at most twice).

Space Complexity: O(min(n, m)) (where m = size of character set)."