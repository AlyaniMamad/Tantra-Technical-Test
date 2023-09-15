/*Problem 3:  Biggest and smallest number in an array
 Write a program to print the biggest and smallest number in the array. 

Input: arr[] = {1, 2, 3, 4, 5}
Output: Maximum is: 5
Minimum is: 1

Input: arr[] = {5, 3, 7, 4, 2}
Output: Maximum is: 7
Minimum is: 2
*/

#include <stdio.h>

int main(){

    int n;
    printf("\nEnter N :");
    scanf("%d",&n);
    int arr[n];

    printf("\nEnter %d Elements : ",n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0],min=arr[0]; 

    for(int i=0;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    printf("\nMaximum : %d",max);
    printf("\nMinimum : %d",min);

    return 0;
}
