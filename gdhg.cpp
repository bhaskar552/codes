#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string n = "aaaaa";
    string m = "bbb";

    if (n.size() <= m.size())
    {
        int cnt = -1
    }

    if (n.size() > m.size())
    {
        string x, y;


       cnt=0;

       if(n.size()%2!=0)
          {
                x=n.substr(0,n.size()/2);
                y=n.substr(n.size()/2+1);
              reverse(y.begin(),y.end());
         }
           else if(n.size()%2==0)
           {
               x=n.substr(0,n.size()/2);
               y=n.substr(n.size()/2);
               reverse(y.begin(),y.end());
           }
               for(int i=0;i<n.size();i++)
                   if(x[i]!=y[i])
                   cnt++;
             cout<<cnt<<endl;
   }

 }
