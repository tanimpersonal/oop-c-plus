//two types => compile time, runtime
// compile time => function overloading, operator overloading
//runtime => function overriding, virtual function

// overloading means same function do multiple tasks
// ovbeririding means replace the previous function works
#include <bits/stdc++.h>

using namespace std;
class Example{
public:
    int add(int a, int b){
        return a+b;
    }
    double add(double a, double b){
        return a+b;
    }
    char add(char a){
        cout << a << endl;
    }
};
int main(){
    Example p;
    //it will execute the int function as per parameter. this is function overloading
    cout << p.add(1,2) << endl;
    //it will execute the double function
    cout << p.add(1.5,2.5) << endl;
p.add('a');
}