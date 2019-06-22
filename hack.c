#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,ii,j,nn,a[1000],swap;
	scanf("%d",&n);
	for(ii=0;ii<n;ii++)
	{
		scanf("%d",&nn);
		for(j=0;j<nn;j++)
		{
			scanf("%d",&a[j]);
		}
	
	for (i = 0 ; i < nn-1; i++)
	{
    	for (j = 0 ; j < nn-i- 1; j++)
    	{
      		if (a[j] < a[j+1]) /* For decreasing order use < */
      		{
        		swap       = a[j];
        		a[j]   = a[j+1];
        		a[j+1] = swap;
      		}
    	}
  	}
for (i = 0; i < nn; i++)
     printf("%d", a[i]);
 }
}
