/*  Given an array arr[] of n non-negative integers representing the height of blocks. If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)

1. Input: arr[] = {3,0,0,2,0,4}
Output: 10
Explanation: 
Bars : 3,0,0,2,0,4; so, Trapped water: 0+3+3+1+3=10 */

#include<iostream.h>
#include<conio.h>
int stack[100],top;
void push(int x){
top = top+1;
stack[top]=x;
}
void pop(){
top--;
}

int min(int x,int y){
 return (x<y)?x:y;
}
int maxwater(int height[],int n)
{
 int ans=0;
 for (int i = 0; i<n;i++)
 {

 while((stack!=0)&&(height[stack[top]]<height[i]))
	{
		int pop_height = height[stack[top]];
		pop();
		if(top<0)
			break;
		int distance = i - stack[top] -1;
		int min_height = min(height[stack[top]],height[i]) - pop_height;
		ans += distance * min_height;

	}
	push(i);
 }
 return ans;
}
void main(){
	clrscr();
	int n;
	int arr[50];
	cout<<"enter the array limit within 50:";
	cin>>n;
	cout<<"enter the elemens:";
	for(int i=0;i<n;i++)
	{
	cin>>arr[i];
	}
	cout <<"Maximum water trapped is : "<<maxwater(arr,n)<<" Blocks";
	getch();
}
