// Program to check if a given string is valid IPv4 address or not
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include<iostream.h>

int valid_digit(char *ip_str)// return 1 if string only contains digits, else return 0
{
	while(*ip_str)
	{
		if(*ip_str>='0' && *ip_str<='9')
			++ip_str;
		else
			return 0;
	}
	return 1;
}

/* return 1 if IP string is valid, else return 0 */
int validation(char *ip_str)
{
    int i, num,dots=0;
    char *ptr;

    ptr = strtok(ip_str, ".");

    while (ptr)
    {
	if(!valid_digit(ptr)) // function to check if the string has only digits
		return 0;
	num = atoi(ptr);// atoi is used to convert string to integer

	/* check for valid IP */
	if (num >= 0 && num <= 255) {
	    /* parse remaining string */
	    ptr = strtok(NULL,".");
		if(ptr!=NULL)
			++dots;
	} else
	    return 0;
    }
    if(dots != 3) //an IP adress must only contain 3 dots
	return 0;

    return 1;
}

// Driver program to test above functions
int main()
{
    clrscr();
    char ip[100];
    cout<<"enter the IP adress : ";
    cin>>ip;
    validation(ip) ? cout<<"valid IP":cout<<"Not valid ip";
    getch();
    return 0;
}
