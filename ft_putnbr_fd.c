#include "libft.h"
#include <unistd.h>

void	ft_printnbr_fd(int n, int fd)
{
	char	c;

	c = (n % 10) + 48;
	if (n / 10 != 0)
	{
		ft_printnbr_fd(n / 10, fd);
	}
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
		write(fd, "0", 1);
	else if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		ft_printnbr_fd(n * -1, fd);
	}
	else
		ft_printnbr_fd(n, fd);
}

