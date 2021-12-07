#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[], char *envp[])
{
	printf ("Sou o processo filho\n") ;
	exit(0) ; // encerra este processo
 }