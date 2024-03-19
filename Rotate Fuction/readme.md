Algorithm : 
1. Reading value of n.
2. Created an empty vector v and pushed n values in vector.
3. Create a copy of vector v called u and reverse its elements.
4. Created variables ans, pre, and sum to 0.
5. Iterate n times and for each iteration, do the following:
    * Update ans by adding i * v[i] to it.
    * Update sum by adding v[i] to it.
6. Set pre equal to ans.
7. Initialize variables rotate and j to 1 and 0 respectively.
8. While rotate is less than n, do the following:
    * Set temp equal to pre.
    * Update temp by adding sum - (n * u[j]) to it.
    * Increment j by 1.
    * Update ans to the maximum value between ans and temp.
    * Update pre to temp.
    * Increment rotate by 1.
9. Print the value of ans.