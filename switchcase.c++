using namespace std;
#include <iostream>
int main()
{
    int a = 2;
    switch (a)
    {
    case 1:
        cout << "1 is stored in a";
        break;
    case 2:
        cout << "2 is stored in a";
        break;
    case 3:
        cout << "2 is stored in a";
        break;
    default:
        cout<<"None of the value matched";
        break; 
    }
    return 0;
}