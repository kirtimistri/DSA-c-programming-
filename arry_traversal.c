#include<stdio.h>
#include<stdlib.h>
void display(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);

    };
};
//becouse in c min runs first so it will take 100 as an arrgument of the array size
// which is also mentioned in the void display function 
int main(){
    int arr[100]={1,2,6,78,5};
    display(arr,5); 
};