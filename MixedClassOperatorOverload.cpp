// Online C++ compiler to run C++ program online
#include <iostream>
using std::cout;

class Donkey
{
    public:
    Donkey()
    {
       cout<<"donkey created\n"; 
    }
};

class Mule
{
    public:
    Mule()
    {
       cout<<"Mule created\n"; 
    }
};

class Horse
{
    public:
    Horse()
    {
       cout<<"Horse created\n"; 
    }
    Mule operator+(Donkey d)
    {
        return Mule();
    }
};

int main() {
    // Write C++ code here
    Horse h;
    Donkey d;
    Mule m = h + d;
    return 0;
}
