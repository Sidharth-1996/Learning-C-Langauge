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
    if(a>b){
        if(b>c){
            cout<<a<<" "<<"is the greatest among the three numbers";
        }
    }
    else{
        if(b>c){
            cout<<b<<" "<<"is the greatest among the three numbers";
        }
        else{
            cout<<c<<" "<<"is the greatest among the three numbers";
    }
    }
}