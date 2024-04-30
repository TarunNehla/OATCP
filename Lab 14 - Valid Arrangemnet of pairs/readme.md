Algorithm : 
*  The program then reads an integer `n` from the input, which represents the number of pairs and then program reads `n` pairs of integers from the input and stores them in a vector `v`.

* The `valArr` function is called with `v` as the argument. The result is stored in `a`.

* The `valArr` function takes a list of pairs as input, creates an adjacency list and an indegree map from the pairs, and then uses the `dfs` function to find a valid arrangement of the pairs. The function returns the valid arrangement if it exists.

* `dfs` (depth-first search) function which is used to traverse the adjacency list of a graph. It keeps track of the visited nodes and the path taken.

* If the size of `a` is not equal to the size of `v`, it means a valid arrangement is not possible, so the program outputs "Arrangement not possible". Otherwise, it outputs the valid arrangement.