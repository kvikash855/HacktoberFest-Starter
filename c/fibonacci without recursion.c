#include <stdio.h>

int a=0,b=1,i,c;
int fibo(int n)
{  
	printf("%d %d ",a,b);
	for (i=0;i<n-2;i++){
	    c = a+b;
	    a=b;
	    b=c;
	    printf("%d ",c);
    	}
}
	   
int main()
{
	int n;
	printf("enter range: ");
	scanf("%d",&n);
	fibo(n);
}
