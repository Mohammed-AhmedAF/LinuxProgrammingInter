/**
 * An example of using signal.
 *
 */

#include <signal.h>
#include <stdio.h>
#include <unistd.h>


struct sigaction signalAction;
void signalHandler(int);

void signalHandler(int signalNumber)
{
	printf("This is the signal handler. Signal is %d\n", signalNumber);

	signal(SIGINT,SIG_DFL);
}

int main(void)
{
	signalAction.sa_handler=signalHandler;

	//signal(SIGINT,signalHandler);
	sigaction(SIGINT,&signalAction,NULL);
	while(1)
	{
		printf("Hello World!\n");
		sleep(1);
	}
}
