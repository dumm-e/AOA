# AOA Algorithms

Standalone C programs, in the requested order:

1. `1A_selection_sort.c` — Selection Sort
2. `1B_insertion_sort.c` — Insertion Sort
3. `2_merge_sort.c` — Merge Sort
4. `3_quick_sort.c` — Quick Sort
5. `4_dijkstra.c` — Dijkstra’s Algorithm
6. `5A_prim_mst.c` — Prim’s Algorithm
7. `5B_kruskal_mst.c` — Kruskal’s Algorithm
8. `6_01_knapsack.c` — 0/1 Knapsack
9. `7_floyd_warshall.c` — Floyd–Warshall
10. `8_queens.c` — 8 Queens
11. `9_graph_coloring.c` — Graph Coloring
12. `10_kmp.c` — KMP Pattern Matching

Compile each `.c` file separately. The supplied study notes follow.

---

1. Selection Sort
- Minimum element: Find the smallest element in the unsorted part of the array.
- min: Stores the index of the smallest element found.
- temp: Helps swap the current element with the minimum element.
- Time complexity: \(O(n^2)\) in best, average, and worst cases.
In simple words: Find the smallest element and place it at the beginning. Repeat until sorted.

2. Insertion Sort
- key: Stores the current element to be inserted in its correct position.
- while loop: Shifts elements larger than the key one position to the right.
- a[j+1] = key: Places the key in its correct position.
- Time complexity: Best \(O(n)\); average and worst \(O(n^2)\).
In simple words: Like arranging playing cards in your hand, insert each element into the sorted portion.

3. Merge Sort — Divide and Conquer
- Divide: Split the array into two halves.
- Recursion: Sort each half by calling the function again.
- Merge: Combine the sorted halves into one sorted array.
- Base condition: if(l < r) stops dividing when a part contains one element.
- Time complexity: \(O(n\log n)\) in all cases.
In simple words: Divide the array, sort the small parts, and merge them in order.

4. Quick Sort — Divide and Conquer
- Pivot: The element used to divide the array into smaller and larger elements.
- Partitioning: Rearranges elements around the pivot.
- Recursion: Sorts the left and right partitions.
- Time complexity: Average \(O(n\log n)\); worst \(O(n^2)\).
In simple words: Choose a pivot, arrange elements around it, and repeat for both sides.

5. Dijkstra's Algorithm — Single Source Shortest Path
- d[]: Stores the shortest known distance from the source vertex.
- vis[]: Marks vertices whose shortest distance has been finalized.
- Minimum distance: Select the unvisited vertex with the smallest distance.
- Relaxation: Update a neighbour's distance if a shorter path is found through the selected vertex.
- Time complexity: \(O(V^2)\) for the adjacency-matrix implementation used in your code.
In simple words: Find the shortest paths from one starting vertex to all reachable vertices.

Important: Dijkstra's algorithm requires non-negative edge weights.

6. Minimum Spanning Tree — Prim's Algorithm
- vis[]: Marks vertices already included in the spanning tree.
- Minimum edge: Select the cheapest edge connecting a visited vertex to an unvisited vertex.
- cost: Adds the weights of selected edges.
- Number of edges: An MST of a connected graph with \(V\) vertices contains \(V-1\) edges.
- Time complexity: \(O(V^2)\) for your adjacency-matrix implementation.
In simple words: Start from one vertex and grow the tree by adding the cheapest connecting edge.

7. Minimum Spanning Tree — Kruskal's Algorithm
- Sorting: Arrange all edges in increasing order of weight.
- find(): Identifies the component to which a vertex belongs.
- Cycle detection: Select an edge only if its endpoints belong to different components.
- parent[]: Tracks component representatives.
- Time complexity: Typically \(O(E\log E)\), dominated by edge sorting.
In simple words: Select the cheapest edges one by one, skipping any edge that creates a cycle.
Prim's vs Kruskal's
Prim's	Kruskal's
Starts from a vertex	Starts with sorted edges
Grows one tree	Joins separate components
Selects a connecting edge	Selects the next cheapest valid edge
Uses vis[]	Uses parent[] and find()

