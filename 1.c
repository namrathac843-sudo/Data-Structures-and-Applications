#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
struct stack
{
    int top;
    int data[SIZE];

};
typedef struct stack STACK;
void push(STACK *s,int item)
{
    if(s->top==SIZE-1)
    printf("\n stack overflow");
    else
    {
        s->top=s->top+1;
        s->data[s->top]=item;
    }
    
}
void pop(STACK *s)
{
    if(s->top==-1)
    printf("\n stack under flow");
    else{
        printf("\n element poped is %d",s->data[s->top]);
        s->top=s->top=s->top-1;
    }
}
void display(STACK s)
{
    int i;
    if(s.top==-1)
    printf("\n stack empty");
    else
    {
        printf("\n stack content are\n");
        for(i=s.top;i>=0;i--)
    printf("%d\n",s.data[i]);    
    }
}
int main()
{
    int ch,item;
    STACK s;
    s.top=-1;
    for(;;)
    {
        printf("\n stack operation");
        printf("\n 1-push\n2-pop\n3-display\n4-exit\n");
        printf("\n read choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\n read elemnt to be pushed");
            scanf("%d",&item);
            push(&s,item);
            break;
            case 2:
            pop(&s);
            break;
            case 3:
            display(s);
            break;
            defaul:
            exit(0);
        }  
     }
     return 0;
}