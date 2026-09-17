/*
 *  CONTRACT:	ft_isalpha
 *  Input:	int c - ASCII value or EOF representing a single character.
 *  Output:	int   - Return 1 if c is alphabetic character
 *  			('A' - 'Z' or 'a' - 'z');
 *  			return 0 otherwise.
 *  Edges:	Handles negative inputs, EOF, and values outside the ASCII
 *  		range by returning 0.
 */

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c<= 'z'));
}
