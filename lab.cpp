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
  void display(student &s4)
  {
    len=s4.len;
    name=new char[len+1];
    strcpy(name,s4.name);
    strcat(name,s4.name);
    cout<<"the concateanated string is "<<name;
  }
};
int main()
{
  //student s1;
  student s2("abc");
  student s3(s2);
  s3.display(s2);
  return 0;

}
