#include <iostream>

using namespace std;
//##### 1 #####
//Array : is Collection of similar data elements at one place
int main(){
    
    //Array Declaration
    int a[5], sizen=5;
    //Array initialization
    a[0]=1;
    a[1]=2;
    a[2]=3;
    a[3]=4;
    a[4]=5;
    for(int i=0; i < sizen; i++){
        cout << a[i] <<endl;       
    }
//Example 2    
    //Array Declaration and initialization    
    int b[3] = {10,20,30};
    int size = 3;
    for(int j=0; j<size; j++){
        cout << b[j] <<endl;
    }
    return 0;
//Example 3
    //3. For each loop
    int A[5] = {1,11,21,41,51};
    
    for(int x:A){
        cout << x << endl;
    }
}
