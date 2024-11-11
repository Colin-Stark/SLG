#include <stdio.h>


int main() {

	int z = 130;

	printf("The address of z is : %p\n\n", &z);


	//pointer  to address of z 
	int* ptr;

	// value stored * pointer vairable
	printf("THE VALE I AM POINTING TO IS:  %d \n\n", *ptr);


	// The address i am pointing to is pointer variable
	printf("The address i am pointing to is :  %p\n\n\n", ptr);
	

	return 0;
}
