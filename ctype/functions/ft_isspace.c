/*
 * CONTRACT:	ft_isspace
 * Input:	int c - ASCII value or EOF representing a single character.
 * Output:	int   - Return 1 if c is a white-space
 * 			('\t' - '\r' or ' ');
 * 			return 0 otherwise.
 * Edges:	Handles negative inputs, EOF, and values outside the ASCII
 * 		range by returning 0.
 */

int	ft_isspace(int c)
{
	return ((c >= '\t' && c <= '\r') || (c == ' '));
}
