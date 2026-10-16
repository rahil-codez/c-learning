#include<stdio.h>
int a[5];
int b[5]={2,3,5,7,9};
int main(){
	int c[5];
	int d[5] = {7,5,8,2,4};
	int len = sizeof(d)/sizeof(d[0]);
	int i;
	for (i=0;i<len;i++){
		printf("%d\t",b[i]);
	}
		printf("\n");
		return 0;
	}
