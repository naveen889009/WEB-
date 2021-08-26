#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n];
    for(int i = 0 ; i <n ; i++)
    {
        cin >> arr[i];
    }

        for(int i = 0 ; i <n ; i++)
    {
        switch(arr[i])
        {
            case 'B':
            case 'b':
            {
                cout<<"BattleShip"<<endl;
                break;
            }
            case 'C':
            case 'c':
            {
                cout<<"Cruiser"<<endl;
                break;
            }
            case 'D':
            case 'd':
            {
                cout<<"Destroyer"<<endl;
                break;
            }
            case 'F':
            case 'f':
            {
                cout<<"Frigate"<<endl;
                break;
            }
        }
    }

    return 0;
}