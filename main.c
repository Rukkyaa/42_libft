/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:31:49 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/16 18:00:06 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

void	print_sep(unsigned int nb, char c)
{
	unsigned int	index;

	index = 0;
	while (index < nb)
	{
		printf("%c", c);
		index ++;
	}
}

void	print_header(char *function)
{
	(void) function;
	printf("/");
	print_sep(50, '=');
	printf("\\\n");

	printf("|");
	print_sep(25 - (ft_strlen(function) / 2), ' ');
	printf("%s", function);
	print_sep(25 - (ft_strlen(function) / 2 + ft_strlen(function) % 2), ' ');
	printf("|\n");

	printf("\\");
	print_sep(50, '=');
	printf("/\n\n");
}

void	test_ft_isalpha(void)
{
	printf("ft_isalpha(%s) -> %d\n", "A", ft_isalpha('A'));
	printf("ft_isalpha(%s) -> %d\n", "A - 1", ft_isalpha('A' - 1));
	printf("ft_isalpha(%s) -> %d\n", "Z", ft_isalpha('Z'));
	printf("ft_isalpha(%s) -> %d\n", "Z + 1", ft_isalpha('Z' + 1));
	printf("ft_isalpha(%s) -> %d\n", "a", ft_isalpha('a'));
	printf("ft_isalpha(%s) -> %d\n", "a - 1", ft_isalpha('a' - 1));
	printf("ft_isalpha(%s) -> %d\n", "z", ft_isalpha('z'));
	printf("ft_isalpha(%s) -> %d\n\n", "z + 1", ft_isalpha('z' + 1));
}

void	test_ft_isdigit(void)
{
	printf("ft_isdigit(%s) -> %d\n", "0", ft_isdigit('0'));
	printf("ft_isdigit(%s) -> %d\n", "0 - 1", ft_isdigit('0' - 1));
	printf("ft_isdigit(%s) -> %d\n", "9", ft_isdigit('9'));
	printf("ft_isdigit(%s) -> %d\n\n", "9 + 1", ft_isdigit('9' + 1));
}

void	test_ft_isalnum(void)
{
	printf("ft_isalnum(%s) -> %d\n", "A", ft_isalnum('A'));
	printf("ft_isalnum(%s) -> %d\n", "A - 1", ft_isalnum('A' - 1));
	printf("ft_isalnum(%s) -> %d\n", "Z", ft_isalnum('Z'));
	printf("ft_isalnum(%s) -> %d\n", "Z - 1", ft_isalnum('Z' + 1));
	printf("ft_isalnum(%s) -> %d\n", "a", ft_isalnum('a'));
	printf("ft_isalnum(%s) -> %d\n", "a - 1", ft_isalnum('a' - 1));
	printf("ft_isalnum(%s) -> %d\n", "z", ft_isalnum('z'));
	printf("ft_isalnum(%s) -> %d\n", "z - 1", ft_isalnum('z' + 1));
	printf("ft_isalnum(%s) -> %d\n", "0", ft_isalnum('0'));
	printf("ft_isalnum(%s) -> %d\n", "0 - 1", ft_isalnum('0' - 1));
	printf("ft_isalnum(%s) -> %d\n", "9", ft_isalnum('9'));
	printf("ft_isalnum(%s) -> %d\n\n", "9 + 1", ft_isalnum('9' + 1));
}

void	test_ft_isascii(void)
{
	printf("ft_isascii(%s) -> %d\n", "0", ft_isascii(0));
	printf("ft_isascii(%s) -> %d\n", "-1", ft_isascii(-1));
	printf("ft_isascii(%s) -> %d\n", "127", ft_isascii(127));
	printf("ft_isascii(%s) -> %d\n\n", "128", ft_isascii(128));
}

void	test_ft_isprint(void)
{
	printf("ft_isprint(%s) -> %d\n", "32", ft_isprint(32));
	printf("ft_isprint(%s) -> %d\n", "31", ft_isprint(31));
	printf("ft_isprint(%s) -> %d\n", "126", ft_isprint(126));
	printf("ft_isprint(%s) -> %d\n\n", "127", ft_isprint(127));
}

void	test_ft_strlen(void)
{
	printf("ft_strlen(%s) -> %zd\n", "\"\"", ft_strlen(""));
	printf("ft_strlen(%s) -> %zd\n", "\"Salut \"", ft_strlen("Salut "));
	printf("ft_strlen(%s) -> %zd\n", "\"\\0\\0\\0\\0\"", ft_strlen("\0\0\0\0"));
	printf("ft_strlen(%s) -> %zd\n\n", "\"42\"", ft_strlen("42"));
}

void	test_ft_memset(void)
{
	char	tab[100];
	int		i = 0;

	printf("ft_memset(tab, a, 50)\n");
	ft_memset(tab, 'a', 50);
	while (tab[i] < 100 && tab[i] == 'a')
		i ++;
	printf("Nombre de 'a' : %d\n", i);
	printf("ft_memset(tab, b, 0)\n");
	ft_memset(tab, 'b', 0);
	i = 0;
	while (tab[i] < 100 && tab[i] == 'a')
		i ++;
	printf("Nombre de 'a' : %d\n", i);
	printf("ft_memset(tab, b, 10)\n");
	ft_memset(tab, 'b', 10);
	i = 0;
	while (tab[i] < 100 && tab[i] == 'b')
		i ++;
	printf("Nombre de 'b' : %d\n\n", i);
}

int	main(void)
{
	print_header("Test : ft_isalpha");
	test_ft_isalpha();
	print_header("Test : ft_isdigit");
	test_ft_isdigit();
	print_header("Test : ft_isalnum");
	test_ft_isalnum();
	print_header("Test : ft_isascii");
	test_ft_isascii();
	print_header("Test : ft_isprint");
	test_ft_isprint();
	print_header("Test : ft_strlen");
	test_ft_strlen();
	print_header("Test : ft_memset");
	test_ft_memset();
}
