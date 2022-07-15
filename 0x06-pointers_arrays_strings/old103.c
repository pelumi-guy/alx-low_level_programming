/**
 * infinite_add -  a function that adds two numbers.
 * Description:
 * @n1:
 * @n2:
 * @r:
 * @size_r:
 * Return: return string r
 */

include "main.h"

int stringToNum(char *str)
{
	int i, num = 0;
	
	for (i = 0; str[i]; i++)
	{
		num *= 10;
		num += num + (str[i] - '0');
	}

	return (num);
}


char *numToString(int num)
{
	char *buf;

	if (num / 10)
		numToString(num / 10);


}


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num1, num2, sum;
	char res[size_r];

	num1 = stringToNum(n1);
	num2 = stringToNum(n2);
	
	sum = num1 + num2;



	return (0);
}
