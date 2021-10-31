#include<stdio.h>
void main()
{
	int a,b,c;
	scanf("%d",&c);
		for(a=1;a<=c;a++)
		{
				for(b=1;b<=c;b++)
			{
				do
				{
				printf("%d X %d\n",a,b);
				}while(c=a*b);
			}
		}
}
