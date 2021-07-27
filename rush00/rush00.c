1 #include <unistd.h>
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
16     if ((x == 1 && y == 1) || (x == a && y == 1))
17     {
18 ft_putchar('o');
19     }
20     else if ((x == 1 && y == b) || (x == a && y == b))
21     {
22 ft_putchar('o');
23     }
24     else if ((x < a && x > 1) && (y < b && y > 1))
25     {
26 ft_putchar(' ');
27     }
28     else if ((x == 1 && y < b) || (x == a && y < b))
29     {
30 ft_putchar('|');
31     }
32     else
33     {
34 ft_putchar('-');
35     }
36 }
37
38 void    printbox(int a, int b)
39 {
40     int x;
41     int y;
42
43     x = 1;
44     y = 1;
45     while (y <= b)
46     {
47 while (x <= a)
48 {
49 printletter(a, b, x, y);

 50 x++;
 51 }
 52 ft_putchar('\n');
 53 y++;
 54 x = 1;
 55     }
 56 }
 57
 58 void    rush(int a, int b)
 59 {
 60     if (a <= 0 || b <= 0)
 61     {
 62 printerror();
 63     }
 64     else
 65     {
 66 printbox(a, b);
 67     }
 68 }
