#include <unistd.h>
#include <string.h>
/*
 * This return the output as error
 * Return 1 as success
 */
int main(void)
{
/*
 *Main -> It creates a message  variable and then save it as  error
 */
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, msg, strlen(msg));
	return (1);
}
