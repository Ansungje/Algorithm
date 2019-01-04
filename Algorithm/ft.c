#include <stdio.h>
#pragma warning(disable:4996)
int ft() {
	int n;
	scanf("%d", &n);	//6
	int i = 1;
	int j = n;
	int result1[10];
	int result2[10];
	int count = 0;
	int sum = 0;
	int multiply = 1;
	for (i; i < j; i++) {
		for (j; j > i; j--) {
			if (i * j == n) {
				result1[count] = i;	//1,2,x,x,x...
				result2[9 - count] = j;//x,x,..,3,6
				count++;
				j = j - 1;
				break;
			}
			else if (i * j < n) {
				break;
			}
		}
	}
	count = count * 2;
	int k = 0;
	int z = 0;
	for (k; k < 10; k < k++) {
		if (result1[k] > 0) {
			sum = sum + result1[k];
			multiply = multiply * result1[k];
			printf("%d ", result1[k]);
		}
		if (result2[k] > 0) {
			sum = sum + result2[k];
			multiply = multiply * result2[k];
			printf("%d ", result2[k]);
		}
	}
	printf("\n%d", count);
	printf("\n%d", sum);
	printf("\n%d", multiply % 10);
	return 0;
}