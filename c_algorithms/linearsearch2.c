#include<stdio.h>
#include<stdlib.h>
//elemental search
 int main (){
  int i,E,n;
  int A[100];
  printf("Enter the number of elements in the list:\n");
  scanf(" %d", &n);

   if(0>n){
    printf("The list does not exist!.\n");
  }else{
    printf("Enter %d elements.\n",n);
    for (i=0;i<n;i++){
        scanf(" %d", &A[i]);
    }
   printf("\nThe elements Entered are:\n");
    for(i=0;i<=n;i++){
        printf(" %d ", A[i]);
    }
    printf("\nEnter the element to search for:");
    scanf(" %d", &E);
    for(i=0;i<n;i++){
        if(A[i]==E){
            printf("Element %d is found at location %d. \n", E,(i+1));
            break;
        }else{
        printf(" %d is not present in the list.\n",E);
        }
    }

  }

return 0;
 }
