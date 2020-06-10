//abcde  edcba
#include<stdio.h>
#include<string.h>
int main() {
	char str[50];
	printf("Enter a string\n");
	scanf("%s",str);
//	printf("%s", str);
    int ptr2 = strlen(str)-1;
    int ptr1 = 0;
    while(ptr1 < ptr2) {
    	char tmp = str[ptr1];
    	str[ptr1] = str[ptr2];
    	str[ptr2] = tmp;
    	
    	++ptr1;
    	--ptr2;
	}
	printf("Your result:%s", str);
}
