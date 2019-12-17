#include <stdio.h>
#include <stdlib.h>

void main(void)
	{
	char * envVarName;
	char * path;
	envVarName = "PWD";
	path = getenv(envVarName);
	printf("Path is %s\n",path);

	}
