#include<stdio.h>
#include<string.h>

int compare(char *str1,char *str2)
{
	while(str1 && (str1==str2))
	{
		str1++;
		str2++;
	}
	return *str1 - *str2;
}

int main()
{
	char str1[100],str2[100];
	printf("Enter string 1 :");
	fgets(str1,100,stdin);
	printf("Enter string 2 :");
	fgets(str2,100,stdin);
	
	if(compare(str1,str2) == 0)
		printf("The strings are equal.");
	else
		printf("The strings are not equal.");
	
	return 0;
}
