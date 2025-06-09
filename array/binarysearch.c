#include<stdio.h>
void action(int arr[],int size){
    for(int i=1; i<size; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
void perform(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}

  int search(int arr[],int size,int element){
    int low,mid,high;
    low = 0;
    high = size -1;
    
         while(low<=high){
          int mid= (low+high)/2;
        if (arr[mid]==element)
        {
            return mid;
        }
        else if (arr[mid]<element)
        {
            low = mid +1;

        }
        else{
            high = mid-1;
        }
    }
        return -1;

}
    

  
    

int main(){
    int arr[]={2,3,4,44,1,89};
    int size= sizeof(arr)/sizeof(int);
    int element = 1;
    action(arr,size);
    perform(arr,size);
   int x = search(arr,size,element);
    printf("The element %d was found at Index %d\n",element,x);
    return 0;
}