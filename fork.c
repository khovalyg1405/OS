#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
int main() {
	pid_t procid, parentid, result;
	int a=0;
	result = fork();
	procid = getpid();
        parentid = getppid();
	a=a+1;
        printf ("Ид. текущего процесса:  %d\n", procid);
        printf ("Ид. родительского процесса: %d\n", parentid);
	printf ("Значение переменной а: %d\n", a);
        return 0;
}

