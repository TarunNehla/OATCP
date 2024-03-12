Algorithm : 
1. Read the input integer n
2. Created a vector dp of size n+1 to store the number of ways to reach each number till n.
3. Initialized the value of dp[0] = 1
4. Iterate from 1 to n : 
    Iterate from 1 to 6 :
        if j is less than or equal to i, update the dp[i] by dp[i-j].

5. Print Answer

Time compexity : O(n) => Nested loop from 1 to n and then constant operation of 1 to 6.
Space complexity : O(n) => size of dp vector