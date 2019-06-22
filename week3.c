#include<stdio.h>
int main()
{
	int t,n,i,k,j,arr[100],c,d,count=1,r,cou[1000];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%d",&k);
			arr[j]=k;
		}
		cou[i]=0;
		for(c=0;c<n;c++)
		{
			count=1;			
			for(d=c+1;d<n;d++)
			{ 				         
				if(arr[c]==arr[d])             
				{                       
					            
					count=count+1;               					
				}                   
				if(cou[i]<count)
				{
					cou[i]=count;
				}			
	}}}           
		for(r=0;r<t;r++)         
		{   
			printf("%d\n",cou[r]);             
		}          
}          
