/*Problem 4:  Swap two Strings Without Using any Third Variable
Input: a = "Hello", b = "World".
Output: Strings after swap: a = World and b = Hello
*/


#include <stdio.h>
#include <string.h>

int main(){

    char str1[100];
    char str2[100];

    printf("\nEnter First Str : ");
    gets(str1);
    printf("\nEnter Second Str : ");
    gets(str2);

    printf("\nStrings Before swap: str1 = %s & str2 = %s\n", str1, str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

     for(int i = 0; i < len1 || i < len2; i++) {
        str1[i] = str1[i] ^ str2[i];
        str2[i] = str1[i] ^ str2[i];
        str1[i] = str1[i] ^ str2[i];
    }

    printf("\nStrings after swap: str1 = %s & str2 = %s\n", str1, str2);

    return 0;
}