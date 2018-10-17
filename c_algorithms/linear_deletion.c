#include<stdio.h>
#include<stdlib.h>
//deletion;
int main(){
    int i,j,n;
    printf("Enter the number of elements in the list:");
    scanf(" %d", &n);
    int A[n];
    if(n<0){
        printf("The list does not exist!.\n");
  }else{
    printf("Enter %d elements.\n",n);
    for (i=0;i<n;i++){
        scanf(" %d", &A[i]);
    }
    printf("\nThe elements Entered are:\n");
    for(i=0;i<n;i++){
        printf(" %d ", A[i]);}
    printf("\nEnter the position of the element you want to delete: ");
    scanf(" %d ", &j);
    if(0>j>(n-1)){
       printf("\nThe value is invalid.!");
       }else{
       for(i=(j-1);i<(n-1);i++){
        A[i]=A[i+1];
       }
       printf("The resultant array elements are:\n");
       for(i=0;i<(n-1);i++){
        printf(" %d ", A[i]);
       }
       }
    return 0;
}}
