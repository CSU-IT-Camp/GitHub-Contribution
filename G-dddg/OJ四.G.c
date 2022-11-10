#include <stdio.h>
int main(void) {
	int n,x,i;
	while(scanf("%d",&n)!=EOF){
		for(x=6,i=0;i<n;x++){
		if(x%10==6||x%100/10==6||x/100%10==6||x%6==0) i++;
	}
	printf("%d\n",x-1);
	}
	return 0;
}
