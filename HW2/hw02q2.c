#include <stdio.h>
#pragma warning(disable : 4996) // needed in VS

// CSE 240 Spring 2020 Homework 2 Question 2
// Mitchell Bader, Prof Balasooriya
// Tu/Th 4:30-5:45PM

#define addm(a,b) a+b
#define squared_subm(a,b) a*a - b*b
#define absm(a) ((a<0) ? (-a) : a)
#define evenm(a) (((a%2)==0) ? 1 : 0)

// main function
int main()
{
	int a, b;
	a = -5, b = 2;
	printf("addf(a,b,) = %d", addf(a, b));
	printf("\naddm(a, b) = %d", addm(a, b));
	printf("\naddf(++a, b--) = %d", addf(++a, b--));
	a = -5, b = 2;
	printf("\naddm(++a, b--) = %d", addm(++a, b--));

	a = -5; b = 2;
	printf("\nsquared_subf(a, b) = %d", squared_subf(a, b));
	printf("\nsquared_subm(a, b) = %d", squared_subm(a, b));
	printf("\nsquared_subf(a++, --b) = %d", squared_subf(a++, --b));
	a = -5; b = 2;
	printf("\nsquared_subm(a++, --b) = %d", squared_subm(a++, --b));

	a = -5; b = 2;
	printf("\nabsf(a) = %d", absf(a));
	printf("\nabsm(a) = %d", absm(a));
	printf("\nabsf(++a) = %d",absf(++a));
	a = -5; b = 2;
	printf("\nabsm(++a) = %d", absm(++a));

	a = -5; b = 2;
	printf("\nevenf(b) = %d", evenf(b));
	printf("\nevenm(b) = %d", evenm(b));
	printf("\nevenf(b++) = %d", evenf(b++));
	a = -5; b = 2;
	printf("\nevenm(b++) = %d", evenm(b++));

	return 0;
}
int addf(int a, int b) {
	return a + b;
}
int squared_subf(int a, int b) {
	return a * a - b * b;
}
int absf(int a) {
	if (a < 0) {
		return -a;
	}
	else {
		return a;
	}
}
int evenf(int a) {
	if (a % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}