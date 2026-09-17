/*
 * CONTRACT:	ft_iscntrl
 * Input:	int c - ASCII value or representing a single charater.
 * Output:	int   - Returns 1 if c is non-printable character
 * 			(0 - 31 or 127);
 * 			return 0 otherwise.
 * Edges:	Handles negative inputs, EOF, and values outside the 
 * 		ASCII range by returning 0.
 */
int	ft_iscntrl(int c)
{
	if ((c >= '\0' && c <= '\x1F') || c == '\x7F')
		return(1);
	else
		return(0);
}

#include <unistd.h>
int	main(void)
{
	int i;
	char j;

	i = ft_iscntrl('\b');
	j = i + '0';
	write(1, &j, 1);
	write(1, "\n", 1);
	return(0);
}
