#include<iostream>
using namespace std;
int main()
{
    cout<<"hello world" <<endl;
    cout<<"this is mr first program in cpp"<<endl;
    for(int i=1;i<11;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}