
#include <iostream>

using namespace std;

int a[10],n;

void init ()
{
    cin >> n; //nhap n;
}

void output()
{
    for(int i=0;i<n;i++)
        cout << a[i];
    cout << endl;
}

void Try(int i)
{
    for(int j=0;j<=1;j++)
    {
        a[i]=j;
        if(i==n-1)   //
            output();
        else
            Try(i+1); //
    }
}

int main()
{
    init();  //
    Try(0);
}
