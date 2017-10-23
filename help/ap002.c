#include<stdio.h>
int main()
{
	int a,b,c;
	int *p_point;
	a=b=c=5;
	void swap(int*);
	printf("[a] = %d\n",a);
	swap(&b);
	printf("[b] = %d\n",b);
	printf("[point] = %d\n",(int)sizeof(p_point));
}
void swap(int *val)
{
	*val = 9;
	printf("swap is calling");
}
