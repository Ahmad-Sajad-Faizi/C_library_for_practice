/*
 * CONTRACT:	ft_isgraph
 * Input:	int c - ASCII value or EOF representing a single character.
 * Output:	int   - Returns 1 if c is a printable character ohter than
 * 			space character('!' - '~');
 * 			returns 0 otherwise.
 * Edges:	Handles negative inputs, EOF, and values outside the ASCII
 * 		range by returning 0.
 */ 

int	ft_isgraph(int c)
{
	if (c >= '!' && c <= '~')
		return(1);
	else
		return(0);
}
#include <unistd.h>
int	main(void)
{
	int i;
	char j;
	i = ft_isgraph(' ');
	j = i + '0';
	write(1, &j, 1);
	write(1, "\n", 1);
	return (0);
}
