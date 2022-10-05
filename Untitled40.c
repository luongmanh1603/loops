#include<stdio.h>

int main () {
	int n, i;
	scanf("%d", &n);
	int sum = 0;
	for ( i = 0; i <= n; i++) {
		if ( i % 2 == 1) {
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;
}
