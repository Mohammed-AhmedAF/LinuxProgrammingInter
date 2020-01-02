/*
 * Executing a function when the stop signal (Ctrl+z) is issued
 *
 *
 */ 

#include <signal.h>
#include <unistd.h>
#include <stdio.h>

void execStopHandler(int sigNum);

int main(void)
{

	struct sigaction stop_sigact;

	stop_sigact.sa_handler=execStopHandler;

	sigaction(SIGTSTP,&stop_sigact,NULL);
	while(1)
	{
		printf("Hello World\n");
		sleep(1);
	}
}

void execStopHandler(int sigNum)
{
	printf("You have stopped the process");		

	signal(SIGTSTP,SIG_DFL);
}
