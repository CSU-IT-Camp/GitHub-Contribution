#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,max;
	int o[100]={0},oo[100]={0},ooo[100]={0};
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		int a1=a,b1=b,i=0,j=0,sum=0,k=0,t=0,flag=0;
		
		while(a1>0)
		{
			o[i++]=a1%10;
			a1/=10;
		}
		while(b1)
		{
			oo[j++]=b1%10;
			b1/=10;
			
		}
		max=i?j:i>j;
		while(1)
		{
		//	oooo[t++]=o[k++]+oo[k++];
			//printf("%d\n",oooo[t-1]);
			
			ooo[k]=(o[k]+oo[k])%10;
			k++;
		//	sum+=ooo[k-1]*10^(k-1);
			//if(o[k]==0&&oo[k]==0)
			if(k==max)
			break;
		}
		for(i=9;i>=0;i--)
	{
		if(i==0&&ooo[i]==0&&flag==0)
		{
			printf("0");
			break;
		}
		if(flag==0&&ooo[i]==0)
		continue;
		if(ooo[i]!=0)
			flag=1;
		printf("%d",ooo[i]);
	}
	printf("\n");
}
}