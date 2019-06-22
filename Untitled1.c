#include<stdio.h>

int main()
{
	int t,n,i,k,j,arr[100],c,d,count=1,cou[100],r;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%d",&k);
			arr[j]=k;
		}
		for(c=0;c<n;c++)
		{
			for(d=c+1;d<n;d++)
			{
				if(arr[c]==arr[d])
				{
					count=count+1;
					for(r=0;r<t;r++)
					{
						cou[r]=count;
					}
				}
			}
		}
		
		
	}
	for(i=0;i<t;i++)
	{
		printf("%d",&cou[i]);
	}
	
}
