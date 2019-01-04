#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int num;
	int i;
	int result1 = 0;
	int result2 = 0;
	scanf("%d", &num);
	int tempNum = num;
	for (i = 0; i < 2; i++) {
		int temp1 = tempNum / 4;
		int temp2 = tempNum % 4;
		result1 = result1 + temp1;
		result2 = result2 + temp2;
		tempNum = temp1;
	}
	result1 = result1 + num;
	printf("%d", result1);
	printf(" ");
	printf("%d", result2);
	return 0;
}