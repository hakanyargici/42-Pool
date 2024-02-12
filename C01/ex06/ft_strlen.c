
int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

#include <stdio.h>

int	main()
{
	char length[] = "Hakan";
	printf("%d", ft_strlen(length));
}