/*
 * CONTRACT:	ft_islower
 * Input:	int c - ASCII value or EOF representing a single character.
 * Output:	int   - Returns 1 if c is a small alphabetic character
 * 			('a' - 'z');
 * 			returns 0 otherwise.
 * Edges:	Handles negative inputs, EOF, and values outside the ASCII
 * 		range by returning 0.
 */

int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return(1);
	else
		return(0);
}

#include <unistd.h>
int	main(void)
{
	int i;
	char j;
	i = ft_islower('b');
	j = i + '0';
	write(1, &j, 1);
	write(1, "\n", 1);
	return (0);
}
