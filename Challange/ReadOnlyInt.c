//This Program is not Working yet ☹️☹️☹️☹️☹️☹️☹️☹️☹️.
#include<stdio.h>
int IntOnly()
{
	int n,ch;
	//system("clear");
	//ch=scanf("%d",&ch);
	do
	{
		//ch=scanf("%d",&ch);
		ch=getchar();
		if(ch>='0' && ch<='9')
		{
			printf("%c",ch);
			n=n*10+(ch-48);
			return n;
		}
		if(ch=='\n')
			break;
		else
		{
			return printf("\b");
		}
	}while(1);
}
int main()
{
	int a=0;
	printf("Enter a number : ");
	a=IntOnly();
	printf("Entered Number is %d \n",a);
	//return 0;
}

