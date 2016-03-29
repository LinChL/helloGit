#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <cstring>
#include<iostream>
#include <math.h>
#include<vector>
#include<stack>
using namespace std;

int main()
{
	char str1[103],str2[103];
	float a1,a2,b1,b2;
	int n,i,j,f1,f2,e1,e2,tmp;
	while(scanf("%d%f%f",&n,&a1,&a2)!=EOF)
	{
		str1[0]='\0';
		str2[0]='\0';
		if(a1>=0)
			f1=1;
		else
			f1=0;
		if(a2>=0)
			f2=1;
		else
			f2=0;
		a1=abs(a1);
		a2=abs(a2);
		e1=0;
		e2=0;
		while(a1>=1||a1<0.1)
		{
			if(a1>=1)
			{
				e1++;
				a1/=10;
			}
			else
			{
				e1--;
				a1*=10;
			}
		}
		while(a2>=1||a2<0.1)
		{
			if(a2>=1)
			{
				e2++;
				a2/=10;
			}
			else
			{
				e2--;
				a2*=10;
			}
		}
		b1=a1;
		b2=a2;
		for(i=0;i<n;i++)
		{
			b1*=10;
			b2*=10;
			tmp=int(b1);
			b1-=float(tmp);
			str1[i]=tmp+'0';
			tmp=int(b2);
			b2-=float(tmp);
			str2[i]=tmp+'0';
		}
		str1[n]='\0';
		str2[n]='\0';
		if(f1!=f1||e1!=e2||strcmp(str1,str2)!=0)
		{
			printf("NO ");
			if(f1==0)
				printf("-");
			printf("0.%s",&str1);
			if(e1!=0)
			{
				if(e1==1)
				{
					printf("*10");
				}
				else
				{
					printf("*10^%d",e1);
				}
			}
			printf(" ");
			if(f2==0)
				printf("-");
			printf("0.%s",&str2);
			if(e2!=0)
			{
				if(e2==1)
				{
					printf("*10");
				}
				else
				{
					printf("*10^%d",e2);
				}
			}
			printf("\n");
		}
		else
		{
			printf("YES ");
			if(f1==0)
				printf("-");
			printf("0.%s",&str1);
			if(e1!=0)
			{
				if(e1==1)
				{
					printf("*10");
				}
				else
				{
					printf("*10^%d",e1);
				}
			}
			printf("\n");
		}
	}
	return 0;
}