#include "main.h"
/**
 * append_text_to_file - name
 * @filename: filename
 * @text_content: NULL terminated string to add at the end of the file
 *
 * appends text at the end of a file
 * Return: -1 or 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
		{

		}
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
