#include<stdio.h>
	int main(){
	int marks =100;
	printf("enter the marks\n");
	scanf("%d",&marks);

	if(marks>=90){
		printf("A GRADE\n");
		}else if(marks>=80){
			printf("B GRADE\n");
		}else if(marks>=70){
			printf("C GRADE\n");
		}else if(marks>60){
			printf("D GRADE\n");
		}else if(marks>=50){
			printf("E GRADE\n");
		}else{
		      printf("FAIL\n");
	}

	return 0;
}
