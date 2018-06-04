#include <unistd.h>

int main(void)
{
	write(1, "Hello vchaus!\n", 14);
	write(1, "That's it!\n", 11);
	return (0);
}

