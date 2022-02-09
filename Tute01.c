/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float marks,sum = 0,avg;
  int i;

 // INPUTS
  for (i=0;i<2;i++){
    printf("Marks of subject %d : ",i+1);
    scanf("%f",&marks);

    //VALIDATION
    if (marks<0 || marks>100){
      printf("Marks you entered was wrong, Please try again\n");
      i--;
      continue;
    }

    sum = sum + marks;
  }

  //CALCULATION
  avg =sum/2;

  // OUTPUT
  printf("Average marks is %.2f",avg);
  
  return 0;
}

