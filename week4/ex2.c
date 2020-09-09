// After "pstree" command the processes' tree is shown.For 3 cycles 8 processes are created
// For 5 - 32 processes. This is because process with n fork()s, executes processes with n-1
// fork()s. And so far.



#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
int i;
sleep(15);
for (i = 0; i < 5; i++) {
  fork();
}
sleep(25);
	return 0;
}

