// Online C++ compiler to run C++ program online
#include <iostream>

class Testclass
{
    public:
        int TestOne(int num, long two) // function overloading
        {
            return 1;
        }
        int TestOne(std::string two, int num)
        {
            return 1;
        }
};

int main() {
    // Write C++ code here
    std::cout << "Start small. Ship something.";
    Testclass mylovelyobj;
    mylovelyobj.TestOne( 5, 2 ); // distinguish and resolve
    return 0;
}
