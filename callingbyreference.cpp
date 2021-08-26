#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
 int temp = *a;
 *a = *b;
 *b = temp;
}

int main()
{
    int a = 10 , b = 20;
    int *apt = &a , *bpt = &b;
     swap(apt,bpt);
     cout<<a<<" "<<b;
     return 0;
}