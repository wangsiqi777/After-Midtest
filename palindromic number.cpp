# include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int m=n;
	int sum=0;
	while(m)
	{
		sum=sum*10+m%10;
		m/=10;
	}
	if(sum==n){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	return 0;
}
 
