using namespace std;
#include<iostream>
#include<fstream>
int main()
{
    ofstream MyFile("first.txt");
    MyFile<<"Congratulations for learning C++\n";
    MyFile<<"\nCollect your certificate.";
    MyFile.close();
    return 0;
}