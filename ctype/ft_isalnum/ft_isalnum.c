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
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z' ) || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

#include <unistd.h>
int	main(void)
{
	int i;
	char result;

	i = ft_isalnum('1');
	result = i + '0';
	write(1, &result, 1);
	write(1, "\n", 1);
	return 0;
}

