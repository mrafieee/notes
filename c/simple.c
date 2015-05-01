#include <stdio.h>
#include <string.h>

main(){
	char answer[3];
	printf("What is the gnu compiler called? ");
	fgets(answer,4,stdin);
	if(strcmp(answer,"gcc") == 0){
		printf("Correct\n");
	}else{
		printf("Sorry , the answer is gcc\n");
	}
}
