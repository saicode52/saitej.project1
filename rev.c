#include<stdio.h>
int rev();
int main()
{
	int a,b;
	int sum=0,sumr=0;
	int reva,revb;
	scanf("%d",&a);
	scanf("%d",&b);
	reva=rev(a);
	revb=rev(b);
	sum=reva+revb;
	sumr=rev(sum);
	printf("%d",sumr);
	return 0;
}

int rev(int p)
{
	int i,revr=0,r;
	while(p!=0)
	{
		r=p%10;
		revr=revr*10+r;
		p=p/10;
	}
	return revr;
}

