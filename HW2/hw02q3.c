#include <stdio.h>
#pragma warning(disable : 4996) // needed in VS

// CSE 240 Spring 2020 Homework 2 Question 3 (25 points)
// Note: You may notice some warnings when you compile in GCC or VS, that is okay.

#define cube(x) (x * x * x)

#define mulMacro(a, b) (a + b + a * a + b * b + a * a * a + b * b * b)

int mulFunc(int a, int b) {
	return (a + b + a * a + b * b + a * a * a + b * b * b);
}

// Part 1:
// We want to pass the value of 4 to cube and expect the result of cube to be 64, why is the result 8? Correct the error (5 points)
void part1(int x) {

	int result;
	--x;
	result = cube(x);

	printf("cube(4) = %d \n\n", result);

	// Why did this error occur? Please provide the answer in your own words below.
	printf("Explanation: This is a semantic error, as --x decreases x by one each time it is invoked in the code. For cube(--x), the macroprocessor reads this as result = --x * --x * --x. Since x = 5 at the start, these three --x calls decrease it to x = 2, and 2*2*2 = 8.  \n\n\n"); // (2.5 points)
}


// Part 2:
// We want to pass incremented values of x and y to the macro and function to compare their outputs in VS and GCC.
// Run this program in Visual Studio(VS) and then again in GCC. Fill the blanks below with the output values for polyFunc and polyMacro.
// Then correct/edit this function so that mulFun and mulMacro produce same correct output of 36.			// (5 points)
// 
void part2(int x, int y) {
	int x_copy = x, y_copy = y;
	--x;
	++y;
	--x_copy;
	++y_copy;
	printf(" mulFunc(x, y) = %d \n mulMacro(x, y) = %d \n\n", mulFunc(x, y), mulMacro(x_copy, y_copy));


	// Replace the 4 blank spaces below with the actual output observed when running the code in VS and GCC.
	// The blanks should have the answers of unedited program. Keep the answers in blanks as they were, after editing the program.
	printf("In VS : the result of mulFun = 98 and mulMacro = 398 \n"); 			// (5 points)
	printf("In GCC: the result of mulFun = 98 and mulMacro = 278 \n\n"); 		// (5 points)

	// Explain in a short sentence why VS and GCC could possibly produce a different value for the same program and for the same input.
	printf("Explanation: VS and GCC's compilers handle certain cases differently as there is no one defined standard for how C compilers should handle a case.\n\n"); //  (2.5 points)
}

// Do not edit main()  
int main()
{
	int x = 5, y = 1;

	printf("Part 1:\n\n");
	part1(x);
	printf("Part 2:\n\n");
	part2(x, y);

	while (1);	// needed to keep console open in VS
	return 0;
}
