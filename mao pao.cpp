#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	int shuzu[n];
	int i,j,x,t,k;
	for(k=0;k<n;k++){
		scanf("%d",&shuzu[k]);
	}
	for(i=0;i<(n-1);i++){
		for(j=0;j<(n-1);j++){
			if(shuzu[j]>shuzu[j+1]){
				x=shuzu[j];
				shuzu[j]=shuzu[j+1];
				shuzu[j+1]=x;
			}
		}
		for(t=0;t<n;t++)
		printf("%d ",shuzu[t]);
		printf("\n");
	
	}
	return 0;
}


