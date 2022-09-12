#include<iostream.h>
#include<conio.h>
int stack[100],top=-1,ans;
void push(int x){
top = top+1;
stack[top]=x;
}
void pop(){
top--;
}
void palindrome(int *arr,int max){
	for(int i=0;i<max;i++)
		push(arr[i]);//pushing values of array into the stack
	for(i=0;i<max;i++)//Looping to check the both the array and stack
	{
	if(stack[top]==arr[i])
		ans=1;
	else
		ans=0;
	pop();
	}

	if(ans==1)
		cout<<"the Given array is Palindrome";
	else
		cout<<"The Given array is not Palindrome";
}

void main()
{
clrscr();
int max;
cout<<"enter the range of the array:"; //getting the range of the array
cin>>max;
int *arr= new int(max);//creating dyanmic array
cout<<"enter the values: ";
for(int i=0;i<max;i++)//initalizing the values into array
	cin>>arr[i];
palindrome(arr,max);
getch();
}
