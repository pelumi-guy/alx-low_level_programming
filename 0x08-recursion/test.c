/**
 * main - main block
 * Description:
 * Return: Always 0 (Success).
 */

#include <stdio.h>

int newton(int n, long double k, int e) {
  int ne = (e + (n / e)) / 2; 
  if ((ne - e) < k) { 
    return ne; 
  }  
  else { 
    return newton(n, k, ne); 
  } 
} 

int sqroot(int n)
{
	return (newton(n, 0.00000000001, (n / 2)));
}

int main()
{	
	int num, res;

	printf("Input a number below\n");
	scanf("%d", &num);
	res = sqroot(num);
	printf("----------------------\n");
	printf("Square-root of the number you entered is %d\n", res);
	return (0);
}
