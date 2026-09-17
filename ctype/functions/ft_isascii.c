/*
 * CONTRACT:	ft_isascii
 * Input:	int c - ASCII value or EOF representing a single character.
 * Output:	int   - Returns 1 if c a ASCII character (0 - 127);
 * 			returns 0 otherwise.
 * Edges:	Handles negative inputs, EOF, and values outside the ASCII
 * 		range by returning 0.
 */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
