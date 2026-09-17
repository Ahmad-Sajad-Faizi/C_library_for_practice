/*
 * CONTRACT:	ft_isdigit
 * Input:	int c - ASCII value or EOF representing a single character.
 * Output:	int   - Return 1 if c is a digit character (0-9);
 * 			return 0 otherwise.
 * Edges:	Handles negative inputs, EOF, and values outside the ASCII
 * 		range by returning 0.
 */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return(1);
	else
		return(0);
}

#include <unistd.h>
int	main(void)
{
	int i;
	int j;
	i = ft_isdigit('a');
	j = i + '0';
	write(1, &j, 1);
	write(1, "\n", 1);
	return(0);

}
