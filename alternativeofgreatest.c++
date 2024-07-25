using namespace std;
#include<iostream>
int main(){
    int a,b,c;
    cout<<"Enter the first number : \n";
    cin>>a;
    cout<<"Enter the second number : \n";
    cin>>b;
    cout<<"Enter the third number : \n";
    cin>>c;
    if((a>b)&&(a>c)){
        cout<<a<<" "<<"is the greatest number";
    }
    else if((b>a)&&(b>c)){
        cout<<b<<" "<<"is the greatest number";
    }
    else{
        cout<<c<<" "<<"is the greatest number";
    }
    return 0;
}