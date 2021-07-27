#include<unistd.h>

void    ft_putchar(char c);

void    printerror(void)
{
  ft_putchar('E');
  ft_putchar('R');
  ft_putchar('R');
  ft_putchar('O');
  ft_putchar('R');
}

void    printletter(int a, int b, int x, int y)
{
  if (x == 1 && y == 1)
  {
    ft_putchar('A');
  }
  else if (x == a && y == 1)
  {
    ft_putchar('C');
  }
  else if (x == 1 && y == b)
  {
    ft_putchar('C');
  }
  else if (x == a && y == b)
  {
    ft_putchar('A');
  }
  else if ((x < a && x > 1) && (y < b && y > 1))
  {
    ft_putchar(' ');
  }
  else
  {
    ft_putchar('B');
  }
}

void    printbox(int a, int b)
{
  int x;
  int y;

  x = 1;
  y = 1;
  while (y <= b)
  {
    while (x <= a)
    {
      printletter(a, b, x, y);
      x++;
    }
    ft_putchar('\n');
    y++;
    x = 1;
  }
}

void    rush(int a, int b)
{
  if (a <= 0 || b <= 0)
  {
    printerror();
  }
  else
  {
    printbox(a, b);
  }
}
