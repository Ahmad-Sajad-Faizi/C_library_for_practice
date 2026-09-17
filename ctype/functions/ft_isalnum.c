/*
 * CONTRACT:	ft_isalnum
 * Input:	int c - ASCII value or EOF representing a single character.
 * Output:	int   - Non-zero value(typically 1 or non-zero true) if c
 * 			is an alphanumeric character ('0' - '9', 'a' - 'z',
 * 			'A' - 'Z');
 * 			0 if c is any other character or out of range.
 * Edges:	Handles negative inputs (like EOF) and values outside the 
 * 		standard ASCII range (e.g., < 0 or > 127) by returning 0.
 */

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z' ) || (c >= 'A' && c <= 'Z'));
}
