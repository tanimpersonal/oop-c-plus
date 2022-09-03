#include <bits/stdc++.h>

using namespace std;
class Password{
private:
    int x;
    int pass;
public:
    Password (int p){
       pass=p;
    }
    void setter(int a, int p ){
        if(pass==p){
          x=a;
        } else{
            cout << "Didn't match";
        }
    }
    int getter(int p){
        if(x==p){
            cout << "Pass match";
            return x;
        } else{
            cout << "New pass didn't match";
            return -1;
        }
    }
};
int main(){
    // password set one time
    Password passSet(1234);
    //now set password
    //first param new pass, last param old pass
    passSet.setter(1500,1234);
    cout << passSet.getter(1600);
}
