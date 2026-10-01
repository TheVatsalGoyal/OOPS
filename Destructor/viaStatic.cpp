#include"iostream"
using namespace std;

class Example{
    static int count;
    public:
    Example(){
        count++;
        cout<<"Created: "<<count<<"\n";
    }
    ~Example(){
        cout<<"Deleted: "<<count<<"\n";
        count--;
    }
};

int Example::count;

int main(){
    Example E1,E2,E3;
}