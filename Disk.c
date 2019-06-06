#include<stdio.h>
#include<math.h>
void rhs(int p[50],int seek,int n,int tt,int i);
void lhs(int p[50],int seek,int n,int tt,int i);

void fcfs(int p[50],int h,int n)
{
	int seek=0,i;
	p[0]=h;
	for(i=0;i<n;i++)
	{
		seek=seek+abs(p[i+1]-p[i]);
	}	 
	printf("\nTotal seek time=%d",seek);
}
void rhs(int p[50],int seek,int n,int tt,int i)
{
		while(p[i+1]>p[i] && i!=n)
		{
			{
				seek=seek+p[i+1]-p[i];
				i++;
			}
			if(i!=n)
			{
				seek=seek+tt-p[i];
				seek=seek+tt-p[i+1];
				lhs(p,seek,n,tt,i);
			}
		}
}
void lhs(int p[50],int seek,int n,int tt,int i)
{
		while(p[i]>p[i+1] && i!=n)
		{
			{
				seek=seek+p[i]-p[i+1];
				i++;
			}
			if(i!=n)
			{
				seek=seek+p[i];
				seek=seek+p[i+1];
				rhs(p,seek,n,tt,i);
			}
		}
}
void scan(int p[50],int h,int tt,int n)
{
	int seek=0,i=0,sc;
	p[0]=h;
	while(i<n)
	{
		if(p[i+1]>p[i])
		{
			rhs(p,seek,n,tt,i);
		}
		else
		{
			lhs(p,seek,n,tt,i);
		}
	}
	printf("Total seek time=%d",seek);
}
int main()
{
	int p[50],h,i,n,c,tt;
	printf("Enter the total no of tracks:");
	scanf("%d",&tt);
	printf("\nEnter the no of tracks in queue:");
	scanf("%d",&n);
	printf("\nEnter the queue:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&p[i]);	  
	}
	printf("\nEnter head:");
	scanf("%d",&h);
	printf("1)FCFS\n2)SCAN\n\nEnter choice:");
	scanf("%d",&c);
	if(c==1)
	{
		fcfs(p,h,n);
	}
	else if(c==2)
	{
		scan(p,h,tt,n);
	}
	else
	{
		printf("\nInvalid choice");
	}
	return 0;
}

