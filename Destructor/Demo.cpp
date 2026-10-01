#include"Demo.h"              //.h is for header file 
#include"iostream"
using namespace std;

Demo::Demo(){
    cout<<"Cons\n";
}

Demo::~Demo(){
    cout<<"Des\n";
}

int main(){
    Demo D;
}