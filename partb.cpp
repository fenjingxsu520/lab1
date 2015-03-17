#include <iostream>
using namespace std;
int main (void)
{
    int n;
    cin>>n;
    N:cout<<n<<endl;
    if(n==1)
        goto A;
    else if(n%2==1)
        n = 3*n + 1;
    else if(n%2==0)
        n = n/2;
        goto N;
        A:return 0;
}


