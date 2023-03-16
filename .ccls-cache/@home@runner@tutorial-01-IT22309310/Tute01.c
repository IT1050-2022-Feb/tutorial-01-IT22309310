/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {

  float mark_1, mark_2;
  float average = 0;

  printf("Enter marks of subject 1 : ");
  scanf("%f", &mark_1);

  printf("Enter marks of subject 2 : ");
  scanf("%f", &mark_2);

  average = (mark_1 + mark_2) / 2;

  printf("Average = %f\n", average);

  return 0;
}
