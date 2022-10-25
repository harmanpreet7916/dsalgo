//Calculating factorial of given number in C language usingif Recurssion
#include<bits/stdc++.h>    // This is the main header
#include<stdio.h>
int fun(int n);
int main()
{
	int n,i,a,fact=1;
	printf("Enter a Number :\n);
	scanf("%d",&n);
	p=fun(n);
	printf("%d",p);
	return 0;
}

int fun(a){
	if(a>=1)
	{
		return(a*fun(a-1));
	}
	else{
		return 1;
	}
}
