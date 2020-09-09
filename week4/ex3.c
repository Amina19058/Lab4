#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
char str[1000];
	while(1){
		scanf("%1000s",str);
		system(str);
	}
	return 0;
}

