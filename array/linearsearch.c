#include<stdio.h>
int linearSearch(int arr[],int size,int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
    
}
int main(){
    int arr[]={2,34,66,77,85,45,43};
    int size= sizeof(arr)/sizeof(int);
    int element=4;
    int searchIndex= linearSearch(arr,size,element);
    printf("the element was found at index %d\n",searchIndex);


    return 0;
}