#include<iostream.h>
#include<conio.h>
int stack[5000]; //create an array for stack operations
int top,x;
void push(int x){ //function for push
top = top+1;
stack[top]=x;
}
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
			count++;
			if(count==7){
			push(i); //pushes the value of array into the stack for every 7th array position
			cout<<stack[top]<<" ";
			count=0;
			}
		}
		getch();
	}
	else{
	cout<<"\nERROR!!! \nTotal number of seats should be greater than 607!";
	getch();
	}
}
