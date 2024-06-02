#include<stdio.h>
int main()
{
	union a
		{
			int i;
			char ch[2];
		};
	union a u;
	int j,k;
	for(j=0; j<4; j++)
	for(k=0; k<5; k++)
	{
	u.ch[0]=j;
	u.ch[1]=k;
	printf("%d, %d, %d\n",u.ch[0],u.ch[1],u.i);
	}
	return 0;
}
