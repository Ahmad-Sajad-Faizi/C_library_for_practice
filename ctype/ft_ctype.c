#include "ft_ctype.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
int	ft_isblank(int c)
{
	return (c == ' ' || c == '\t');
}
int	ft_iscntrl(int c)
{
	return ((c >= 0 && c <= 31) || c == 127);
}
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
int	ft_isgraph(int c)
{
	return (c >= '!' && c <= '~');
}
int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
int	ft_ispunct(int c)
{
	return ((c >= '!' && c <= '/') || (c >= ':' && c <= '@') || (c >= '[' && c <= '`') || (c >= '{' && c <= '~'));
}
int	ft_isspace(int c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ');
}
int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
int	ft_isxdigit(int c)
{
	return ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F'));
}
int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + ('a' - 'A'));
	return (c);
}
int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - ('a' - 'A'));
	return (c);
}
