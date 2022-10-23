#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int pow(int t,int k)
{
    int p=1;
    for(int i=1;i<=k;i++)
    {
        p*=t;
    }
    return p;
}
int main()
{
    int n;
    cin>>n;
    int cp=n,c=0;
    while(n>0)
    {
        n=n/10;
        c++;
    }
    int s=0;
    while(cp>0)
    {
        int d=cp%10;
        s+=pow(d,c);
        cp=cp/10;
    }
    cout<<s;
}