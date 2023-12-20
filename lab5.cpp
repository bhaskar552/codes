#include<iostream>
using namespace std;
class complex
{ float real,imag;
public:
complex() //default
{
  cout<<"default constructor invoked\n";
  real=0;imag=0;
}
complex(float r, float i) //parameterized
{
   real=r; imag=i;
}
complex(complex &C) //copy
{ real=C.real; //complex &amp;C=C2;
imag=C.imag;
}
void input()
{
  cout<<"enter the complex number \n";
  cin>>real>>imag;
}
void display()
{
   cout<<real<<"+i"<<imag<<endl;
}
};

int main()
{ cout<<"In main\n";
complex C1,C2;
C1.display(); //0+i0
C2.input(); //2.5 1.5
C2.display(); //2.5+i1.5
complex C3(3.5,4.5);
complex C4=C3;
//complex C4(C2);
C4.display(); //2.5+i1.5
return 0;
}
