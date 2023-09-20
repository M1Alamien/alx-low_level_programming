#include "main.h"

char *string_toupper(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++, *s++)
	{
		if (*s > 96 && *s < 123)
		{
			*s = *s - 32;
		}
	}
	return (s);
}
