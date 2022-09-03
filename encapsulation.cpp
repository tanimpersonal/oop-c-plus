#include <bits/stdc++.h>

using namespace std;
//we are encapsulating data, functions, method in a class.
//public can be accessed through main but private and protected can't be
//private can be accessed through friend class or functions
//protected can be accessed through friend class, and even child class.
class Student{
public:
    int roll;
    void hello(){
        cout << "hello" << " " << roll << endl;
    };
private:
    int y;
};
int main(){
    Student tanim;
    tanim.roll= 01;
    tanim.hello();

}