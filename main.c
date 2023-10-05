#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	printf("input integer: ");
	
	scanf("%d", & a);
	
	if (a>0)
	   printf("Positive \n");
    else if (a<0)
	   printf("Negative \n");
	else
	   printf("Zero \n");
	   
	   	 
	return 0;
}
