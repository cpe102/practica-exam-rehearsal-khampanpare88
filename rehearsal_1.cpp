#include <iostream>
using namespace std;
int main()
{   string x;
    double y;
    cout<<"What is your name: ";
    cin>>x;
    cout<<"What is your GPA: ";
    cin>>y;
    if(y>=3.5){
        cout<<x<<" InW Jrim Jrim!!!";
    }
    else
    {
        cout<<"Try harder, "<<x<<"!!!";
    }
    
    return 0;
}
