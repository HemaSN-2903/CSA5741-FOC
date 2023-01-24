#include <stdio.h>

int main() {
	int i,n;
	printf("enter the no of terms :");
	scanf("%d",&n);
	printf("The first %d even numbers are :\n",n);
	for (i = 1; i <= n; i++) 
	{
		if(i%2 == 0) 
		{
		  printf("%d ", i);
		}
	}
	return 0;
}
