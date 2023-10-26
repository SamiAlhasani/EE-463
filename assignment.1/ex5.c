#include <stdio.h>

 int main (int argc, char *argv[]) {
	 if (argc != 2) { 
		 printf("Usage: %S <hours>\n", argv[0]); 
                  return 1;
	 }
		  int hours;
		  if (scanf(argv[1], "%d", &hours) != 1) {

			printf("Invalid input. Please enter a valid number of hours.\n");
                         return 1;
		  }

		  long long seconds = (long long)hours * 3600LL;

		  printf("%d hours is equal to %11d seconds.\n", hours, seconds);
		  return 0;
	 }



