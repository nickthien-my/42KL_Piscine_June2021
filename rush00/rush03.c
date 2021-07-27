#include <unistd.h>
  2 void    ft_putchar(char c);
  3
  4 void    printerror(void)
  5 {
  6     ft_putchar('E');
  7     ft_putchar('R');
  8     ft_putchar('R');
  9     ft_putchar('O');
 10     ft_putchar('R');
 11 }
 12
 13 void    printletter(int a, int b, int x, int y)
 14 {
 15     if (x == 1 && y == 1)
 16     {
 17 ft_putchar('A');
 18     }
 19     else if (x == a && y == 1)
 20     {
 21 ft_putchar('C');
 22     }
 23     else if (x == 1 && y == b)
 24     {
 25 ft_putchar('A');
 26     }
 27     else if (x == a && y == b)
 28     {
 29 ft_putchar('C');
 30     }
 31     else if ((x < a && x > 1) && (y < b && y > 1))
 32     {
 33 ft_putchar(' ');
 34     }
 35     else
 36     {
 37 ft_putchar('B');
 38     }
 39 }
 40
 41 void    printbox(int a, int b)
 42 {
 43     int x;
 44     int y;
 45
 46     x = 1;
 47     y = 1;
 48     while (y <= b)
 49     {
   50 while (x <= a)
 51 {
 52 printletter(a, b, x, y);
 53 x++;
 54 }
 55 ft_putchar('\n');
 56 y++;
 57 x = 1;
 58     }
 59 }
 60
 61 void    rush(int a, int b)
 62 {
 63     if (a <= 0 || b <= 0)
 64     {
 65 printerror();
 66     }
 67     else
 68     {
 69 printbox(a, b);
 70     }
 71 }
