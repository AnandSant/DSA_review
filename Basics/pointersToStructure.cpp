//##### Reference in C++
/*
    Reference: is another name for a variable
               Reference must be initialized right away else it gives error
*/
#include <iostream>
using namespace std;

struct Rectangle{
    int l;
    int b;
};

int main(){
    int a = 10; 
    //# 1. Creating and initializing reference at same time is must
    int &r = a;
    cout << a;
    r++;
    cout << a;
    cout <<r;
    
    /*
        Pointers to structure
    */
    
    struct Rectangle r1 = {10, 20};
    cout << r1.l << r1.b <<endl;
    struct Rectangle *p1 = &r1;
    cout << (*p1).l << (*p1).b;
    
    (*p1).l = 40;
    (*p1).b = 80;
    
    cout<< (*p1).l << (*p1).b;
    cout << r1.l << r1.b;
    return 0;
}
