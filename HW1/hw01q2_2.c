/* This C Program demonstrates the switch statement without using breaks. */
#include <stdio.h>
int main() {
        char ch;
        int a = 10, b = 20;
        double f;
        int i;
        for(i = 0; i < 5; ++i) {
                printf("Enter math operation: ");
                scanf("%c", &ch);
                printf("ch = %c\n", ch);
                switch (ch) {
                        case '+': f = a + b; printf("f = %f\n", f);
                                break;
                        case '-': f = a - b; printf("f = %f\n", f);
                                break;
                        case '*': f = a * b; printf("f = %f\n", f);
                                break;
                        case '/': f = (double)  a / b; printf("f = %f\n", f);
                                break;
                        default: printf("invalid operator\n");
                                break;
                        }
		getchar();
        }
}
