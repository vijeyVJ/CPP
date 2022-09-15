/* Given a sorted array of n integers and a target value, determine if the target exists
in the array using the divide and conquer method. If target exists in the array, 
print the index of it. (Use binary search algorithm)*/

#include <iostream.h>
#include<conio.h>

int binarySearch(int arr[], int length, int r, int x)
{
	if (r >= length) {
		int mid = length + (r - length) / 2;

		// If the element is present at the middle itself
		if (arr[mid] == x)
			return mid;

		// If element is smaller than mid, then
		// it can only be present in left subarray
		if (arr[mid] > x)
			return binarySearch(arr, length, mid - 1, x);

		// Else the element can only be present in right subarray
		return binarySearch(arr, mid + 1, r, x);
	}

	// We reach here when element is not
	// present in array
	return 0;
}

void main()
{
	clrscr();
	int size,x;
	cout<<"Enter the size of the array:";
	cin>>size;
	cout<<"Enter the values : ";
	int *arr = new int(size);//creating dynamic array
	for(int i=0;i<size;i++)
		cin>>arr[i];//getting the values of array from user
	cout<<"What value's Index you want to find?: ";
	cin>>x;
	int result = binarySearch(arr, 0, size - 1, x);
	(result == 0)? cout << "Element is not present in array" : cout << "Element is present at index " << result;
	getch();
}
