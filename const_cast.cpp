// taken from microsoft 
// const_cast 
// Removes the const, volatile, and __unaligned attribute(s) from a class.
#include <iostream>

using namespace std;
class CCTest {
public:
   void setNumber( int );
   void printNumber() const;
private:
   int number;
};

void CCTest::setNumber( int num ) { number = num; }

// function is const, meaning const this pointer.
void CCTest::printNumber() const {
   cout << "\nBefore: " << number;
   // taking away constness of const this*
   const_cast< CCTest * >( this )->number--;
   cout << "\nAfter: " << number;
}

int main() {
   CCTest X;
   X.setNumber( 8 );
   X.printNumber();
}