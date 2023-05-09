#include "main.h"
/**
 * append_text_to_file - add a text to a file that hold a text
 * but with no removing or editing the text
 * @filename: larg 1
 * @text_content: larg 2
 * Return: -1 or 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;
	unsigned int i = 0;

	if (!filename)
		return (-1);
	fp = fopen(filename, "a");
	for (; text_content[i]; i++)
		;
	if (text_content == NULL)
		return (0);
	if (fwrite(text_content, sizeof(char), i, fp) != i)
	{
		fclose(fp);
		return (-1);
	}
	fclose(fp);
	return (1);
}
