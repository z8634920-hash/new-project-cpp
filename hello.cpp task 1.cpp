
#include <iostream>
using namespace std;

int main()
{
    int units;

    cout << "Enter monthly units: ";
    cin >> units;

    if (units <= 100)
    {
        cout<<"usage quantity:low usage"<<endl;
    }
    else if(units<=300)
    {
        cout<<"usage quantity:medium usage"<<endl;

    }
else
{
    cout<<"usage quantity:high usage"<<endl;
}
    return 0;
}
