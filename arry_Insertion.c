#include<stdio.h>
#include<stdlib.h>
void display(int arr[],int n){//here n is the number of element goint to be itrate 
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    };
    printf("\n");};
int indexinsert(int arr[],int size,int element, int capacity,int index){
    if(size>=capacity){
     return -1;
    };
    for(int i=size-1;i>=index;i--){//i is used to criate an empty space
    arr[i+1]=arr[i];
     //i is shifting the new switched index 
    };
    arr[index]=element;
    return 1;
};
int main(){
    int arr[100]={7,8,12,27,88};//diclaration of 100 sized array
    int size=6,index=3,element=45,capacity=100;
    display(arr,size);//display function call 
    indexinsert(arr,size,element,capacity,index);
    display(arr,size);
    size+=1; 
};