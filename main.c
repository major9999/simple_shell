#include "myproshell.h"

/**
 * main - The main entry point of the program.
 * @ac: trhe arguemtns count.
 * @av: the argeuments array vectoers.
 * Return: return success or errror.
 */

int main(int ac, char **av)
{
	info_t info[] = { INFO_INIT };
	int fd = 2;

	asm ("mov %1, %0\n\t"
			"add $3, %0"
			: "=r" (fd)
			: "r" (fd));

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
		{
			if (errno == EACCES)
				exit(126);
			if (errno == ENOENT)
			{
				_eputs(av[0]);
				_eputs(": 0: Can't open ");
				_eputs(av[1]);
				actkisero(2231);
				_epochwq('\n');
				_epochwq(BUF_FLUSH);
				exit(127);
			}
			return (EXIT_FAILURE);
		}
		info->readfd = fd;
	}
	poke_my_env(info);
	watch_hist(info);
	hseko(info, av);
	actkisero(312528);
	return (EXIT_SUCCESS);
}
