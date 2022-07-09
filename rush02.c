#include <unistd.h>

void	ft_putchar(char d)
{
	write(1, &d, 1);
}

void ft_rush02(int x, int y)
{
	int f;
	int c;

	c = 1;
	while (c <= y && x > 0)
	{
		f = 1;
		while(f <= x)
		{
			if ((f == 1 && c == 1) || (f == x && c == 1))
				ft_putchar('A');
			else if((f == 1 && c == y) || (f == x && c == y))
				ft_putchar('C');
			else if((f == 1) || (f == x) || (c == 1) || (c == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			f++;
		}
		ft_putchar('\n');
		c++;
	}
}

int main(){
	ft_rush02(5, 7);
}