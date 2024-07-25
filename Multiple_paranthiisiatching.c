#include<stdlib.h>
#include<stdio.h>
struct stack{
    int top;
    int size;
    char*arr;
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
char push(struct stack *ptr,int val){
    if(isFull(ptr)){//this condition will throw error if we pass sp as an arrgumnet coz we havent mentiond it 
        printf("stack overflow!! cannot push %d\n",val);
    }else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
char pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("stack underflow!!cannot pop\n");
        return -1;
    }else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
        }
        }
int Match(char a,char b){
    if(a=='{' && b=='}'){
      return 1;
    }
    if(a=='(' && b==')'){
      return 1;
    }
    if(a=='[' && b==']'){
      return 1;
    }
   return 0;
}
char Multiparamatch(char*exp){
    struct stack*sp;
    sp->top=-1;
    sp->size=100;
    sp->arr=(char*)malloc(sp->size*sizeof(char));
    char popedch;
    for( int i=0;exp[i]!='\0';i++){
        if(exp[i]=='{'||exp[i]=='('||exp[i]=='['){
            push(sp,exp[i]);
           }
        else if (exp[i]=='}'||exp[i]==']'||exp[i]==')'){
        if(isEmpty(sp)){
            return 0;
        }
        popedch=pop(sp);
        if(!Match(popedch,exp[i])){
            return 0;
        }
        }      
       
    }
  return 1;
}
int main(){
char *exp="{7-(3-2)+[8+(99-11)]}";
if(Multiparamatch(exp)){
    printf("the perenthisis is Balanced");
}else{
    printf(" the perenthisis is not Balanced");
}
}