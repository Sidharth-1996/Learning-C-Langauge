using namespace std;
#include<iostream>
int main()
{
    int n;
    cout<<"Enter the number of students you want to enter the marks of :\n";
    cin>>n;
    int a[n];
    for(int i=1;i<n+1;i++){
        cout<<"Enter the marks of student "<<i<<"\n";
        cin>>a[i];
    }
    cout<<"\n";
    cout<<"Initializing the output...............\n";
    cout<<"\n";
    cout<<"The marks you have entered are :- \n";
    for(int i=1;i<n+1;i++){
        cout<<"the marks of student "<<i<<" is "<<a[i]<<"\n";
    }
    return 0;
}