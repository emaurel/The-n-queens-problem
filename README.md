# The-n-queens-problem
A tool to visualize every solution of the n queens problem.

How to use it
-------
You execute the a.out with a parameter n, representing the size of the chessboard and it prints all the possible solutions.

Example
-------

```shell
 make && ./n_queens_solutions -h
```
returns :
```
 0  0  1  0 
 1  0  0  0 
 0  0  0  1 
 0  1  0  0 

 0  1  0  0 
 0  0  0  1 
 1  0  0  0 
 0  0  1  0 
```

Edge cases
-------
The program works well for chessboard up to 10*10, putting higher numbers will significantly increase the computing time.
