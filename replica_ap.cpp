#include <iostream>
#include <stdio.h>
class Monitor
{
    public:
    Monitor& operator<<(int x)
    {
        printf("%d",x);
        return *this;
    }
    Monitor& operator<<(const char *x)
    {
        printf("%s",x);
        return *this;
    }
    Monitor& operator<<(const char c)
    {
        printf("%c",c);
        return *this;
    }
    Monitor& operator<<(double x)
    {
        printf("%f",x);
        return *this;
    }
    Monitor& operator<<(float x)
    {
        printf("%f",x);
        return *this;
    }
    Monitor& operator<<(void(*p2f)())
    {
        p2f();
        return *this;
    }
};
class Keyboard
{
    public:
    Keyboard& operator>>(int &x)
    {
        scanf("%d",&x);
        fflush(stdin);
        return *this;
    }
    Keyboard& operator>>(float &x)
    {
        scanf("%f",&x);
        fflush(stdin);
        return *this;
    }
    Keyboard& operator>>(double &j)
    {
        scanf("%le",&j);
        fflush(stdin);
        return *this;
    }
    Keyboard& operator>>(char *x)
    {
        scanf("%s",x);
        fflush(stdin);
        return *this;
    }
    Keyboard& operator>>(char c)
    {
        scanf(" %c",&c);
        fflush(stdin);
        return *this;
    }
};
namespace replica_ap
{
    Monitor mout;
    Keyboard kin;
    void nextLine()
    {
        printf("\n");
    }
}

using namespace replica_ap;
int main()
{
   int x;
   mout<<"Enter a Integer :";
   kin>>x;
   mout<<"Integer is :"<<x<<nextLine;
   mout<<'A'<<nextLine;
   mout<<"Ayush"<<nextLine;
   mout<<"2.34"<<nextLine;
   mout<<2.43<<nextLine;
    return 0;
}






