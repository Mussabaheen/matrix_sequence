#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c;
	while(1)
	{
		for(int a=0;a<1000;a++)
		{
			for(int b=0;b<1000;b++)
			{
				c=rand()%100+33;
				if(b%2==0)
				{
					printf("%c",c);
				}
				else
				{
					printf(" ");
				}
			}
		}
	}	

}
