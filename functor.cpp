//How to define and use functor
#include<iostream>

using namespace std;

class testing
{
    int a;
    public:
    testing()
    {
        a = 2;

    }
    // you have to define operator() to use the class object as function
    int operator()(int i)
    {
        cout<<"chekcing my functor"<<endl;
        
        return a;

    }
};

int main()
{
    testing t;
    //t.a;

    cout<<"value is "<<t(2)<<endl;
    ;
}