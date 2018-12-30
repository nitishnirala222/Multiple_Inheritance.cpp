#include<iostream>
using namespace std;
class A
{
protected:
int a;
public:
int setValue1(int );
};
int A::setValue1(int x)
{
a=x;
}
class B
{
protected:
int b;
public:
int setValue2(int );
};
int B::setValue2(int y)
{
b=y;
}
class C:public B,public A
{
int c;
public:
int add();
int display();
};
int C::add()
{
c=a+b;
}
int C::display()
{
cout<<"value of a: "<<a<<endl;
cout<<"value of b: "<<b<<endl;
cout<<"Addition of a and b is : "<<c<<endl;
}
int main()
{
C c1;
c1.setValue1(100);
c1.setValue2(500);
c1.add();
c1.display();
}
