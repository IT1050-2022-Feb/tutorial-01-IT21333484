/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

//IMPLEMENTING FUNCS
int minimum(int x, int y);
int maximum(int a, int b);
int multiply (int m, int n);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

//MIN
int minimum(int x, int y){
  if (x<y){
    return x;
  }
  else {
    return y;
  }
}

//MAX
int maximum(int a, int b){
  if (a>b){
    return a;
  }
  else {
    return b;
  }
}

//MULTIPLY
int multiply (int m, int n){
  return m*n;
}
