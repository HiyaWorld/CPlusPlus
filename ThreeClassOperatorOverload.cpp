// Online C++ compiler to run C++ program online
#include <iostream>
using std::cout;
class Mule;
class Horse;

class Donkey
{
    private: int donkeyid;
    public:
    Donkey()
    {
       cout<<"donkey created\n"; 
    }
    friend void Jockey(Mule m1, Donkey d1, Horse h1);
};

class Mule
{
    private: int muleid;
    public:
    Mule()
    {
       cout<<"Mule created\n"; 
    }
    friend void Jockey(Mule m1, Donkey d1, Horse h1);
};

class Horse
{
    private: int horseid;
    public:
    Horse()
    {
       cout<<"Horse created\n"; 
    }
    Mule operator+(Donkey d)
    {
        return Mule();
    }
    friend void Jockey(Mule m1, Donkey d1, Horse h1);
};

void Jockey(Mule m1, Donkey d1, Horse h1)
{
    int i = m1.muleid;
    int j = h1.horseid;
}

int main() {
    // Write C++ code here
    Horse h;
    Donkey d;
    Mule m = h + d;

    return 0;
}
