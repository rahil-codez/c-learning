#include<stdio.h>
int main(){
	int x = 10;
	long int y = 20;
	long long int z = 30;
	short int a = 40;
	printf("INT = %d\n",(int)sizeof (x));
	printf("LONG =%d\n",(int)sizeof (y));
	printf("LONG LONG =%d\n",(int)sizeof (z));
	printf("SHORT =%d\n",(int)sizeof (a));
return 0;
}
