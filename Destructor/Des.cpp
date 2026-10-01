#include"iostream"
using namespace std;

class Example{
    public:
    Example();
    ~Example();
};

Example::Example(){
    cout<<"Cons\n"
;}

Example::~Example(){
    cout<<"Dis\n";
}

int main (){
    Example E1,E2,E3;
    
}