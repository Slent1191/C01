#include <unistd.h>

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != 0)
	{
		write(1, &str[a], 1);
		a = a + 1;
	}
}

int	main(void)
{
	char	*str;

	str = "Gavno Zalupa Penis Her\n";
	ft_putstr(str);
}
