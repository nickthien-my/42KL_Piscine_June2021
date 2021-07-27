1 #ifndef SKYSCRAPPER_H
2 # define SKYSCRAPPER_H
3
4 typedef struct s_params
5 {
6     char    up[4];
7     char    down[4];
8     char    left[4];
9     char    right[4];
10 }   t_params;
11
12 int arg_is_valid(char   *av, t_params   *params);
13 int resolve(char    grid[4][4], t_params    *params);
14 int search_empty_case(char  grid[4][4], int *x, int *y);
15 int can_put_value(char  grid[4][4], int x, int  y, int  value);
16 int line_is_valid(char  grid[4][4], t_params    *params, int    y);
17 int column_is_valid(char    grid[4][4], t_params    *params, int    x);
18 int print_grid(char grid[4][4]);
19
20 #endif
