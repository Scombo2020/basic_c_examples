/* variable */
#include <stdio.h>
int main() {
	example1();
	example2();
	example3();
	example4();
	return 0;
}
/* integer notations */
int example1() {
	int a;
	a = 127;
	//each component for % in order, following a format of the letter after %.
	//o, x, d = integer
	printf("a : %o in %d \n", a, 8); //o = 8, octal notation
	printf("a : %d in %d \n", a, 10);//d = 10, decimal notation
	printf("a : %x in %d \n\n", a, 16);//x = 16, hexadecmial motation
	return 0;
 }

/* double and float */
int example2() {
	float a = 3.141592f; //put f to make it clear that it is float, not double.
	double b = 3.141592;
	printf("a : %f \n", a); //f = float. always use it with decimal point
	printf("b : %f \n\n", b);
}

/* float usage*/
int example3() {
	float a = 3.141592f;
	double b = 3.141592;
	int c = 123;
	printf("a : %.2f \n", a); //show 2 digits after a decimal point. it cannoto be ignored.
	printf("c : %5d \n", c); //use 5 spaces to show the number. if the number is bigger, it can be ignored.
	printf("b : %6.3f \n\n", b); //use 6 spaces including 3 digits after a decimal point.
}

int example4() {
	int a, A; //these are different.

	//int 1hi; number cannot be placed first.
	int h1123, h1231, h123412341234;

	//int 하이하이 variable name should consist of only english, number, and _.
	//int space bar; variable name cannot include white space.
	int space_bar; 

	return 0;
}