8. 0/1 Knapsack — Dynamic Programming
- wt[]: Stores item weights.
- val[]: Stores item profits or values.
- dp[i][w]: Maximum profit using the first i items with capacity w.
- Two choices: Include the item or exclude it.
- Time complexity: \(O(nW)\), where \(n\) is the number of items and \(W\) is the capacity.
In simple words: Choose items to maximize profit without exceeding the bag's capacity. Each item can be chosen at most once.

9. Floyd–Warshall — All-Pairs Shortest Path
- k: The intermediate vertex being considered.
- i: The starting vertex.
- j: The destination vertex.
- Distance update: Compare the current distance with the route going through k.
- Time complexity: \(O(V^3)\).
In simple words: Find the shortest paths between every pair of vertices by checking all possible intermediate vertices.

Difference from Dijkstra: Floyd–Warshall calculates all-pairs shortest paths, while Dijkstra calculates shortest paths from one source.

10. 8 Queens — Backtracking
- n = 8: Sets the board size to 8 × 8. Change it to 4 for the 4-Queens version.
- safe(): Checks whether a queen can be placed without attacking another queen.
- queen(r): Tries to place a queen in each column of row r.
- Backtracking: If no position works, the function returns and tries another position.
- Time complexity: Exponential in the general case; the program may stop early when it finds the first solution.
In simple words: Place one queen per row, checking columns and diagonals. If a placement fails, go back and try another.

11. Graph Coloring — Backtracking
- Adjacency matrix: Represents which vertices are connected.
- color[]: Stores the color assigned to each vertex.
- safe(): Checks that no adjacent vertex has the same color.
- Backtracking: Removes a color and tries another if the remaining vertices cannot be colored.
- Time complexity: Worst case \(O(m^V)\), where \(m\) is the number of colors and \(V\) is the number of vertices.
In simple words: Assign colors to vertices so that connected vertices have different colors, using no more than the available number of colors.

12. KMP — Pattern Matching
- Text: The full string in which you search.
- Pattern: The smaller string you want to find.
- LPS array: Stores the length of the longest proper prefix that is also a suffix for each pattern prefix.
- Mismatch handling: Uses the LPS array to avoid restarting the comparison from the beginning.
- Time complexity: \(O(n+m)\), where \(n\) is the text length and \(m\) is the pattern length.
In simple words: Search for a pattern efficiently by reusing previous matching information.

Last-minute complexity cheat sheet
Algorithm	Time complexity
Selection Sort	\(O(n^2)\)
Insertion Sort	Best \(O(n)\), worst \(O(n^2)\)
Merge Sort	\(O(n\log n)\)
Quick Sort	Average \(O(n\log n)\), worst \(O(n^2)\)
Dijkstra (matrix)	\(O(V^2)\)
Prim's (matrix)	\(O(V^2)\)
Kruskal's	\(O(E\log E)\)
0/1 Knapsack	\(O(nW)\)
Floyd–Warshall	\(O(V^3)\)
N-Queens	Exponential, worst case
Graph Coloring	\(O(m^V)\), worst case
KMP	\(O(n+m)\)

Five important viva differences to memorize
1. Greedy vs Dynamic Programming: Greedy makes a locally best choice; dynamic programming solves and reuses smaller subproblems.
2. Merge Sort vs Quick Sort: Merge Sort combines sorted halves; Quick Sort partitions around a pivot.
3. Prim's vs Kruskal's: Prim's grows a tree from a vertex; Kruskal's adds sorted edges while avoiding cycles.
4. Dijkstra vs Floyd–Warshall: Single-source shortest paths vs all-pairs shortest paths.
5. Backtracking: Tries a choice, checks whether it works, and reverses it if necessary.
