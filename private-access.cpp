#include <bits/stdc++.h>

using namespace std;
class Roll{
private:
    int roll;
public:
    void setter(int a){
        roll=a;
    }
    //getter
    int getter(){
        return roll;
    }
};
int main(){
    Roll name;
    //call the setter to assign value to private roll.
    name.setter(20);
    cout << name.getter();
}