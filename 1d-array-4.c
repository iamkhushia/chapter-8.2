#include<stdio.h>

main()
{
	//	 Write a Program to perform the merge operation of two 1D arrays & store it in another array. Keep in mind that both array sizes can be different.
	
	int n,i,n1,n2,k=0,merge[n];
	int a[n1],b[n2];

	printf("size of A array element=");
	scanf("%d",&n1);
	
	
	printf("enter A array element=\n");
	
	for(i=0; i<n1; i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
		merge[i]=a[i];
	}
	k=i;
	
	printf("size of B array element=");
	scanf("%d",&n2);
	
	printf("enter B array element=\n");
	
	for(i=0; i<n2; i++)
	{
		printf("b[%d]",i);
		scanf("%d",&b[i]);
		merge[k]=b[i];
		k++;
	}
	
	printf("another array after merge=\n");
	for(i=0; i<k; i++)
	{
		printf("%d\t",merge[i]);
	}
}