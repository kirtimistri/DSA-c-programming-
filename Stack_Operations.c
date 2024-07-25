#include<stdlib.h>
#include<stdio.h>
//we have made the structure of stack 
struct stack{
    int top;
    int size ;
    int *aar;
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
int push(struct stack *ptr,int val){
    if(isFull(ptr)){//this condition will throw error if we pass sp as an arrgumnet coz we havent mentiond it 
        printf("stack overflow!! cannot push %d\n",val);
    }else{
        ptr->top++;
        ptr->aar[ptr->top]=val;
    }
}
int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("stack underflow!!cannot pop\n");
    }else{
        int val=ptr->aar[ptr->top];
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
int main(){
//now we are using structure of stacks charactaristics ie size top array etc to diside their spacific value
//by using struct stack*sp whare struct stack difines that it is a structure type pointer
//sp is the name of that pointer which is only known in main function 
struct stack *sp=(struct stack*)malloc(sizeof(struct stack));//dynamic memory allocation is did to store 
//and acessthe top ,size ,*arr data
sp->size=10;
sp->top=-1;
sp->aar=(int*)malloc(sp->size*sizeof(int*));//sp->size becouse we need an array of size 10 
printf("A Stack has been created\n");
//when we pass sp to this condition it will have the acess of sp pointer's all
//this condition will throw an erro if we pass ptr as an arrgument becouse ptr is not dynamic 
//but if we pass sp then it will run coz its dynamic pointer   
// if(isEmpty(sp)){printf("stack is Empty\n");}
// else{printf("stack is not Empty\n");}
// push(sp,7);
// if(isFull(sp)){printf("Stack is Full\n");}
// else{printf("Stack is not Full");}
//or
printf("Before pushing full?  %d\n",isFull(sp));
printf("Before pushing empty?  %d\n",isEmpty(sp));
push(sp,1);
push(sp,2);
push(sp,3);
push(sp,4);
push(sp,5);
push(sp,4);
push(sp,4);
push(sp,4);
//pop(sp);
//push(sp,6);
printf("after pushing full?  %d\n",isFull(sp));
printf("after pushing empty?  %d\n",isEmpty(sp));
printf("stack top is %d\n",stacktop(sp));
printf("stack bottom is %d\n",stackbottom(sp));
for(int j=1;j<=sp->top+1;j++){
    printf("the value at index %d is %d \n",j,peek(sp,j));
}
    free(sp);
}