#include <bits/stdc++.h>

using namespace std;
class  Parent {
public:
    int x;
private:
    int y;
protected:
    int z;
public:
    Parent(int a, int b, int c){
        x=a;
        y=b;
        z=c;
    }
};
//inherit from parent
// here this public is used to make the parents public data public to child
class Child: public Parent{
public:
    int xx;
    Child(int aa): Parent(1,2,3){
        xx=aa;
    }
    //see protected data
    void tell(){
        cout << z <<endl;
    }
};
int main(){
    Parent pt(10,20,30);
    Child y(100);
    cout << y.x << endl;
    cout << pt.x  << endl;
    y.tell();
}