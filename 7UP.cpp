#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int max;
	cout<<"How much seats are there in the stadium?:";
	cin>>max;
	if(max>607)
	{
		int *arr = new int(max);//creating dynamic array

		for(int i=1;i<=max;i++)//storing the seat numbers into the array
			arr[i]=i;
		cout<<"Seat numbers which gets 7-UP T-shirt are : "<<endl;
		int count=0;
		for(i=201;i<=max-400;i++){
			cout<<arr[i]<<endl;//prints the seat numbers from 200 to max-400,
			}
		}
		getch();
	}
	else{
	cout<<"\nERROR!!! \nTotal number of seats should be greater than 607!";
	getch();
	}
}
