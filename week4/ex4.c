#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
	char input[1000];
	while(1){
		fgets(input,1000,stdin);
		char *params[1000];		
		int i=0;
		for(i=0;i<1000;i++){
			params[i]=NULL;
		}
		i=0;
		int j = 0, k = 0;
		params[0]=(char*)malloc(1000);	
		while(1){
			if(input[i]!='\n' && input[i]!=' ' && input[i]!='\0'){
				params[j][k] = input[i];
				i++,k++;
			}
			else if(input[i] == ' '){
				i++,k=0,j++;
				params[j]=(char*)malloc(1000);
			}
			else{
				break;
			}
		}
		int p_id = fork();
		if(p_id == 0){
			execvp(params[0],params);
		}
	}
	return 0;
}

