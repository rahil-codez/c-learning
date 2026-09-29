#include<stdio.h>
	int main(){
	char data;
	printf("enter character: ");
	scanf("%c",&data);

	switch(data){
		case 'A':
			printf("you entered 2\n");
			break;
		case 'B':
			printf("you entered 3\n");
			break;

		case 'C':
			printf("you entered 4\n");
			break;
		case 'D':
			printf("you entered 1\n");
			break;
		default:
			printf("nothing matched");
	}
	return 0;
}
