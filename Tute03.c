/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>

int main() {
  int sum=0,j,i,n;

  //INPUT
  for (j=0;j<1;j++){
    printf("Enter a number : ");
    scanf("%d",&n);
    
    //VALIDATION
    if (n<0){
      printf("Entered a wrong value, please try again later\n");
      j--;
    }

  }

  //CALCULATION
  for (i=1;i<=n;i++){
    sum=sum+i;
  }

  //OUTPUT
  printf("Sum = %d",sum);
  
  return 0;
}

