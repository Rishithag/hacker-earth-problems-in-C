#include<stdio.h>
int main()
{
	int n,i,k,originalInteger,remainder,reversedInteger;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&k);
		while(1)
		{
			originalInteger = k;

    while( k!=0 )
    {
        remainder = k%10;
        reversedInteger = reversedInteger*10 + remainder;
        k /= 10;
    }

    if (originalInteger == reversedInteger){	
    printf("%d",originalInteger);
    break; }
    k++;
		}
	}
}
