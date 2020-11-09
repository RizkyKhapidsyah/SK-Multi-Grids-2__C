#include <stdio.h>
#include <conio.h>

int main()
{
	char names[4][7] = {
		"Mickey",
		"Minnie",
		"Goofy",
		"Pluto"
	};

	int x;

	for (x = 0; x < 4; x++) {
		printf("%s\n", names[x]);
	}

	_getch();
	return(0);
}