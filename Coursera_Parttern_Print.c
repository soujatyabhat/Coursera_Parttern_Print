#include<stdio.h>
void main()
{
	int n,i,x,y;
	printf("Enter a non-negetive number : ");
	scanf("%d",&n);
	y = (3*n) + 1;
	x = (-n * n);
	for(i = 1;i<y;i++)
	{
		printf("%d ",x);
		x = (x + (2 * i) - 1);
	}
}
