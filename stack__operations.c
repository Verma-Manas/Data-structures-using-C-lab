#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 10
int stack[CAPACITY];
int top=-1;
/*Function to add an element to stack */
void push ()
{
      int ele;
      if (isfull())
      {
            printf ("Stack is Full\n");
      }
      else
      {
            printf ("\nEnter element to be pushed : ");
            scanf ("%d", &ele);
            top++;
            stack[top] = ele;
      }
      return;
}
    int isfull()
    {
        if(top==CAPACITY-1)
            return 1;
        else
            return 0;
    }
/*Function to delete an element from stack */
int pop ()
{
      int ele;
      if (top==-1)
      {
        printf ("Stack is Empty\n");
        return (top);
      }
      else
      {
        ele=stack[top];
        printf ("popped element is = %d\n",stack[top]);
        top=top-1;
      }
      return(ele);
}
/*Function to display the status of stack */
void display ()
{
      int i;
      if (top==-1)
      {
        printf("Stack is empty\n");
        return;
      }
      else
      {
        printf ("\nStatus of elements in stack : \n");
        for (i=top;i>=0;i--)
        {
         printf ("%d\n", stack[i]);
        }
      }
}
int main ()
{
      int ch;
      top = -1;

      printf ("STACK OPERATIONS\n");
     // printf("----------------------------\n");
      printf(",   1 for PUSH,   2 for POP,   3 for DISPLAY,   4 for EXIT");
      while(1)
      {
            printf("\nChoose operation : ");
            scanf("%d", &ch);
            switch (ch)
            {
                  case 1:
                        push();
                  break;
                  case 2:
                        pop();
                  break;
                  case 3:
                        display();
                  break;
                  case 4:
                        exit(0);
                  default:
                        printf("Invalid operation \n");
            }
      }
      return 0;
}

