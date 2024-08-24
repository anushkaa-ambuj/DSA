​<h2> Approaches: </h2>

<h3> Approach 1: Sorting</h3>
Sort and compare the strings

 <h4> Time Complexity: O(NlogN) </h4>
 <h4> Space Complexity: O(1) </h4>

 <hr>

 <h3> Approach 2: Comparing Freq-using Arr</h3>
 Comparing frequency of each char in both strings.

 <h4> Time Complexity: N+N+26 = O(N) </h4>
 <h4> Space Complexity: 26 </h4>

  <hr>

 <h3> Approach 2: Comparing Freq-using Maps</h3>

 <h4> Time Complexity: N+N+len(map) = O(N) </h4>
 <h4> Space Complexity: len(map) </h4>

 Note: Here, len(map) is equal to unique chars in both the strings, simply.

 <hr><hr>

 <h2> Comparing Approaches: </h2>
 Freq Comparision > Sorting

 '''
 Space Complexity of: 
 Sorting > Freq Comparision
 '''
