#include <stdio.h>
#define max 10  

void push(int stack[max],int *top,int value){
     if(*top==max-1){
          printf("Stack Overflow!%d",value);
          return;
     }
     (*top)++;
     stack[*top]=value;
     printf("%d Pushed to Stack\n",value);
}
void pop(int stack[max],int *top){
     if(*top == -1){
          printf("Stack Underflow!\n");
          return;
     }
     printf("%d Popped from Stack\n",stack[*top]);
     (*top)--;
}
void peek(int stack[max],int *top){
     if(*top == -1){
          printf("Stack is Empty\n");
          return;
     }
     printf("Top Elements: %d\n",stack[*top]);
}
void display(int stack[max],int *top){
     if(*top == -1){
          printf("Stack is Empty: \n");
          return;
     }
     printf("Stack Elements: ");
     for(int i= *top;i>=0;i--){
          printf("%d ",stack[i]);
     }
     printf("\n");
}
int main() {
     int stack[max];
     int top = -1,ch,value;

     do{
          printf("****************************************\n");
          printf("\nStack Menu:\n 1.Push\n 2.Pop\n 3.Peek\n 4.Display\n 5.Exit\nEnter your choice: ");
          scanf("%d",&ch);

          switch(ch){
               case 1:
                    printf("Enter the value to push: ");
                    printf("****************************************\n");
                    scanf("%d",&value);
                    push(stack,&top,value);
                    break;
               case 2:
                    pop(stack,&top);
                    break;
               case 3:
                    peek(stack,&top);
                    break;
               case 4:
                    display(stack,&top);
                    break;
               case 5:
                    printf("****************************************\n");
                    printf("Exiting...\n");
                    break;
               default:
                    printf("Invalid choice!");
          }
     }while(ch!=5);
     return 0;
}