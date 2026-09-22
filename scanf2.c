#include<stdio.h>
	int main(){
	char name[20];
	printf("enter the name: ");
	scanf("%[^\n]s",name);
	printf("hello! %s\n",name);
return 0;
}
