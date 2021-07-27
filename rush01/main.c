1 #include <unistd.h>
  2 #include "skyscrapper.h"
  3 int main(int    ac, char    **av)
  4 {
  5     t_params    params;
  6     chargrid[4][4];
  7     inti;
  8     intj;
  9
 10     i = -1;
 11     while (++i < 4)
 12     {
 13 j = -1;
 14 while (++j < 4)
 15 grid[i][j] = 0;
 16     }
 17     if (ac != 2 || !arg_is_valid(av[1], &params) || !resolve(grid, &params))
 18     {
 19 write(1, "Error\n", 6);
 20 return (0);
 21     }
 22     print_grid(grid);
 23     return (1);
 24 }
