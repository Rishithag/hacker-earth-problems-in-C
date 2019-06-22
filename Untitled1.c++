#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int n,a,b,i,a[n];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		a[i]=a+b;		
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
	return 0;
}
