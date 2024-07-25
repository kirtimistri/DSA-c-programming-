#include<stdlib.h>
#include<stdio.h>
//we have made the structure of stack 
struct stack{
    int top;
    int size ;
    char *aar;
};
int isEmpty(struct stack*ptr){
    if(ptr->top==-1){
        return 1;//conditon is true
    }else{return 0;//conditon is false 
    }}
int isFull(struct stack*ptrf){
    if(ptrf->top==ptrf->size-1){ return 1;//conditoon is true
    }else{return 0;//condition is false
    }
}
//here structures stacks updated value can be taken from main() coz main is going to be run first we 
//are declaring a new pointer just for this function which is ptr
char push(struct stack *ptr,int val){
    if(isFull(ptr)){//this condition will throw error if we pass sp as an arrgumnet coz we havent mentiond it 
        printf("stack overflow!! cannot push %d\n",val);
    }else{
        ptr->top++;
        ptr->aar[ptr->top]=val;
    }
}
char pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("stack underflow!!cannot pop\n");
    }else{
        char val=ptr->aar[ptr->top];
        ptr->top--;
        printf("%d is poped out of the stack\n",val);
    }

}//this function will return the position 
int peek(struct stack *ptr,int i){
    int arrayind=ptr->top-i+1;
    if(arrayind<0){printf("not a valid position\n");
    }else{
        return ptr->aar[arrayind];//retutrn arrray index from array       
    }
}
int stacktop(struct stack *ptr){
    return ptr->aar[ptr->top];
}
int stackbottom(struct stack*ptr){
    return ptr->aar[0];
}
int paranthisismatch(char* exp){
    //making a new stackk pointer
    struct stack *sp;
    sp->size=100;//stack size
    sp->top=-1;// stack is empty so topis -a
    sp->aar=(struct stack*)malloc(sizeof(struct stack));// dynamic memorty allocation of array
    
 for( int i =0;exp[i]!='\0';i++){
    if (exp[i]=='('){
        push(sp,'(');
    
    }else if(exp[i]==')'){
        if(isEmpty(sp)){
            return 0;
        }
        pop(sp);
    }
 }
 if (isEmpty(sp)){
    return 1;
 }else return 0;

}
int main(){
char*exp="8*(9))";
if(paranthisismatch(exp)){
    printf("the perenthisis is matching");
}else{
    printf(" the perenthisis is not matching");
}
}