#include<stdio.h>
	int main(){
	int option;
	printf("enter a number\n");
	scanf("%d",&option);
	switch(option){
			printf("hello\n");
		case 1+5:
			printf("case %d\n",option);
			break;
		case 'A'&1:
			printf("case %c\n",option);
			break;
		case 'a'+7:
			printf("case %c\n",option);
			break;
		default:
			printf("default case\n");
			break;
		}
		return 0;
}
