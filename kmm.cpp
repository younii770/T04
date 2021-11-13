#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    int a, b, max;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    
    if(a > b) max = a;
    else max = b;
    
    while(true){
        
        if(max % a == 0 && max % b == 0) break;
        else ++max;
    }
    
    cout<<"\nK.M.M 1st & 2nd number is :"<<max;
    
    return 0;
}
