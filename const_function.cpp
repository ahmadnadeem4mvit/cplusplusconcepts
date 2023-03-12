// Const member function behavior

#include<iostream>
using namespace std;

class test
{
    public:
    test()
    {
        a = 4;
    }
    mutable int a;
    const int b = 2;
    int testfunone() ;
    int testfuntwo() const;


};
// non const member function can call const member.
int test::testfunone() 
{
    cout<<a<<endl;
    return 0;
}

// const member function dont let change non const member
// Reason - you are making the this pointer const
// https://stackoverflow.com/questions/3141087/what-is-meant-with-const-at-end-of-function-declaration
// except when the member is mutable;
int test::testfuntwo() const
{
    a++;
    cout<<b<<endl;
    return 0;
}
int main()
{
    test t;
    t.testfunone();
    t.testfuntwo();
}