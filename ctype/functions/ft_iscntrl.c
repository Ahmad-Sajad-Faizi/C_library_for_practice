/*
 * CONTRACT:	ft_iscntrl
 * Input:	int c - ASCII value or representing a single character.
 * Output:	int   - Returns 1 if c is non-printable character
 * 			(0 - 31 or 127);
 * 			return 0 otherwise.
 * Edges:	Handles negative inputs, EOF, and values outside the 
 * 		ASCII range by returning 0.
 */
int	ft_iscntrl(int c)
{
	return ((c >= '\0' && c <= '\x1F') || c == '\x7F');
}
