
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

struct queue{
    int r,f;
    int data[SIZE];
};
typedef struct queue QUEUE;
void enqueue(QUEUE *q,int item){
    if(q->r==SIZE-1){
        printf("\n Queue overflow");
    }
    else{
        q->r+=1;
        q->data[q->r]=item;     
        if(q->f==-1){
            q->f=0;
        }
    }
}
void dequeue(QUEUE *q){
    if (q->f==-1 || q->f>q->r){
        printf("\n Queue underflow");
        q->f=-1;
        q->r=-1;
    }
    else{
        printf("\n Element dequeued is %d",q->data[q->f]);
        q->f+=1;
    }
}
void display(QUEUE *q){
    int i;
    if(q->f==-1 || q->f>q->r){
        printf("\n Queue is empty");
    }
    else{
        printf("\n Queue content are\n");
        for(i=q->f;i<=q->r;i++){
            printf("%d\n",q->data[i]);
        }
    }
}
int main(){
    int item,ch;
    QUEUE q;
    q.f=-1;
    q.r=-1;
    for(;;){
        printf("\n1.insert\n2.delete\n3.Display\n4.Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1:{
                printf("\n Read element to be inserted: ");
                scanf("%d",&item);
                enqueue(&q,item);
                break;
            }
            case 2:{
                dequeue(&q);
                break;
            }
            case 3:{
                display(&q);
                break;
            }
            default:{
                exit(0);
            }
    }
}
    return 0;
}
