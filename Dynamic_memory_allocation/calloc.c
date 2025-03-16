#include <stdio.h>
#include <stdlib.h>

int main(){
     //use of calloc
     int* ptr;
     int n;
     printf("Enter the value of array: ");
     scanf("%d",&n);

     ptr = (int*) calloc( n , sizeof(int));

     for(int i=0;i<n;i++){ //for input
          printf("Enter the %d element of array: ",i);
          scanf("%d",&ptr[i]);
     }
     
     for(int i=0;i<n;i++){ //for output
          printf("%d ",ptr[i]);
     }
     free(ptr);

     return 0;
}