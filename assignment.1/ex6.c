#include <stdio.h>
 int main() {
	 int A, B, C;
	 int max, min;
         float avg;

	 printf("Enter three integers (A, B, C): ");
	 scanf("%d %d %d", &A, &B, &C);

	 max = min = A;

	 for (int i = 2; i <= 3; i++) {

		 int num;
		 scanf("%d", &num);

		 if (num > max) {
			 max = num;
		 }
		 else if (num < min) {
			 min = num;
		 }
	 }

	        avg = (float)(A + B + C) / 3;

		printf("Maximum: %d/n", max);
		printf("Minimum: %d/n", min);
		printf("Average: %.2f/n", avg);
		return 0;
 }

