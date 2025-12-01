#include<stdio.h>
#include<stdlib.h>
    struct may24_1
    {
        int totalsize;
        int usesize;
        int *ptr;
    };
    
    void createArray( struct may24_1 *a , int tsize,int usize){
        a -> totalsize = tsize;
        a ->  usesize = usize;
        a -> ptr = (int*) malloc ( tsize * sizeof (int));

    }
    void show(struct may24_1 *a ){
        for (int i = 0; i < a ->usesize; i++)
        {
            printf( "%d\n",(a ->ptr)[i]);
        }
        

    }
    void setvalue(struct may24_1 *a ){
        int n ;
        for (int i = 0; i < a ->usesize; i++)
        {
            printf("Enter the element:");
            scanf( "%d",&n);
            (a ->ptr)[i] = n;
        }
        

    }


    int main(){
    struct may24_1 marks;
    createArray(&marks,10,2);
    setvalue(&marks);
    show(&marks);
    
    return 0;

    }
