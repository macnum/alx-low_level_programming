#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	char* value = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", strlen(value));
	return (1);
}
