Algorithm : 
* The main function reads the input, constructs the graph, and calls the fordFulkerson function to find the maximum flow.
* The fordFulkerson function is the main function implementing the Ford-Fulkerson algorithm. It first initializes the residual graph to be the same as the original graph.
* The code implements the Ford-Fulkerson algorithm for finding the maximum flow in a flow network. The flow network is represented as a 2D adjacency matrix.
* The bfs function is used to find an augmenting path from the source to the sink in the residual graph. It uses a breadth-first search (BFS) and keeps track of the parent of each node to reconstruct the path.
* It then repeatedly finds an augmenting path using the bfs function. For each augmenting path, it finds the minimum capacity along the path.
* It then updates the residual graph by subtracting the bottleneck capacity from each edge on the path in the forward direction and adding the bottleneck capacity to each edge in the backward direction.
* The maximum flow is the sum of the bottleneck capacities of all augmenting paths found. The algorithm stops when no more augmenting paths can be found.

