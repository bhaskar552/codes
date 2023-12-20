#include <iostream>
using namespace std;
class count
{
    int objNo;
    static int objcnt;
    public:
    void ObjNumber()
    {
        objcnt++;
        objNo=objcnt;
        cout << "object number :" << objNo << "\n";
    }
    static void ObjCount()
    {
        cout << "count:" << objcnt<< "\n";
    }

};
int count::objcnt=0;
int main()
{
    count t1, t2;
    count t3;
    t1.ObjNumber();
    t2.ObjNumber();
    t3.ObjNumber();
    count::ObjCount();
    return 0;
}
