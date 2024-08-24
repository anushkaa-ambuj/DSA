​<h2> Approaches: </h2>

<h3> Approach 1: Sorting</h3>
 1. Simply sort the array using merge sort or quick sort <br>
 2. Then iterate the array, comparing i and (i+1)th index --> if same return arr[i].
 <h4> Time Complexity: O(NlogN) </h4>
 <h4> Space Complexity: O(N) </h4>

 <hr>

 <h3> Approach 2: Bit Manipulation</h3>
 1. If the array includes all elements in range [1,N-1] and one among them repeats once. <br>
 2. Then xor all the elements in the array and continue xor with the range [1, N-1]  <br>
 3. Return xor as ans. <br>
 Logic: XOR of same element even number of times = 0; hence, the repeated no. is XOR for 3 times.
 <h4> Time Complexity: O(N) </h4>
 <h4> Space Complexity: O(1) </h4>

  <hr>

 <h3> Approach 3: Hash Maps</h3>
 1. Store the count of the elements in the map. <br>
 2. Return the elements with count>1
 <h4> Time Complexity: O(N)+O(1) = O(N) </h4>
 <h4> Space Complexity: O(N) </h4>

 <hr><hr>

 <h2> Comparing Approaches: </h2>
 Bit Manipulation > Hash Maps > Sorting
