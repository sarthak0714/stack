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
//DISPLAY
void display(){
    printf("[");
    for(int i=0;i<=top;i++){
        printf("%d\t",stack[i]);
    }
    printf("]");
}
void main(){
    char ans[10];
    int c;
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