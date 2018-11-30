#include<stdio.h>
#include<stdlib.h>
int cubeByValue(int n);
main(){
	int number = 5;
	printf("The original value of number is %d", number);
	number = cubeByValue(number);
	printf("\nThe new value of number is %d\n", number);
	system("pause");
}
int cubeByValue(int n){
	return n*n*n;
}