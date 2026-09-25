#include<stdio.h>
int main(){
	int a = 8;
	int b = 9;
	int temp;
	printf("value of a is %d and b is  %d before swapping\n",a,b);
	temp = a;
	a = b;
	b = temp;
	printf("value of a is  %d and b is %d after swapping\n",a,b);
return 0;
}
