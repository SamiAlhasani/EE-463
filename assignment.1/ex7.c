#include <stdio.h>

 struct Student {
	 char name[50];
	 int grade;
 };

  int main() {
	   
	  struct Student students[10];


	  for (int i = 0; i < 10; i++) { 

		  printf("Enter the name of student %d: ", i + 1);
		  scanf("%s", students[i].name);
		  printf("Enter the grade for %s: ", students[i].name);
		  scanf("%d", &students[i].grade);
	  }

	  printf("\nStudent Grades:\n");
	  for (int i = 0; i < 10; i++) {

		  printf("Name: %s, Grade: %d\n", students[i].name, students[i].grade);
	  }
	
  }
