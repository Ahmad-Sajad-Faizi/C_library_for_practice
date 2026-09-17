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
	return (c >= '0' && c <= '9');
}
