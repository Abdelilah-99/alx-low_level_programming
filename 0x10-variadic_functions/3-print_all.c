#include "variadic_functions.h"
/**
 * print_all - function that print every thing
 * @format: 0-3
 *
*/
void print_all(const char * const format, ...)
{
	va_list ls;
	unsigned int i;
	int check;
	char *str;

	va_start(ls, format);

	i = 0;
	check = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ls, int));
			check = 0;
			break;
		case 'i':
			printf("%d", va_arg(ls, int));
			check = 0;
			break;
		case 'f':
			printf("%f", va_arg(ls, double));
			check = 0;
			break;
		case 's':
			str = va_arg(ls, char *);
			if (str == NULL)
				printf("(nil)");
			printf("%s", str);
			check = 0;
			break;
		default:
			check = 1;
			break;
		}
		if (format[i + 1] != '\0' && check == 0)
			printf(", ");
		i++;
	}
	printf("\n");
}
int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}
