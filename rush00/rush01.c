#include <unistd.h>
  2
  3 void    ft_putchar(char c);
  4
  5 void    printerror(void)
  6 {
  7     ft_putchar('E');
  8     ft_putchar('R');
  9     ft_putchar('R');
 10     ft_putchar('O');
 11     ft_putchar('R');
 12 }
 13
 14 void    printletter(int a, int b, int x, int y)
 15 {
 16     if (x == 1 && y == 1)
 17     {
 18 ft_putchar('/');
 19     }
 20     else if (x == a && y == 1)
 21     {
 22 ft_putchar('\x5c');
 23     }
 24     else if (x == 1 && y == b)
 25     {
 26 ft_putchar('\x5c');
 27     }
 28     else if (x == a && y == b)
 29     {
 30 ft_putchar('/');
 31     }
 32     else if ((x < a && x > 1) && (y < b && y > 1))
 33     {
 34 ft_putchar(' ');
 35     }
 36     else
 37     {
 38 ft_putchar('x');
 39     }
 40 }
 41
 42 void    printbox(int a, int b)
 43 {
 44     int x;
 45     int y;
 46
 47     x = 1;
 48     y = 1;
 49     while (y <= b)
 {
51 while (x <= a)
52 {
53 printletter(a, b, x, y);
54 x++;
55 }
56 ft_putchar('\n');
57 y++;
58 x = 1;
59     }
60 }
61
62 void    rush(int a, int b)
63 {
64     if (a <= 0 || b <= 0)
65     {
66 printerror();
67     }
68     else
69     {
70 printbox(a, b);
71     }
72 }
