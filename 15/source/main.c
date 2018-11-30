#include<stdio.h>
#include<stdlib.h>
#define size 10
void bubble(int *, int);
main(){
	int a[size] = { 2, 4, 6, 8, 10, 12, 89, 68, 45, 37 };
	printf("Data items in original order\n");
	for (int i = 0; i < size; i++){
		printf("%4d", a[i]);
	}
	bubble(a, size);
	printf("\nData items in ascending oeder\n");
	for (int i = 0; i < size; i++){
		printf("%4d", a[i]);
	}
	printf("\n");
	system("pause");
}
void bubble(int *array, int s){
	void swap(int *elemint1, int *element2);
	int pass;
	for (pass = 0; pass < s - 1; pass++){
		for (int j = 0; j < s - 1; j++){
			if (array[j] > array[j + 1]){
				swap(&array[j], &array[j + 1]);
			}
		}
	}
}
void swap(int *element1, int *element2){
	int hold = *element1;
	*element1 = *element2;
	*element2 = hold;
}