using namespace std;
#include<iostream>
#include<fstream>
int main()
{
    string myText;
    ifstream MyReadFile("first.txt");
    while(getline(MyReadFile,myText)){
        cout<<myText<<"\n";
    }
    MyReadFile.close();
    return 0;
}