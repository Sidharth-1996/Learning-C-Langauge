using namespace std;
#include<iostream>

class Apply_for_job{
    public:

    string name;
    int years_of_experience;

    void put_details(string x,int y){
        name=x;
        years_of_experience=y;
    }

    void get_details(){
        cout<<name;
        cout<<"\n";
        cout<<years_of_experience;
    }
};

int main()
{
    Apply_for_job a1;
    int b;
    string a;
    cout<<"Welcome\n";;
    cout<<"Enter your name : ";
    cin>>a;
    cout<<"\n";
    cout<<"Enter your year of experience(in years) : ";
    cin>>b;
    a1.put_details(a,b);
    a1.get_details();
    return 0;
}