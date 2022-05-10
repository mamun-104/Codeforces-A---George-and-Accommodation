
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int i,p,q,result=0;
    for(i=0;i<n;i++)
    {
        cin>>p>>q;
        if(p<q){result++;}
    }
    cout<<result<<endl;



    return 0;
}

