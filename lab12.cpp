#include<iostream>
using namespace std;
class time
{
  int hour;
  int min;
public:
  time()
  {
    cout<<"default constructer called\n";
    hour=0;
    min=0;
  }
  time(int r,int m=0)
  {
    hour=r;
    min=m;
    cout<<"parametrized constructor called\n";
  }
  time(time &t1)
  {
    hour=t1.hour;
    min=t1.min;
    cout<<"copy constructor called\n";
  }
  void show_data()
  {
    cout<<"\n hour.= "<<hour<<"\n";
    cout<<"\n min= "<<min<<"\n";
  }

};
int main()
{
  time s1;
  s1.show_data();
  time s2(3);
  s2.show_data();
  time s3(s2);
  s3.show_data();
  return 0;
}
