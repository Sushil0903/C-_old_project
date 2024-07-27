#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array=";
    cin>>n;

    int array[n];
    cout<<"Enter the elements";

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    cout<<"Even number from array are =";
    for (int  i = 0; i < n; i++)
    {
        if (array[i]%2==0)
        {
            cout<<array[i];
        }
        
    }
    


    
}
