/*
 *  CONTRACT:	ft_isalpha
 *  Input:	int c - ASCII value or EOF representing a single character.
 *  Output:	int   - Return 1 if c is alphabetic character
 *  			('A' - 'Z' or 'a' - 'z');
 *  			return 0 otherwise.
 *  Edges:	Handles negative inputs, EOF, and values outside the ASCII
 *  		range by returning 0.
 */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c<= 'z'))
		return (1);
	else
		return(0);
}

#include <unistd.h>
int	main(void)
{
	int i;
	char c;
	i = ft_isalpha('P');
	c = i + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}
