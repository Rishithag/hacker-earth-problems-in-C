#include<stdio.h>
#include<conio.h>
int main()
{
	int t,c,n,d;
	char arr[100];
	scanf("%d",&t);
	for(c=0;c<t+1;c++)
	{
		scanf("%d",&n);
		for(d=0;d<n;d++)
		{
			scanf("%c",&arr[d]);
		}
	}
	getch();
	return 0;
}

