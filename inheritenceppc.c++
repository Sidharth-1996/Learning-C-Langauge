using namespace std;
#include<iostream>

class Parent1{
    public:

    void p1(){
        cout<<"I am Father\n";
    }
};

class Parent2{
    public:

    void p2(){
        cout<<"I am Mother\n";
    }
};

class Child1:public Parent1,public Parent2{
    public:

    void child1(){
        cout<<"I am the first child\n";
    }
};

class Child2:public Child1{
    public:

    void child2(){
        cout<<"I am the second child of my parents\n";
    }
};
int main()
{
    Child2 a1;
    a1.child1();
    a1.p1();
    a1.p2();
    return 0;
}