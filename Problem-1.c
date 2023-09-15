/*Problem 1: Program to count occurrences of a given character in a string.

 Count character 'e' in the below string.
	Input "geeksforgeeks". 
	Output: 4

	Count character '3' in the below string.
	Input "abccdefgaa."
	Output : 3*/


/*NOTE : i thinks that second test case have some mistake ive done code according to me*/

#include <stdio.h>

int main() {
    char str[100];
    char target;
    int count = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter Target: ");
    scanf(" %c", &target); 

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    printf("Output : %d\n", count);

    return 0;
}

