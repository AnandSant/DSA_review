/* ### Pointers:: is a address variable, it is meant for storing the address of data not the data itself
       Pointers are used to indirectly access the data
       
    #1 Program can directly access 1)Code Section (main) 2) Stack section but it cannot directly access Heap memory
       so Program should / Can use the Heap using "POINTERS"
    
    #2 Accessing Resuouces like External devices(Memory, Keyboard, monitor) then it needs to use pointer
        
    #3 Parameter passing
             
*/
#include<stdio.h>
#include<stdlib.h>

struct Rectangle{
    int x;
    int y;
};

int main(){
    int a = 10;
    // #1 Declaring a pointer and initializing it
    int *p;
    p = &a;
    printf("%d\n", a);
    // #2 De-referencing a pointer 
    printf("%d\n", *p);
    
    //#3 every variable declared will be available in Stack
    
    //#4 To Allocate memory in Heap in C lang we have "malloc" function it is part of stdlib library
    int *q;
    q = (int*) malloc( 5 * sizeof(int));
    q[0] = 10; q[1]=20; q[2]=30; q[3]=40; q[4]=50;

    for(int i = 0 ; i<5 ; i++){
        printf("%d\n",q[i]);   
    }
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;
    
    printf("\n size of p1 = %lu",sizeof(p1));
    printf("\n size of p2 = %lu",sizeof(p2));
    printf("\n size of p3 = %lu",sizeof(p3));
    printf("\n size of p4 = %lu",sizeof(p4));
    printf("\n size of p5 = %lu",sizeof(p5));
 
    free(q);
    return 0;
}
}      
