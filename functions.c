#include<stdio.h>

/* Forward Declarations */

void say_hello();
int add_ten(int);
void add_twenty(int *);
int add_array(int[], int);

int main() {

	int a = 5; 
	int b = 0; 
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
	char charArray[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
	char * charPointer;

	charPointer =  &charArray[0];

	printf("charArray[0] = %c", *charPointer);

	say_hello();

	printf("int a = %d, int b = %d \n", a, b);
	printf("addten(a) = %d, add_ten(b) = %d \n", add_ten(a), add_ten(b));
	printf("a = %d, b = %d \n", a, b);
	
	printf("\nadd_twenty(&b)\n");
	add_twenty(&b);

	printf("a = %d, b = %d \n\n\n", a, b);

	printf("add_array(arr, 8) = %d\n\n", add_array(arr, 8));
	
	printf("Printing charArray using the defined charArray above\n");

	int i;
	for(i = 0; i < sizeof(charArray); i++) {
		printf("%c\t", charArray[i]);
	}
	printf("\n\n");

	printf("Printing charArray using the pointer variable charPointer\n");

	int ii;
	for(ii = 0; ii < sizeof(charArray); ii++) {
		printf("%c\t", *charPointer);
		charPointer++;
	}

	printf("\n\n");

	return 0;
}

void say_hello() {
	printf("\nHello!\n\n");
}

int add_ten(int x) {
	return x + 10;
}

void add_twenty(int *x) {
	*x = *x + 20;
}

int add_array(int a[], int len) {
	int sum = 0;
	int ii;

	for(ii = 0; ii < len; ii++) {
		sum += a[ii];
	}

	return sum;
}

	
