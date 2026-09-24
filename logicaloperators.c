#include<stdio.h>
	int main(){
	int x = 10, y = 20, z = 30;
	int result =(++x>++y) || (++y>++z);
	printf("result =%d\n",result);
	printf("x=%d\t y=%d\t z=%d\n", x,y,z);
	//int result =(++x>++y) && (++y>++z);
	//printf("result =%d\n",result);
	//printf("x=%d\t y=%d\t z=%d\n", x,y,z);
return 0;
}
