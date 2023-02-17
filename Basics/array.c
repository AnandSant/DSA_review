#include <stdio.h>
//##### 1 #####
//Array : is Collection of similar data elements at one place
int main(){   
    int a[5];
    
    a[0]=1;
    a[1]=2;
    a[2]=3;
    a[3]=4;
    a[4]=5;
    int sizen = 5;
    
    for(int i=0; i<sizen ; i++){
        printf("%d \n",a[i]);   
    }

    //declare and initalization
    
    int b[3] = {10,20,30};
    int size = 3;
    for(int i= 0; i<size; i++){
        printf("%d\n", b[i]);
    }
    return 0;
}