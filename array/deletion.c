#include<stdio.h>
void display(int arr[],int size){
    for(int i = 0; i<size;i++){
        printf("%d\n",arr[i]);
    }
}
 int deletion(int arr[],int index,int capacity,int size){
  
    for(int  i = index ; i<size-1;i++){
        arr[i]= arr[i+1];
    }
    return 1;
 }
int main(){
    int arr[100]= {2,4,6,8,76};
    int size = 5,index = 2;
    display(arr,size);
   deletion(arr,index,100,size);
   size -=1;
   display(arr, size);

}
