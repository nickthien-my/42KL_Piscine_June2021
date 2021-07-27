#include <unistd.h>
 2 #include "skyscrapper.h"
 3 void    update_max_count_view(int   *views, int curr_grid, int  *curr_max)
 4 {
 5     *views += curr_grid > *curr_max;
 6     if (curr_grid > *curr_max)
 7 *curr_max = curr_grid;
 8     else
 9 return ;
10 }
11
12 int column_is_valid(char    grid[4][4], t_params    *params,    int x)
13 {
14     int i;
15     int max_size;
16     int views;
17
18     max_size = 0;
19     views = 0;
20     i = -1;
21     while (++i < 4)
22 update_max_count_view(&views, grid[i][x], &max_size);
23     if (views != params->up[x])
24 return (0);
25     max_size = 0;
26     views = 0;
27     while (--i >= 0)
28 update_max_count_view(&views, grid[i][x], &max_size);
29     if (views != params->down[x])
30 return (0);
31     return (1);
32 }
33
34 int line_is_valid (char grid[4][4], t_params *params, int y)
35 {
36     int i;
37     int max_size;
38     int views;
39
40     max_size = 0;
41     views = 0;
42     i = -1;
43     while (++i < 4)
44     {
45 update_max_count_view(&views, grid[y][i], &max_size);
46     }
47     if (views != params->left[y])
48 return (0);
49     max_size = 0;views = 0;

while (--i >= 0)

52     {
53 update_max_count_view(&views, grid[y][i], &max_size);
54     }
55     if (views != params->right[y])
56 return (0);
57     return (1);
58 }
59
60 int can_put_value(char  grid[4][4], int x, int  y, int  value)
61 {
62     int i;
63
64     i = -1;
65     while (++i < 4)
66 if (grid[y][i] == value || grid[i][x] == value)
67 return (0);
68     return (1);
69 }
70 
71 int search_empty_case(char  grid[4][4], int *x, int *y)
72 {
73     int i;
74     int j;
75
76     i = -1;
77     while (++i < 4)
78     {
79 j = -1;
80 while (++j < 4)
81 {
82 if (grid[i][j] == 0)
83 {
84 *x = j;
85 *y = i;
86 return (1);
87 }
88 }
89     }
90     return (0);
91 }
