//46)Find length of string (without strlen)
#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter a string :");
	fgets(str,100,stdin);
	int len =0;
	while(str[len])
		len++;
	printf("The lenght of the srting is : %d",len-1);
	return 0;
}