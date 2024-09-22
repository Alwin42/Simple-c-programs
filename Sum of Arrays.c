#include <stdio.h>

int main()
{
	int n,i;
	
	printf("Enter the size of characters : \n");
	scanf("%d",&n);
	char st[1];
	
	printf("Enter the characters : \n");
	scanf("%s",&st[n]);
    int l = 0;
    int h = strlen(st)-1;
    while (h > l) {
        if (str[l++] != str[h--]) {
            printf("%s is not a palindrome\n", st);
            return 0;
            // will return from here
        }
    }
 
    printf("%s is a palindrome\n", st);
 
    return 0;
}
}
	
	
	
