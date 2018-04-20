#include<stdio.h>
#include<conio.h>
#include<windows.h>
void sort(int a[3][4]);
void cal(int a[3][4]);
int main()
{
	int i,j,q=1;
	float t=0,w=0;
	int a[3][4]={{2,2132,0,0},{4,2102,0,0},{8,2453,0,0}};
	while (q=1)
	{
		sort(a);
		cal(a);
		if (a[0][0]==0)
		{
			break;
		}
	}
	
	printf("\t    Process id\tTAT\tWaiting Time\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			Sleep(1000);
			printf("\t%d",a[i][j]);
			
		}
		Sleep(1000);
		printf("\n");
	}
	for (i=0;i<3;i++)
	{
		w=w+a[i][3];
	}
	for (i=0;i<3;i++)
	{
		t=t+a[i][2];
	}
	printf("\n AVERAGE WAITING TIME %f",w/3);
	printf("\n AVERAGE TURN AROUND TIME %f",t/3);
}
void sort(int a[3][4])
{
	int i,j,temp,k;
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			if (a[i][0]>a[j][0])
			{
				for(k=0;k<3;k++) {
                                temp=a[i][k];
                                a[i][k]=a[j][k];
                                a[j][k]=temp;
                                }
			}
		}
	}
}
void cal(int a[3][4])
{
	int i;
	if (a[0][0]!=a[1][0]&&a[0][0]!=a[2][0])
	{
		a[0][0]--;
		for (i=0;i<3;i++)
		{
			if (a[i][0]!=0)
			{
				a[i][2]++;
				if (i!=0)
				{
					a[i][3]++;
				}
			}
		}
	}
	else if (a[0][0]==a[1][0]&&a[0][0]!=a[2][0])
	{
		if (a[0][1]<a[1][1])
		{
			a[0][0]--;
		for (i=0;i<3;i++)
		{
			if (a[i][0]!=0)
			{
				a[i][2]++;
				if (i!=0)
				{
					a[i][3]++;
				}
			}
		}
		}
		else 
		{
			a[1][0]--;
		for (i=0;i<3;i++)
		{
			if (a[i][0]!=0)
			{
				a[i][2]++;
				if (i!=1)
				{
					a[i][3]++;
				}
			}
		}
		}
	}
	else if (a[0][0]==a[1][0]&&a[0][0]==a[2][0])
	{
		if (a[0][1]<a[1][1]&&a[0][1]<a[2][1])
		{
			a[0][0]--;
		for (i=0;i<3;i++)
		{
			if (a[i][0]!=0)
			{
				a[i][2]++;
				if (i!=0)
				{
					a[i][3]++;
				}
			}
		}
		}
		if (a[1][1]<a[0][1]&&a[1][1]<a[2][1])
		{
			a[1][0]--;
		for (i=0;i<3;i++)
		{
			if (a[i][0]!=0)
			{
				a[i][2]++;
				if (i!=1)
				{
					a[i][3]++;
				}
			}
		}
		}
		if (a[2][1]<a[1][1]&&a[2][1]<a[0][1])
		{
			a[2][0]--;
		for (i=0;i<3;i++)
		{
			if (a[i][0]!=0)
			{
				a[i][2]++;
				if (i!=2)
				{
					a[i][3]++;
				}
			}
		}
		}
	}
}
