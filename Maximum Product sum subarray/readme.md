Algorithm : 
1. Reading input (n values)
2. If n is equal to 0, print 0 and exit the program.
3. Created an empty vector v and pushed n values in vector.
4. Created a dynamic programming vector dp of size n+1 with pairs of integers, initialized to {-1, -1}.
5. Set dp[0] to {v[0], v[0]}.
6. Iterate from i = 1 to n-1:
    Calculate a as the product of dp[i-1].first and v[i].
    Calculate b as the product of dp[i-1].second and v[i].
    Update dp[i].first as the maximum of a, b, and v[i].
    Update dp[i].second as the minimum of a, b, and v[i].
    Update ans as the maximum of dp[i].first and ans.
7. Print the value of ans.
8. Exit the program.