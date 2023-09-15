/*Problem 2:  Determine whether a given string is Palindrome
 A string “madam” is a palindromic string because it reads the same forwards and backward. 
Input: “anna”
Output: true

Input: “India”
Output: false

*/

/*Theres Two Approches I know : 
1) Reverse String And Store it in another and lastly compare it with original string
2) check one by one char in string from start-point and end-point.*/

// The second Approch gives up good time & space complexity so wi will be using it


#include <stdio.h>
#include <string.h>

int main(){

    char str[100];
    int flag=0;
    printf("\nEnter String : ");
    gets(str);

    int st = 0;
    int end=strlen(str)-1;

    for(st=0;st<end;st++){
        if(str[st]!=str[end]){
            flag=1;
            break;
        }
        end--;
    }
    if(flag==0){
        printf("True");
    }else{
        printf("False");
    }

    return 0;
}