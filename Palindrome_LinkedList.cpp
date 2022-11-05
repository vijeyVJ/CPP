#include<iostream.h>
#include<conio.h>
struct Node{
int data;
Node *link;
};
Node *top=NULL;
void push(int val){
	Node *ptr = new Node();
	ptr->data = val;
	ptr->link = top;
	top = ptr;
}

void pop(){
		Node *ptr = top;
		top = top->link;
		delete(ptr);
}
void main() 
{
   clrscr();
   int max,ans,arr[10];
   cout<<"\t\t PALINDROME \n";
   cout<<"Enter the range of the array within 10 : ";
   cin>>max;
   cout<<"Enter the values : ";
   for(int i=0;i<max;i++)
   {
	  cin>>arr[i];
	  push(arr[i]);
   }
   for(i=0;i<max;i++)
	{
	  if((top->data)==arr[i])
		  ans=1;
	  else
		  ans=0;
	  pop();
	}
   if(ans==1)
	  cout<<"The Given Array IsPalindrome!";
   else
	  cout<<"The Given array is Not a Palindrome!";
   getch();
}//void main ends here
