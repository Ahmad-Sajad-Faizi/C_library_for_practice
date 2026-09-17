/*
 * CONTRACT:	ft_toupper
 * Input:	int c - ASCII value or EOF representing a single character.
 * Output:	int   - Returns the uppercase equivalent if c is an lowercase
 * 			letter ('a' - 'z'); otherwise returns c unchanged.
 * Edges:	Handles uppercase letters, digits, punctuation, EOF, and
 * 		other values by returning them unchanged.
 */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return(c - ('a' - 'A'));
	else
		return(c);
}

#include <unistd.h>
int	main(void)
{
	int i;
	char j;
	i = ft_toupper('x');
	j = i;
	write(1, &j, 1);
	write(1, "\n", 1);
	return (0);
}
