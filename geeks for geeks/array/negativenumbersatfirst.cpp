#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    }
    int i=1;int t;
    while(i<n)
    {
    	if(a[i]<0&&a[i-1]>0)
    	{
    		int j=i;
    		while(j>=1&&a[j-1]>0)
    		{
    			t=a[j];
    			a[j]=a[j-1];
    			a[j-1]=t;
    			j--;
    		}
    	}
    	i++;
    }
    for(int i=0;i<n;i++)
    {
    	cout<<a[i]<<" ";
    }
} 

