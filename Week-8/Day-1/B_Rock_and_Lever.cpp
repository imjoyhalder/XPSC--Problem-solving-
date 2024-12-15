#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
     int n;
     cin>>n;
     long long int a[n];long long int s=0;
     for(int i=0;i<n;i++)
     cin>>a[i];
       long long int b[33]={0};
       for(int i=0;i<n;i++)
       {
         long long int z=a[i];int c=0;
         while(z>0)
         {
           z=z/2;
           c++;
         }
       b[c]++;
     }
     for(int i=0;i<=32;i++)
     {
       if(b[i]>=2)
       s=s+(b[i]*(b[i]-1)/2);
     }
     cout<<s<<endl;
   }
 }