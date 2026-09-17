/*
 * CONTRACT:	ft_isxdigit
 * Input:	int c - ASCII value or EOF representing a single character.
 * Output:	int   - Returns 1 if c is an hexadecimal digit character
 * 			('0' - '9', 'A' - 'F' and 'a' - 'f');
 * 			returns 0 otherwise.
 * Edges:	Handles negative inputs, EOF, and values outside the ASCII
 * 		range by returning 0.
 */

int	ft_isxdigit(int c)
{
	return ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F'));
}
