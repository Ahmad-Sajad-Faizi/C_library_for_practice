/*
 * CONTRACT:	ft_tolower
 * Input:	int c - ASCII value or EOF representing a single character.
 * Output:	int   - Returns the lowercase equivalent if c is an uppercase
 * 			letter ('A' - 'Z'), otherwise returns c unchanged.
 * Edges:	Handles lowercase letters, digits, punctuation, EOF, and
 * 		other values by returning them unchange.
 */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	else
		return (c);
}
