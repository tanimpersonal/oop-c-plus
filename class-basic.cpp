#include <bits//stdc++.h>

using namespace std;
class Student {
public :
    char name[100];
    int roll;
};
int main(){
    //make an object
    Student tanim;
    strcpy(tanim.name, "Tanim Istiak");
    tanim.roll=01;
    cout << tanim.name << " " << tanim.roll << endl;
    return 0;
}