#include<stdio.h>
#include<ctype.h>
int main(void)
{
	float i=0.0,sum=0.0;
	char ch;
	for(i=0;((ch=getchar())!=EOF);i++)
	{
		if(ispunct(ch)||(ch==' ')||ch=='\n')
		{
			sum++;
			i--;
		}

	}
	printf("dancishu: %.2f\nzimushu: %.2f\n",sum,i/sum);
	return 0;
}
