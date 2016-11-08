#include<stdio.h>
#include<stdlib.h>
#define MAX 20000

typedef struct stack{
int data[MAX];
int  top;
}stack;

int push( stack *mystack,int val){
        if (mystack->top== MAX){
                printf("\n stack size overflow");
                return 999999;
        }
        else{
                mystack->data[mystack->top+1]= val;
                mystack->top =mystack->top+1;
        }
}
int pop(stack *mystack){
        int x;
        if(mystack->top==-1){
                printf("\n no elements in stack error");
                return 999999;
        }
        else{
                x= mystack->data[mystack->top];
                mystack->top= mystack->top-1;
                return x;
        }
}

int solution(char *str){
        char x;
        int op1,op2,res,i=0;
        struct stack mystack;
    mystack.top=-1;
        while((x=str[i++])!='\0'){
                if (isdigit(x)){
                        if((9999999==push(&mystack,x-48)))
                                return -1;
                }
                 else{
                        op1=pop(&mystack);
                        op2=pop(&mystack);
                        if(op1==999999 || op2 ==999999)
                        return -1;
                        if(x=='*')
                                res= op1*op2;
                        else if(x=='+')
                                res =op1+op2;
                        else
                                return -1;

                        if((999999==push(&mystack,res)))
                                return -1;

                }
        }
        if(999999==( res = pop(&mystack)))
                return -1;
        else if(mystack.top!=-1)
                return -1;
        printf("\n Result = %d ",res);
        return res;
}

int  main()
{
        char  *str;
        int x;
        printf("\n enter the postfix expression to be evaluated: ");
        scanf("%s",str);
        x = solution(str);
        if(x==-1)
                printf("\n %d \n",x);
        else
                printf("result==%d",x);
        return 0;
}
