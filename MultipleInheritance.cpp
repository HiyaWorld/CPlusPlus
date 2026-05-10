// Online C++ compiler to run C++ program online
#include <iostream>
using std::string;
// operator overloading
// list of operators: + , -, *, / , %, ++ , --, +=, -=,, =, ==, ., !=, &&, || : some need two operands to operate
// some need only one operand: unary operators
// assignment operator vs comparison operator
class animal
{
    protected:
        string name;
        int age;

    public:
        string makesound()
        {
            return "cutie sound\n";
        }
        string getinfo()
        {
            return "cute animal";
        }
        animal() //constructor
        {
          std::cout<< "An cutie animal is created \n";
        }
        ~animal() // destructor
        {
          std::cout<< "Animal in taking a nap\n";
        }
};

class Canine
{
    protected:
        int numberOfTeeth;
        bool canBeAPet;
    
    public: 
        string DoATrick()
        {
            return "ShakeHand";
        }
        Canine() //constructor
        {
          std::cout<< "A canine is being created\n";
        }
        ~Canine() // destructor
        {
          std::cout<< "Bedtime Canine.\n";
        }
};

class dog: public Canine, public animal
{ 
    
    
    public:
    dog()
    {
        name = "dog";
        std::cout<< "Gave birth to a dog\n";
    }
    ~dog()
    {
        std::cout<< "Dog please sleep\n";
    }
   string makesound()
        {
            return "woof\n";
        }
};


int main() 
{
   dog cookie;
   //cookie.name = "cookie";
   std::cout <<"The dog's name is cookie and the sound it makes is " <<cookie.makesound();
}
