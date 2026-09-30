#include<stdio.h>
	int main(){
	int a,b,c,d;
	printf("enter the four number\n");
	scanf("%d %d %d %d", &a,&b,&c,&d);
	
	if(a>=b && a>=c && a>=d){
		printf("%d is greator\n",a);
	}
	else if(b>=a && b>=c && b>=d){
		printf("%d is greator\n",b);
	}
	else if(c>=a && c>=b && c>=d){
		printf("%d is greator\n",c);
	}
	else{
		printf("%d is greator\n",d);
	}
	return 0;
}
	


