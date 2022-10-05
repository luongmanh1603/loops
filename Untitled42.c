#include<stdio.h>

int main() {
	int a, i;
	scanf("%d", &a);
	int factorial = 1;
	for (i= 1; i <= a; i++) {
		factorial = factorial * i;
	}
	printf("%d", factorial);
	return 0;
}
