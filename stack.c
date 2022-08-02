#include<stdio.h>
int top=-1,stack[5];     

//PUSH
void push(){
    int a;
    printf("Enter data: ");
    scanf("%d",&a);

    if(top==4){
        printf("Overflow!\n");
    }
    else
        top+=1;
        stack[top]=a; 
}       
//POP
void pop(){
    int t;
    if(top==-1)
        printf("Underflow.\n");
    else{
        t=stack[top];
        top--;
    }
}
//PEEK
void peek(){
    //printf("Enter the poaition you want to peek: ");
    int a;
    while(a>=top && a<=0){
        printf("Enter a postion you want to peek (0~4): ");
        scanf("%d",&a);
    }
    printf("The value at %d position is %d\n",a,stack[a]);
}
//SIZE
void size(){
    printf("The stcak has %d positions left",4-top);
}
#include<stdio.h>
int top=-1,stack[100],n;     

//PUSH
void push(){
    int a;
    printf("Enter data: ");
    scanf("%d",&a);

    if(top==n){
        printf("Overflow!\n");
    }
    else
        top+=1;
        stack[top]=a; 
}       
//POP
void pop(){
    int t;
    if(top==-1)
        printf("Underflow.\n");
    else{
        t=stack[top];
        top--;
        printf("\nThe removed element is %d",t);
    }
}
//PEEK
void peek(){
    //printf("Enter the poaition you want to peek: ");
    if(top==-1){
        printf("Empty stack\n");
    }
    else
        printf("\n%d",stack[top]);
}
//SIZE
void size(){
    if(top==-1){
        printf("\nThe stack is empty.");
    }
    else
        printf("The stack has %d positions left",n-1-top);
}
//DISPLAY
void display(){
    printf("[");
    for(int i=top;i>=0;i--){
        printf("%d\t",stack[i]);
    }
    printf("]");
}
void main(){
    char ans[10];
    int c;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    
    do{
        printf("Enter your operation:\n1.Push\n2.Peek\n3.Size\n4.Pop\n5.Display\n6.Size\n::");
        scanf("%d",&c);
        switch (c)
        {
        case(1):
            push();
            display();
            break;
        
        case(2):
            peek();
            break;
        
        case(3):
            size();
            break;
        
        case(4):
            pop();
            break;

        case(5):
            display();
            break;

        case(6):
            size();
            break;

        default:
            printf("Invalid Input!\n");
            break;
        }
        printf("\nDo you want to continue(Yes/No): ");
        scanf("%s",&ans);
    }while(tolower(ans[0])=='y');
}
