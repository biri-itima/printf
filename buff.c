#include "main.h"

/**
 * _print_buffer - a function using a local buffer of 1024 chars
 *
 * @data: Data to the file
 * 
 */

#define BUFFER_SIZE 1024

void _print_buffer(const char *data)
{
	size_t data_len = strlen(data);
	char buffer[BUFFER_SIZE];
	size_t bytes_processed = 0;

	while (bytes_processed < data_len)
	{
		size_t bytes_to_process = data_len - bytes_processed;
		if (bytes_to_process > BUFFER_SIZE)
		{
			bytes_to_process = BUFFER_SIZE;
		}

		strncpy(buffer, data + bytes_processed, bytes_to_process);

		printf("%.*s", (int)bytes_to_process, buffer);

		bytes_processed += bytes_to_process;
	}
}
