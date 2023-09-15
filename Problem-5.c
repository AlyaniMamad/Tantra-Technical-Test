/* Problem 5: Swap two numbers without using a temporary variable
 Input:integer a = "10", b = "50".
Output: Strings after swap: a = 50 and b = 10
*/

//There Can Be Two Approches for doing it

/*1) Using Arithematic Operators
2) Using XOR */

#include <stdio.h>

int main(){

    int a,b;
    printf("\nEnter No1 : ");
    scanf("%d",&a);
    printf("\nEnter No2 : ");
    scanf("%d",&b);

    printf("Before Swap A : %d & B : %d\n",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

  /*a=a^b;
    b=a^b;
    a=a^b;*/ // Alternate Approch

    printf("After Swap A  : %d & B : %d\n",a,b);

    return 0;
}

