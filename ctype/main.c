#define _DEFAULT_SOURCE_
#include <stdio.h>
#include <ctype.h>
#include "ft_ctype.h"

int test_all(void)
{
    int errors = 0;

    for (int i = -1; i <= 255; i++)
    {
        if (!ft_isalpha(i) != !isalpha(i)) { printf("[FAIL] ft_isalpha(%d)\n", i); errors++; }
        if (!ft_isdigit(i) != !isdigit(i)) { printf("[FAIL] ft_isdigit(%d)\n", i); errors++; }
        if (!ft_isalnum(i) != !isalnum(i)) { printf("[FAIL] ft_isalnum(%d)\n", i); errors++; }
        if (!ft_isspace(i) != !isspace(i)) { printf("[FAIL] ft_isspace(%d)\n", i); errors++; }
        if (!ft_ispunct(i) != !ispunct(i)) { printf("[FAIL] ft_ispunct(%d)\n", i); errors++; }
        if (!ft_isprint(i) != !isprint(i)) { printf("[FAIL] ft_isprint(%d)\n", i); errors++; }
        if (!ft_isgraph(i) != !isgraph(i)) { printf("[FAIL] ft_isgraph(%d)\n", i); errors++; }
        if (!ft_iscntrl(i) != !iscntrl(i)) { printf("[FAIL] ft_iscntrl(%d)\n", i); errors++; }
        if (!ft_isupper(i) != !isupper(i)) { printf("[FAIL] ft_isupper(%d)\n", i); errors++; }
        if (!ft_islower(i) != !islower(i)) { printf("[FAIL] ft_islower(%d)\n", i); errors++; }
        if (!ft_isxdigit(i) != !isxdigit(i)) { printf("[FAIL] ft_isxdigit(%d)\n", i); errors++; }
        if (ft_tolower(i) != tolower(i))   { printf("[FAIL] ft_tolower(%d)\n", i); errors++; }
        if (ft_toupper(i) != toupper(i))   { printf("[FAIL] ft_toupper(%d)\n", i); errors++; }
	if (!ft_isascii(i) != !isascii(i)) { printf("[FAIL] ft_isascii(%d)\n", i); errors++; }
	if (!ft_isblank(i) != !isblank(i)) { printf("[FAIL] ft_isblank(%d)\n", i); errors++; }
    }

    if (errors == 0)
        printf("All tests passed (257/257 inputs matched system ctype.h)\n");
    else
        printf("Total Errors: %d\n", errors);

    return (errors == 0 ? 0 : 1);
}

int main(void)
{
    return test_all();
}
