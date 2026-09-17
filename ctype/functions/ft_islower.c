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
	return (c >= 'a' && c <= 'z');
}
