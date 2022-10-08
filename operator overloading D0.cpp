//program on operator overloading
#include <iostream>
using namespace std;
class Count 
{
    int value;
   public:
    Count() : value(5) {}
    //using of unary arithmetic operators
    //using of subraction 
    void operator -- () 
	{
        --value;
    }
    void display() 
	{
        cout <<value;
    }
};
int main() 
{
    Count count1;
    --count1;
    //calling of void operator
    count1.display();
    return 0;
}
