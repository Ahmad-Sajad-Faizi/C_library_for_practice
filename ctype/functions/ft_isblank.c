/*
 * CONTRACT:	ft_isblank
 * Input:	int c - ASCII value or EOF representing a single character.
 * Output:	int   - Returns 1 if c is a blank character
 * 			("\t" or ' ');
 * 			returns 0 otherwise.
 * Edges:	Handles negative inputs, EOF, and values outside the ASCII
 * 		range by returning 0.
 */

int	ft_isblank(int c)
{
	return (c == '\t' || c == ' ');
}
