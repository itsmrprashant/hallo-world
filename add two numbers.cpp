#include<stdio.h>
int add(int x,int y);
int sub(int x,int y);
int main()
{
	int a,b,c,d;
	
	printf("Enter two numbers : ");
	scanf("%d %d",&a,&b);
//  Function call here 
	c=add(a,b);   
	d = sub(a,b);
    printf("sum of two numbers is: %d\n",c);
    printf("subtraction of two numbers is: %d",d);
}
//Define Here 
int add( int x,int y)
{
    int add;
	add= x+y;
	
	return add;
	
		
}
int sub(int x,int y)
{
	int sub;
	sub = x-y;
	return sub;
}
