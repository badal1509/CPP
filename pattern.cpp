#include<iostream>
using namespace std;
int main() {
    cout<<"enter no of row :";
    int n;
    cin >> n;
    int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
