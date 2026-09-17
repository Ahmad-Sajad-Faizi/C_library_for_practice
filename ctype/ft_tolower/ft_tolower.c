/*
 * CONTRACT:	ft_tolower
 * Input:	int c - ASCII value or EOF representing a single character.
 * Output:	int   - Returns the lowercase equivalent if c is an uppercase
 * 			letter ('A' - 'Z'), otherwise returns c unchanged.
 * Edges:	Handles lowercase letters, digits, punctuation, EOF, and
 * 		other values by returning them unchange.
 */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	else
		return (c);
}
#include <unistd.h>
int	main(void)
{
	int i;
	char j;
	i = ft_tolower('A');
	j = i;
	write(1, &j, 1);
	write(1, "\n", 1);
	return (0);
}
