
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		write (1, &str[n], 1);
		n++;
	}
}

int	main()
{
	char *length = "Hakan, monitör, dri, ek";
	ft_putstr(length);
}