#include <stdio.h>

int main (){
  int n ;
  printf("enter the number of terms:");
  scanf("%d",&n);
  int sum = 0;

  
  for(int i = 1; i <= n; i++)
    sum += i*i*i;

  printf("Sum is: %i\n", sum);
  return 0;
}
