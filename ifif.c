#include<stdio.h>
	int main(){
	int x=10, y=20, z=30;

	if(x>y) if(y>z) if(z>x){
		printf("all condtions are true\n");
	}else{
		printf("third condition is false\n");
	}else{
		printf("second condition is false\n");
	}else{
		printf("first condition is false\n");
	}
	return 0;
}
