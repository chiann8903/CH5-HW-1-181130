#include<stdio.h>
#include<stdlib.h>
void cubeByReference(int &nPtr);
main(){
	int number = 5;
	printf("the original value of number is %d", number);
	cubeByReference(number);
	printf("\nthe new value of number is %d\n", number);
	system("pause");
}
void cubeByReference(int &nPtr){
	nPtr = nPtr*nPtr*nPtr;
}