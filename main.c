/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:31:49 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/20 23:50:30 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include "../Unity/src/unity.h"
#include <ctype.h>
#include <string.h>

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

void	test_isalpha(void)
{
	TEST_ASSERT_EQUAL_INT(!!isalpha('A'), ft_isalpha('A'));
	TEST_ASSERT_EQUAL_INT(!!isalpha('A' - 1), ft_isalpha('A' - 1));
	TEST_ASSERT_EQUAL_INT(!!isalpha('Z'), ft_isalpha('Z'));
	TEST_ASSERT_EQUAL_INT(!!isalpha('Z' + 1), ft_isalpha('Z' + 1));
	TEST_ASSERT_EQUAL_INT(!!isalpha('a'), ft_isalpha('a'));
	TEST_ASSERT_EQUAL_INT(!!isalpha('a' - 1), ft_isalpha('a' - 1));
	TEST_ASSERT_EQUAL_INT(!!isalpha('z'), ft_isalpha('z'));
	TEST_ASSERT_EQUAL_INT(!!isalpha('z' + 1), ft_isalpha('z' + 1));
}

void	test_isdigit(void)
{
	TEST_ASSERT_EQUAL_INT(!!isdigit('0'), ft_isdigit('0'));
	TEST_ASSERT_EQUAL_INT(!!isdigit('0' - 1), ft_isdigit('0' - 1));
	TEST_ASSERT_EQUAL_INT(!!isdigit('9'), ft_isdigit('9'));
	TEST_ASSERT_EQUAL_INT(!!isdigit('9' + 1), ft_isdigit('9' + 1));
}

void	test_isalnum(void)
{
	TEST_ASSERT_EQUAL_INT(!!isalnum('A'), ft_isalnum('A'));
	TEST_ASSERT_EQUAL_INT(!!isalnum('A' - 1), ft_isalnum('A' - 1));
	TEST_ASSERT_EQUAL_INT(!!isalnum('Z'), ft_isalnum('Z'));
	TEST_ASSERT_EQUAL_INT(!!isalnum('Z' + 1), ft_isalnum('Z' + 1));
	TEST_ASSERT_EQUAL_INT(!!isalnum('a'), ft_isalnum('a'));
	TEST_ASSERT_EQUAL_INT(!!isalnum('a' - 1), ft_isalnum('a' - 1));
	TEST_ASSERT_EQUAL_INT(!!isalnum('z'), ft_isalnum('z'));
	TEST_ASSERT_EQUAL_INT(!!isalnum('z' + 1), ft_isalnum('z' + 1));
	TEST_ASSERT_EQUAL_INT(!!isalnum('0'), ft_isalnum('0'));
	TEST_ASSERT_EQUAL_INT(!!isalnum('0' - 1), ft_isalnum('0' - 1));
	TEST_ASSERT_EQUAL_INT(!!isalnum('9'), ft_isalnum('9'));
	TEST_ASSERT_EQUAL_INT(!!isalnum('9' + 1), ft_isalnum('9' + 1));
}

void	test_isascii(void)
{
	TEST_ASSERT_EQUAL_INT(!!isascii(0), ft_isascii(0));
	TEST_ASSERT_EQUAL_INT(!!isascii(-1), ft_isascii(-1));
	TEST_ASSERT_EQUAL_INT(!!isascii(127), ft_isascii(127));
	TEST_ASSERT_EQUAL_INT(!!isascii(128), ft_isascii(128));
}

void	test_isprint(void)
{
	TEST_ASSERT_EQUAL_INT(!!isprint(32), ft_isprint(32));
	TEST_ASSERT_EQUAL_INT(!!isprint(31), ft_isprint(31));
	TEST_ASSERT_EQUAL_INT(!!isprint(126), ft_isprint(126));
	TEST_ASSERT_EQUAL_INT(!!isprint(127), ft_isprint(127));
}

void	test_strlen(void)
{
	TEST_ASSERT_EQUAL_INT(ft_strlen(""), strlen(""));
	TEST_ASSERT_EQUAL_INT(ft_strlen("Salut"), strlen("Salut"));
	TEST_ASSERT_EQUAL_INT(ft_strlen("\0\0\0\0"), strlen("\0\0\0\0"));
	TEST_ASSERT_EQUAL_INT(ft_strlen("42"), strlen("42"));
}

void	test_memset(void)
{
	char	tab[100];
	char	tabmem[100];

	memset(tab, 0, 100);
	memset(tabmem, 0, 100);
	ft_memset(tab, 'A', 42);
	memset(tabmem, 'A', 42);
	TEST_ASSERT_EQUAL_MEMORY(tabmem, tab, 100);
	ft_memset(tab, 'B', 1);
	memset(tabmem, 'B', 1);
	TEST_ASSERT_EQUAL_MEMORY(tabmem, tab, 100);
}

void	test_bzero(void)
{
	char	tab[100];
	char	tabmem[100];

	memset(tab, 'a', 100);
	memset(tabmem, 'a', 100);
	ft_bzero(tab, 100);
	bzero(tabmem, 100);
	TEST_ASSERT_EQUAL_MEMORY(tabmem, tab, 100);
}

void	test_memcpy(void)
{
	char	tab[100];
	char	tabmem[100];
	char	tabcpy[200];

	memset(tab, 'a', 100);
	memset(tabcpy, 'b', 200);
	memset(tabmem, 'a', 100);
	ft_memcpy(tab, tabcpy, 42);
	memcpy(tabmem, tabcpy, 42);
	TEST_ASSERT_EQUAL_MEMORY(tabmem, tab, 100);
}

