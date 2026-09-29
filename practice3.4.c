#include<stdio.h>
	int main(){
	char cha ;
	printf("enter the character\n");
	scanf("%c",&cha);
	//printf("the character is %c\n",cha);
	printf("the value of character is %d\n",cha);

	if(cha>=97 && cha<=122){
		printf("this character is lowercase\n");
	}else{
		printf("this charcter is not lowercase\n");
	}
	return 0;
}
	
