1 #include <unistd.h>
2 #include "skyscrapper.h"
3
4 int print_grid(char grid[4][4])
5 {
6     int y;
7     int x;
8
9     y = -1;
10     while (++y < 4)
11     {
12 x = -1;
13 while (++x < 4)
14 {
15 write(1, &grid[y][x], 1);
16 if (x != (3))
17 write(1, " ", 1);
18 }
19 write(1, "\n", 1);
20     }
21     return (1);
22 }
23
24 int not_possible(int    *x, int *y, t_params    *params, char   grid[4][4])
25 {
26     if (*x == 3 && !line_is_valid(grid, params, *y))
27 return (1);
28     if (*y == 3 && !column_is_valid(grid, params, *x))
29 return (1);
30     return (0);
31 }
32
33 int resolve(char    grid[4][4], t_params    *params)
34 {
35     int     x;
36     int     y;
37     char    value;
38
39     if (search_empty_case(grid, &x, &y))
40     {
41 value = '0';
42 while (++value <= ('4'))
43 {
44 if (can_put_value(grid, x, y, value))
45 {
46 grid[y][x] = value;
47 if (not_possible(&x, &y, params, grid))
48 continue ;
49 if (resolve(grid, params) == 1)
50 return (1);
51 }
52 }
53 grid[y][x] = 0;
54 return (0);
55     }
56     return (1);
57 }
58
59 int arg_is_valid(char   *av, t_params   *params)
60 {
61     int     i;
62     char    *ptr_params;
63
64     i = -1;
65     ptr_params = (*params).up;
66     while (av[++i] != '\0')
67     {
68 if (i % 2 != 0 && av[i] == ' ')
69 continue ;
70 if (i % 2 != 0 && av[i] != ' ')
71 return (0);
72 if (i % 2 == 0 && !(av[i] >= '1' && av[i] <= '4'))
73 return (0);
74 *ptr_params = av[i] - '0';
75 ptr_params++;
76     }
77     if (i != 31)
78 return (0);
79     return (1);
80 }
