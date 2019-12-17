#include <stdio.h>
#include <stdlib.h>

/*Getting the path environment variable*/

void main(void)
{
	char * envVarName;
	char * path;
	envVarName = "PWD";
	path = getenv(envVarName);
	printf("Path is %s\n",path);
}
