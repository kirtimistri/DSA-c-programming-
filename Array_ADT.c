#include<stdio.h>
#include<stdlib.h>
//struct is an user defiine datatype
struct myarray
{ int total_size;
  int used_size;
  int *ptr;
};
// void is used to write an function in c which return some finnal value
void createarry(struct myarray* a,int tsize,int usize){
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int*)malloc(tsize*sizeof(int));}

//* is used to get the achual  value of the operator and 
// &gets the address of the operator 
// this is the main function of c program here the main motive
// of the program is don eby calling the other functions present in the program
void show(struct myarray *a) {
    for( int i=0;i < a->used_size; i++)
    {
        printf("%d\n",(a->ptr)[i]);
    };
    
} ;
void setval(struct myarray *a){
    int n;
  for(int i=0; i<a ->used_size;i++)
     {
      printf("Enter element %d =",i);
      scanf("%d",&n);
      (a->ptr)[i]=n;
   };
};
int main(){
struct myarray marks;//here marks is an variable 
createarry(&marks,10,2);
printf("we are running setval now");
setval(&marks);
printf("we are running show no\n");
show(&marks);
};
