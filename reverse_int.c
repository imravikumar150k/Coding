//123 321
#include<stdio.h>
int main() {
	printf("Enter a number:\n");
	int num;
	scanf("%d", &num);
	int result = 0;
	while(num > 0) {
		int last_el = num % 10;
		result = result * 10 + last_el;
		num /= 10;
	}
	printf("Result:%d", result);
}
