#include<stdio.h>
	int main(){
	printf("inside main\n");
        goto ab;
	printf("middle of main\n");
	ab:
	printf("end of main\n");
	return 0;
}
