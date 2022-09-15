/* Given an array A of positive integers find the leaders in the order of appearance in the array. 

Note: An element of the array is a leader if it is greater than or equal to all the elements to its right side. But, the rightmost element is always a leader. 

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)

a. Input: A[] = {16,17,4,3,5,2}
Output: 17 5 2 */
#include<iostream.h>
#include<conio.h>
//create an array called stack for push and pop operations
int stack[100];
int top,x;
void push (int x)
{
	top = top+1;
	stack[top]=x;
}
void pop(){
	top--;
}
void Leader(int arr[],int size){  //function to find the leaders in the array
	push(arr[size-1]);  //push the value of last element into stack top

	for(int i=size-2; i>=0; i--)
	{
		if(arr[i]>stack[top]){
		push(arr[i]); //push the new value if the value of array is greater than value on stack top
		}
	}
	while(stack[top]!=0){
	cout<<" "<<stack[top];
	pop();
	}
}
void main()
{
	clrscr();
	int size;
	cout<<"Enter the size of the array:";
	cin>>size;
	cout<<"Enter the values : ";
	int *arr = new int(size);//creating dynamic array
	for(int i=0;i<size;i++)
		cin>>arr[i];//getting the values of array from user
	Leader(arr,size);
	getch();
}
