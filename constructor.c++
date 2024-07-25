using namespace std;
#include<iostream>

class Myclass{
    public: //access specifier

    int a;
    int b;
/* constructor */
    Myclass(int x,int y){
        a=x;
        b=y;
    }
    void print(){
        cout<<"a : "<<a;
        cout<<"\nb : "<<b;
    }
};

int main()
{
    Myclass m1(1,4); 
    m1.print();

    return 0;
}