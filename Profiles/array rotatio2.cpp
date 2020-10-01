#include<iostream>

using namespace std;

int gcd(int a,int b)
{	if(b==0)
	{	return a;
	}
	else
	{	gcd(b,a%b);
	}
}

void rotate(int A[],int n,int d,int gcd)
{	int i,j,temp;
	if(gcd==1)
	{	for(j=0;j<d-1;j++)
		{
		temp=A[0];
		for(i=0;i<n-1;i++)
		{A[i]=A[i+1];}
		A[i]=temp;
		}
		
	}
	for(j=0;j<gcd;j++)

{		temp=A[j];
		for(i=j;i<n-gcd;i+=gcd)
		{	A[i]=A[i+gcd];
		}
		A[i]=temp;
}
}

int main()
{	int i,j,n,l,d;
	int A[30];
	cout<<"\n Enter the size of the aray\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\n Enter the elements of the array\n";
		cin>>A[i];
	}
	cout<<"\n enter the elements to be rotated";
	cin>>d;
	l=gcd(n,d);
	cout<<l;
	rotate(A,n,d,l);
	cout<<"the value of array\n";
	for(i=0;i<n;i++)
	cout<<"\n"<<A[i];
	return 0;
}
