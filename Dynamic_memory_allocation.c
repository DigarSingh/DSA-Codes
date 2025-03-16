#include <stdio.h>
#include <stdlib.h>

int main(){
     //use of malloc
     int* ptr;
     int n;
     printf("Enter the value of array: ");
     scanf("%d",&n);

     ptr = (int*) malloc(n*sizeof(int));

     for(int i=0;i<n;i++){ //for input
          printf("Enter the %d element of array: ",i);
          scanf("%d",&ptr[i]);
     }
     
     for(int i=0;i<n;i++){ //for output
          printf("%d ",ptr[i]);
     }

     return 0;
}