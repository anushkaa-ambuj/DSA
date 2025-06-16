## Naive Approach
We can iterate over all possible subarrays of the array and calculate their sum. Then return the maximum possible value of the sum obtained.

**Analysis** <br>
Time Complexity: O(n3) <br>
Space Complexity: O(1)

## Kadane's Algorithm
The largest contiguous sum can be solved optimally using Kadane's Algorithm in linear time. The key idea in Kadane's Algorithm is to keep track of all positive contiguous subarrays of the array and keep track of the maximum sum encountered yet and keep updating the maximum sum encountered. An edge case will be when all elements are negative, which has to be handled separately.

**Analysis** <br>
Time Complexity: O(n) <br>
Space Complexity: O(1)