#include<stdio.h>
#include<stdlib.h>
void display(int arr[],int n){//here n is the number of element goint to be itrate 
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    };
    printf("\n");};
void indexdelete(int arr[],int size,int index){
    for(int i=index;i<=size-1;i++){//i is used to criate an empty space
    arr[i]=arr[i+1];
     //i is shifting the new switched index 
    };
};
int main(){
    int arr[100]={7,8,12,27,88};//diclaration of 100 sized array
    int size=5,index=1;
    display(arr,size);//display function call 
    indexdelete(arr,size,index);
    size-=1; 
    display(arr,size);
    return 0;
};