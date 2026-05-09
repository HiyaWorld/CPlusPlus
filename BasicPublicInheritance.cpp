// Online C++ compiler to run C++ program online
#include <iostream>
using std::string;

class animal
{
    protected:
        string name;
        int age;

    public:
        string makesound()
        {
            return "cutie sound";
        }
        string getinfo()
        {
            return "cute animal";
        }
        animal()
        {
          std::cout<< "Gave birth to an animal\n";
        }
};

class dog:public animal
{ 
    public:
    dog()
    {
        std::cout<< "Gave birth to a dog\n";
    }
    string makesound()
        {
            return "woof";
        }
};


int main() 
{
   dog cookie;
   std::cout <<cookie.makesound();
}


