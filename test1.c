#include<stdio.h>
void add(int a,int b);
int main()
{
	int a=10,b=20;
	add(a,b);
	printf("%d%d\n",a,b);
}
void add(int a,int b)
{
        //printf("%d%d\n",a,b);
	a=30;
	b=40;
        printf("%d%d\n",a,b);
}

