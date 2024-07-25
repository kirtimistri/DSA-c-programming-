#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int *arr;
    int size;
};
int isEmpty(struct stack *ptr){
if(ptr->top==-1){return 1;}
else{return 0;}}
int isfull(struct stack *ptr){
if (ptr->top==ptr->size-1){
    return 1;
}//we do not need to write else statement for this condition becouse if condition is false 
//then it will return the functions return 
    return 0;
}

int main(){
// struct stack s;
// s.size=80;
// s.top=-1;
// s.arr=(int*)malloc(s.size*sizeof(int*));
struct stack *s;
s->size=6;
s->top=-1;
s->arr=(int*)malloc(s->size*sizeof(int*));
// s->arr[0]=7;
// s->top++;
if(isEmpty(s)){printf("stack is Empty!(stack is under flow)");
}else(printf("stack is not Empty"));
//conditon check if stack is empty or not 
;}