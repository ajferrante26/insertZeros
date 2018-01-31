#include <stdio.h>

void insert0(int n, int a1[], int a2[]);

int main()
{
	int n;

	printf("Enter the length of the first array: ");
	scanf("%d",&n);

	int a1[n];

	printf("Enter the elements of the first array: ");

	int i;
	for (i=0; i<n; i++)
		scanf("%d",&a1[i]);

	int a2[2*n];

	insert0(n,a1,a2);

	return 0;
}

void insert0(int n, int a1[], int a2[])
{
	int tmp = 0;

	int i;
	for (i=0; i<n; i++)
	{
		a2[tmp] = a1[i];
		tmp++;
		a2[tmp] = 0;
		tmp++;
	}

	printf("\n\nThe output array is: ");
	for (i=0; i<2*n; i++)
		printf("%d ",a2[i]);

	printf("\n");
}
