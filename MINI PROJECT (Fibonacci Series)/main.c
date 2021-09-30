#include<stdio.h>

int nums[20000][4200],k=1;

void fibonacci(int n) 
{
		while(k<n)        
		{
			int carry=0;
			for(int j=4199;j>=0;j--)
			{
				int val=nums[k][j]+nums[k-1][j]+carry;
				carry=val/10;		
				val = val%10;
				nums[k+1][j]=val;
			}
			k++;
		}
		int i=0;
		while(nums[n][i]==0 && i<4200)
			i++;
		for(;i<4200;i++)
		{
			printf("%d",nums[n][i]);
		}
		printf("\n");
}
 

int main() 
{
	nums[1][4199]=1;
	int n;
	scanf("%d",&n);
	fibonacci(n);
	
}
