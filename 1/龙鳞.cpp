#include<stdio.h>
int main ()
{
	int a,b,k;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		int a1[9]={0},b1[9]={0},sum[9]={0},i=0,sum_1=0,flag=0;
		for(i=0;i<=9;i++)
	{
		a1[i]=a%10;
		a=a/10;
		b1[i]=b%10;
		b=b/10;
	}
	for(i=0;i<=9;i++) 
	{
		sum[i]=a1[i]+b1[i];
		sum[i]=sum[i]%10;
	}
/*	for(i=0;i<=9;i++)
	{	for(k=1;k<=i;k++)
	{
		sum[i]=sum[i]*10;
	}
		sum_1+=sum[i];
	}*/
	
	for(i=9;i>=0;i--)
	{
		if(a1[0]==0)
		{
			printf("0\n");
			break;
		}
		if(flag==0&&sum[i]==0)
		continue;
		if(sum[i]!=0)
			flag=1;
		printf("%d",sum[i]);
	}
	printf("\n");
	}
	return 0;
}
