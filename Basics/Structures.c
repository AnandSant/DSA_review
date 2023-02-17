/******************************************************************************

##### 1 ##### Structure : is Group of related data members

1. Defining Structure
2. Size
3. declaration
4. Accessing

*******************************************************************************/
#include <stdio.h>

//1. Defining Structure
struct Rectangle{
    int length;
    int breadth;
};
//2. Size
// Assume int takes 2 byes traditionally then its Size is 4 bytes

int main()
{
    // 3. declaration and r will be created in memory
    struct Rectangle r;
    
    // 3.1:  declaration and initialization
    struct Rectangle r1 = {10,20};
    
    
    //4. Accessing using dot operator
    r.length = 100;
    r.breadth = 200;
    
    printf("Area of rectangel r is %d", r.length * r.breadth );
    
    printf("Area of rectangel r1 is %d", r1.length * r1.breadth );
    
    return 0;
}
