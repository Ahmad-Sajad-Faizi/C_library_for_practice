/*
 * CONTRACT:	ft_toupper
 * Input:	int c - ASCII value or EOF representing a single character.
 * Output:	int   - Returns the uppercase equivalent if c is an lowercase
 * 			letter ('a' - 'z'); otherwise returns c unchanged.
 * Edges:	Handles uppercase letters, digits, punctuation, EOF, and
 * 		other values by returning them unchanged.
 */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return(c - ('a' - 'A'));
	else
		return(c);
}
