#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    int n;
    float a;
    vector <float> v;
    while(cin>>a)
    {
       v.push_back(a);
    }
    n=v.size();
    for(int i=n/2;i<n;i++)
       cout<<v[i]<<" ";
    for(int i=0;i<=n/2-1;i++)
    {
       printf("%.2f ",v[i]);
    }
}bonus 
