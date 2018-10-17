#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n;
    printf("Enter the number of elements in the list:");
    scanf(" %d", &n);
    int A[n];
    if (n<0){
        printf("The value entered is invalid.!");
    }else{
        printf("Enter the values:\n");
        for(i=0;i<n;i++){
            scanf(" %d", &A[n]);
        }
        printf("The elements of the list are:\n");
        for(i=0; i<n; i++){
            printf(" %d : %d \n", i, A[i]);
        }

    }
return 0;
}
