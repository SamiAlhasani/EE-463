#include <stdio.h>

int main() { 
	char fullName[100];
	int age;
	char address[100];

	printf("Please enter your full name: ");
	scanf("%99[^\n]%*c", fullName);

	printf("Please enter your age: ");
	scanf("%d", &age);

	while (getchar() != '\n');

	printf("Please enter your address: ");
	scanf("%99[^\n]%*c", address);

	printf("\n\nPersonal Information\n");
	printf("Full Name: %s\n", fullName);
	printf("Age: %d\n", age);
	printf("Address: %s\n", address);

	return 0;
     }

