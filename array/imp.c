#include<stdio.h>
#include<stdlib.h>
    struct myArray
    {
        int totalsize;
        int usesize;
        int *ptr;
    };
    
    void createArray( struct myArray *a , int tsize,int usize){
        a -> totalsize = tsize;
        a ->  usesize = usize;
        a -> ptr = (int*) malloc ( tsize * sizeof (int));

    }
    void show(struct myArray *a ){
        for (int i = 0; i < a ->usesize; i++)
        {
            printf( "%d\n",(a ->ptr)[i]);
        }
        

    }
    void setvalue(struct myArray *a ){
        int n ;
        for (int i = 0; i < a ->usesize; i++)
        {
            printf("Enter the element:");
            scanf( "%d",&n);
            (a ->ptr)[i] = n;
        }
        

    }


    int main(){
    struct myArray marks;
    createArray(&marks,10,2);
    printf("set value\n");
    setvalue(&marks);
    printf("show\n");
    show(&marks);
    
    return 0;

    }
