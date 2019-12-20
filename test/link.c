#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[])
{
	if (strcmp(argv[0],"link"))
	{
		printf("Argv[0] is link\n");
	}
	else if (strcmp(argv[0],"another"))
	{
		printf("Argv[0] is another\n");
	}
	else {
		printf("Something else\n");
	}

	return 0;
}
