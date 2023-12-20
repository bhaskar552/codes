#include<iostream>
#include<string.h>
using namespace std;
class student
{
  char *name;
  int len;
public:
  student()
  {
    len=0;
    name=new char[len+1];
    strcpy(name,"");
    cout<<"1st done \n";
  }
  student(char *n)
  {
    len=strlen(n);
    name-new char[len+1];
    strcpy(name,n);
    cout<<"2nd done \n";
  }
  student(student &s)
  {
    len=s.len;
    name=new char[len+1];
    strcpy(name,s.name);
    cout<<"3rd done \n";
  }
  ~student()
  {
    cout<<"destructor called \n";
  }
};
int main()
{
  student s1("abc");
  student s2;
  student s3(s1);

  return 0;

}
