​<h2> Approaches: </h2>

<h3> Approach 1: Using Loops</h3>
 1. Simply check perfect square of all integers till it is <= the value.
<h4> Time Complexity: O(sqrt(N)) </h4>
<h4> Space Complexity: O(1) </h4>

<hr>

<h3> Approach 2: Binary Search</h3>
<h4> Time Complexity: O(log(N)) </h4>
<h4> Space Complexity: O(1) </h4>

<hr>

<h3> Approach 3: Direct Formula</h3>
<h4> Time Complexity: O(log(N)) </h4>
<h4> Space Complexity: O(1) </h4>

<hr>

<h3> Approach 4: Pocket Calculation</h3>

```
x = sqrt(n)
x * x = n
x^2 = n

ln(x) = (1/2)*ln(n)
x = e^((1/2)*ln(n))
```
<h4> Time Complexity: O(1) </h4>
<h4> Space Complexity: O(N) </h4>

<hr><hr>

<h2> Comparing Approaches: </h2>
Pocket Formula > Binary Search > Loops
