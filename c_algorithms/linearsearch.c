 #include<stdio.h>
#include<stdlib.h>
 int main(){
 int i, p, n;
  printf("Enter the number of the elements  in the list:\n");
  scanf(" %d\n", &n);
  int A[n];

  if(n<0){
    printf("There is no list.!");
  }else{
    printf("Enter %d elements.\n", n);
    for(i=0;i<=n;i++){
        scanf(" %d", &A[i]);
    }
    printf("The elements of the list are.\n");
    for(i=0;i<=n;i++){
        printf(" %d", A[i]);
    }
    printf("\nEnter the position of the element you looking for:\n");
    scanf(" %d \n", &p);
    if(0>p>n){
        printf("The position entered is invalid.!");
    }else{
        printf("The value is %d \n", A[p-1]);
    }

  }
    return 0;
 }
