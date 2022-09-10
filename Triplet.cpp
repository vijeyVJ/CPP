#include<iostream.h>
#include<conio.h>
void Triplet(int arr[],int n)
{
	int answer = 0; //0 refers to false and 1 refers to True
	for(int i=0;i<n-2;i++)
	{
		for(int j=i+1;j<n-1;j++)
		{
		for(int k=j+1;k<n;k++)
		{
			if(arr[i]+arr[j]+arr[k]==0)
				answer = 1; //returns 1 if any triplet is found
		}
		}
	}
	cout<<"\n\n"<<answer<<endl;
}
void main()
{
clrscr();
int arr[]={0,1,2,-3,1};
int n = sizeof(arr)/sizeof(arr[0]);
Triplet(arr,n);
getch();
}
