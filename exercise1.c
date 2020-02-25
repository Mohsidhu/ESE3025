/*
 * exercise1.cpp
 *
 *  Created on: Jan. 23, 2020
 *      Author: mohpreet
 */

# include<stdlib.h>
# include<stdio.h>

int fAdd(int*pa,int*pb)
{
	int sum =0;
	int a;
	int b;
	pa=&a;
	pb=&b;
	sum=a+b;

	return sum;
}
int main()
{
	int a=3;
    int b=2;
printf("sum is %d\n",fAdd(&a,&b));

return 0;
}




