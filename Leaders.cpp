/* Given an array A of positive integers find the leaders in the order of appearance in the array. 

Note: An element of the array is a leader if it is greater than or equal to all the elements to its right side. But, the rightmost element is always a leader. 

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)

a. Input: A[] = {16,17,4,3,5,2}
Output: 17 5 2 */
#include<iostream.h>
#include<conio.h>

/* C++ Function to print leaders in an array */

void printLeaders(int arr[], int size)
{
	cout<<"The leaders are :";
	for (int i = 0; i < size; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if (arr[i] <=arr[j])
				break;
		}
		if (j == size) // the loop didn't break
			cout << arr[i] << " ";
	}
}

/* Driver program to test above function */
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
	printLeaders(arr,size);
	getch();
}