void	test_memove(void){}
void	test_strlcpy(void){}
void	test_strlcat(void){}

void	test_toupper(void)
{
	TEST_ASSERT_EQUAL_INT(toupper('a'), ft_toupper('a'));
	TEST_ASSERT_EQUAL_INT(toupper('A'), ft_toupper('A'));
	TEST_ASSERT_EQUAL_INT(toupper('1'), ft_toupper('1'));
	TEST_ASSERT_EQUAL_INT(toupper('\0'), ft_toupper('\0'));
}

void	test_tolower(void)
{
	TEST_ASSERT_EQUAL_INT(tolower('a'), ft_tolower('a'));
	TEST_ASSERT_EQUAL_INT(tolower('A'), ft_tolower('A'));
	TEST_ASSERT_EQUAL_INT(tolower('1'), ft_tolower('1'));
	TEST_ASSERT_EQUAL_INT(tolower('\0'), ft_tolower('\0'));
}

void	test_strchr(void)
{
	TEST_ASSERT_EQUAL_STRING(strchr("Salut ca va ?", 'a'), ft_strchr("Salut ca va ?", 'a'));
	TEST_ASSERT_EQUAL_STRING(strchr("Salut ca va ?", 'b'), ft_strchr("Salut ca va ?", 'b'));
	TEST_ASSERT_EQUAL_STRING(strchr("", 'a'), ft_strchr("", 'a'));
	TEST_ASSERT_EQUAL_STRING(strchr("Salut ca va ?", '\0'), ft_strchr("Salut ca va ?", '\0'));
}

void	test_strrchr(void)
{
	TEST_ASSERT_EQUAL_STRING(strrchr("Salut ca va ?", 'a'), ft_strrchr("Salut ca va ?", 'a'));
	TEST_ASSERT_EQUAL_STRING(strrchr("Salut ca va ?", 'b'), ft_strrchr("Salut ca va ?", 'b'));
	TEST_ASSERT_EQUAL_STRING(strrchr("", 'a'), ft_strrchr("", 'a'));
	TEST_ASSERT_EQUAL_STRING(strrchr("Salut ca va ?", '\0'), ft_strrchr("Salut ca va ?", '\0'));
}

void	test_strncmp(void)
{
	TEST_ASSERT_EQUAL_INT(strncmp("Salutt", "Salut", 5), ft_strncmp("Salut", "Salut", 5));
	TEST_ASSERT_EQUAL_INT(strncmp("Salutt", "Salut", 6), ft_strncmp("Salutt", "Salut", 6));
	TEST_ASSERT_EQUAL_INT(strncmp("Salut", "salut", 1), ft_strncmp("Salut", "salut", 1));
	TEST_ASSERT_EQUAL_INT(strncmp("a", "", 0), ft_strncmp("a", "", 0));
	TEST_ASSERT_EQUAL_INT(strncmp("a", "", 1), ft_strncmp("a", "", 1));
	TEST_ASSERT_EQUAL_INT(strncmp("", "a", 0), ft_strncmp("", "a", 0));
	TEST_ASSERT_EQUAL_INT(strncmp("", "a", 1), ft_strncmp("", "a", 1));
	TEST_ASSERT_EQUAL_INT(strncmp("", "", 0), ft_strncmp("", "", 0));
	TEST_ASSERT_EQUAL_INT(strncmp("", "", 1), ft_strncmp("", "", 1));
}

void	test_memchr(void)
{
	char	tab[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	TEST_ASSERT_EQUAL_MEMORY(memchr(tab, 'a', 0), ft_memchr(tab, 'a', 0), 6);
	TEST_ASSERT_EQUAL_MEMORY(memchr(tab, 'a', 1), ft_memchr(tab, 'a', 1), 6);
	TEST_ASSERT_EQUAL_MEMORY(memchr(tab, 'b', 6), ft_memchr(tab, 'b', 6), 6);
	TEST_ASSERT_EQUAL_MEMORY(memchr(tab, 'c', 2), ft_memchr(tab, 'c', 2), 6);
	TEST_ASSERT_EQUAL_MEMORY(memchr(tab, 'g', 6), ft_memchr(tab, 'g', 6), 6);
}

void	test_memcmp(void)
{
	char s[] = {-128, 0, 127, 0};
	char sCpy[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};

	TEST_ASSERT_EQUAL_INT(memcmp(s, sCpy, 4), ft_memcmp(s, sCpy, 4));
	TEST_ASSERT_EQUAL_INT(memcmp(s, s2, 0), ft_memcmp(s, s2, 0));
	TEST_ASSERT_EQUAL_INT(memcmp(s, s2, 1), ft_memcmp(s, s2, 1));
	TEST_ASSERT_EQUAL_INT(memcmp(s2, s, 1), ft_memcmp(s2, s, 1));
	TEST_ASSERT_EQUAL_INT(memcmp(s2, s3, 4), ft_memcmp(s2, s3, 4));
}

void setUp (void) {}

void tearDown (void) {}

int	main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_isalpha);
	RUN_TEST(test_isdigit);
	RUN_TEST(test_isalnum);
	RUN_TEST(test_isascii);
	RUN_TEST(test_isprint);
	RUN_TEST(test_strlen);
	RUN_TEST(test_memset);
	RUN_TEST(test_bzero);
	RUN_TEST(test_memcpy);
	RUN_TEST(test_toupper);
	RUN_TEST(test_tolower);
	RUN_TEST(test_strchr);
	RUN_TEST(test_strrchr);
	RUN_TEST(test_strncmp);
	RUN_TEST(test_memchr);
	RUN_TEST(test_memcmp);
	return (UNITY_END());

}
