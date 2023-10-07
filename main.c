#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer=32 ;
	int num ;
	int trial=0 ;
	
	do
	{
		printf("Guess a number: ");
		scanf("%d", &num);
		
		
		if (num<32)
		    printf("Low \n");
		else if(num>32)
		    printf("High \n");
		   
	    trial=trial+1;
	}
	
	while(num<32 || num>32);
	
	printf("Congratulations! \n");
	 
    return 0;
}



