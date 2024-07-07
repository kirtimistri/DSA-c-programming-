#include<stdio.h>
//works on sorted and unsorted array as well
int linearsearch(int arr[],int size,int element){
for(int i=0;i<=size;i++){
    if (arr[i]==element){
        return i;
    };
};
return -1;
};
int main(){
    int arr[10]={8,6,5,2,0};
    int size=5;
    //if arrray i sverry large so we can use 
    //int size = sizeof(array)/sizeof(int);
    int element=6;
    int index = linearsearch(arr,size,element);
    printf("the element %d is found at the index %d",element,index);
};