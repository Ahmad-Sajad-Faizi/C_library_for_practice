/*
 * CONTRACT:	ft_isupper
 * Input:	int c - ASCII value or EOF representing a single character.
 * Output:	int   - Returns 1 if c is a upper alphabetic character
 * 			('A' - 'Z');
 * 			returns 0 otherwise.
 * Edges:	Handles negative inputs, EOF, and values outside the ASCII
 * 		range by returning 0;
 */

int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
