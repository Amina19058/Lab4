// fork() creates a new process by duplicating the calling process.
// Several cores execute processes simultaneously.
// The child process has its own unique PID, which is equal to 0.
// The parent's PID changes after executing this program once more.


#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
int n=10;

pid_t p = fork();
if (p>0)
printf("Hello from parent [ %d - %d]\n", p, n);
else
printf("Hello from child [ %d - %d]\n", p, n);
return 0;
}
