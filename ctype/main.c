#include <unistd.h>
#include "ft_ctype.h"

static void	print_result(int result)
{
	char c;
	c = result + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
}
int	main(void)
{
	print_result(ft_isalnum('A'));
	print_result(ft_isalpha('A'));
	print_result(ft_isblank('\t'));
	print_result(ft_iscntrl('\n'));
	print_result(ft_isdigit('5'));
	print_result(ft_isgraph('!'));
	print_result(ft_islower('a'));
	print_result(ft_isprint(' '));
	print_result(ft_ispunct('%'));
	print_result(ft_isspace('\n'));
	print_result(ft_isupper('A'));
	print_result(ft_isxdigit('D'));
	int i;
	char j;
	i = ft_toupper('a');
	j = i;
	write(1, &j, 1);
	write(1, "\n", 1);
	int a;
	char b;
	a = ft_tolower('B');
	b = a;
	write(1, &b, 1);
	write(1, "\n", 1);

	return (0);
}
