#include<stdio.h>
#include<stdlib.h>
//insertion;
int main(){
    int i,j,n,x;
    printf("Enter the number of elements in the list:");
    scanf(" %d", &n);
    int A[n];
    if(n<1){
    printf("The list does not exist!.\n");
  }else{
    printf("Enter %d elements.\n",n);
    for (i=0;i<n;i++){
        scanf(" %d", &A[i]);
    }
    printf("\nThe elements Entered are:\n");
    for(i=0;i<n;i++){
        printf(" %d ", A[i]);
    }
    printf("\nEnter the location you wish to insert an element:");
    scanf(" %d", &j);
    if(0>j>(n-1)){
        printf("The value is invalid.!");
    }else{
        printf("Enter the value you wish to insert:");
        scanf(" %d", &x);
    for(i=(n-1);i>=(j);i--){
        A[i+1]=A[i];
        A[j-1]=x;
    }
    printf("\nThe new array elements are:\n");
    for(i=0;i<=n;i++){
        printf(" %d",A[i]);
    }
    printf("\n\n");
    }
}
return 0;
}
