#include<stdio.h>
main()
{
	// Write a Program to find square of each element from the given array.
	
	int n,n1,n2,i;
	int a[n1],b[n2];
	
	printf("size of array element=");
	scanf("%d",&n);
	
	printf("enter array value=\n");
	for(i=0; i<n; i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}

	
	printf("the squre are=\n");
	for(i=0; i<n; i++)
	{
		b[i] = a[i] * a[i];
		printf("%d\t",b[i]);
	}
}