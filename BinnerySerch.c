#include<stdio.h>
//works on sorted array efficiently 
int binarysearch(int arr[],int elemnt,int size){
   int min,max,mean;
   min=0;
   max=size-1;
 while(min<=max){
     mean=(min+max)/2;
     if (arr[mean]==elemnt){
     return mean;
     }
     if(arr[mean]<elemnt){
     min = mean+1;
     }
     else{
      max = mean-1;
     }
    }
    return -1;
}//"==" is an comparison operator and '=' is an assigning operator
int main(){
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   int size=sizeof(arr)/sizeof(int);
   int elemnt=7;
   int searchindex=binarysearch(arr,elemnt,size);
   printf("the search index od %d is %d",elemnt,searchindex);
   return 0;
}
