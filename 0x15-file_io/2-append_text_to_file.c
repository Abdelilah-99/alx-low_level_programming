#include "main.h"
/**
 * _strlen - cal the len
 * @str: string
 * Return: i
*/
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
/**
 * append_text_to_file - add a text to a file that hold a text
 * but with no removing or editing the text
 * @filename: larg 1
 * @text_content: larg 2
 * Return: -1 or 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int *fp;
	ssize_t j;

	if (!filename)
		return (-1);
	fp = open(filename, O_RDONLY | O_APPEND);
	if (fp == -1)
		return (-1);
	if (text_content != NULL)
		j = write(fp, text_content, _strlen(text_content));
	fclose(fp);
	if (j == -1)
		return (-1);
	return (1);
}
