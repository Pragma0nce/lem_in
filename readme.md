############# TODO	#################
1) Work on queue, enqueue etc.

	t_vertex item;

Given the following ant farm structure:

    [2]
   / | \
[0]  |  [1]
   \ | /
    [3]

Find the shortest path for 3 ants, starting at [0], ending at [1].

SOLUTION:
- Find the shortest path available for the first ant.
- Let the first ant take a step.
- Find the shortest path available for the second and, blocking out the node the first ant stands on.
- Let the second ant take a step.
... 

TRIVIAL SOLUTION:
- Find the shortest path available for ant (n)
- Let ant (n) take a step
- Repeat for n
