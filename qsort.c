/*
 * qsort.cpp
 *
 *  Created on: Jan. 30, 2020
 *      Author: mohpreet
 */


#include<stdio.h>
#include<stdlib.h>
int comparator(void *pa,void *pb)
{
	int a =*((int*)pa);
	int b =*((int*)pb);

	int ret=0;
	if((a) >(b))
		ret=1;
	else	if((a)<(b))
			ret=-1;
	return ret;

}
	void printArray(int arr[],int n)
	{
		int i;
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
	}
	int main()
	{
		int arr[]={-1,0,67,-89};
		int size=sizeof (arr)/sizeof(int);
		qsort(arr,size,sizeof arr[0],comparator);
		printf("outcomes\n");
		int printarr(arr,size);
		return 0;

	}
