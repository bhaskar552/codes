#include <iostream>
#include <string.h>
using namespace std;
int lastlength(string st)
{
  int l, i, c = 0;
  l = st.length();
  for (i = l - 1; i >= 0; i--)
  {
    if (st[i] == ' ' & c != 0)
    {
      break;
    }
    else
    {
      c++;
    }
  }
  return c;
}
int main()
{
  string s;
  cout << "enter a string => ";
  getline(cin, s);
  cout << "\n the length of the last word is " << lastlength(s);
  return 0;
}
