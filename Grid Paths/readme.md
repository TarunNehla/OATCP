Algorithm : 
1. Read the input n and a matrix
2. created a 2d dp of size n*n.
3. Iterate over the first row and first column of the matrix: If the current element is not '*', set the corresponding element in dp to 1.
4. Iterate over the remaining elements of the matrix: If the current element is not '*', update the value of dp[i][j] as the sum of dp[i-1][j] and dp[i][j-1] modulo mod.
5. Print the answer which is stored at dp[n-1][n-1].