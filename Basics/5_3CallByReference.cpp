/*
Call by address Functions 
*/
#include <iostream>
using namespace std;

void swap(int &y, int &z){
    int temp;
    temp = y;
    y = z; 
    z = temp;
    cout<<"Inside swap function y and z are =  "<< y << " " << z << endl;
}

int main()
{
    int a, b;
    a = 10;
    b = 20;
    cout<<"Values before call  "<< a <<" "<< b << endl;
    swap(a, b);
    cout << "Values after swap  " <<a <<" " << b << endl;
    return 0;
}
