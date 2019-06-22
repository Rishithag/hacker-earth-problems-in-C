
/*COUNT.CPP*/

#include<stdio.h>
int main()
{
	int x,y,i=0,j=0,count=0;
	printf("Enter numbers : ");
	scanf("%d%d",&x,&y);
	for(i=x;i<=y;i++)
	{
		if(i%x==0)
		{
			count=count+1;
		}
	}
	printf("\ncount is : %d",count);
	getch();
	return 0;
}
