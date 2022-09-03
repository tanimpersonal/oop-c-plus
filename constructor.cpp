//it is a special function which can call the function when we create an object from a class.
//constractor name should be same as class.
#include <bits/stdc++.h>
using namespace std;
class Example{
public:
    int x,y,z;
    //constructor
    Example(int a, int b, int c){
        x=a;
        y=b;
        z=c;
    }
};
int main(){
    Example call(10,20,30);
    cout << call.x <<" "<< call.y <<" "<<call.z;
}