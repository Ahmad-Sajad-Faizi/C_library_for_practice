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
	return (c >= '!' && c <= '~');
}
