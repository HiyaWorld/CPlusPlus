// Online C++ compiler to run C++ program online
#include <iostream>

class Factorial
{
    private:
        int startnum;
    
    public:
        Factorial(int num)
        {
            startnum = num;
        }
        int Calculate()
        {
             int answer = 1;
            
            for(int i = startnum; i>1; i--)
                answer = answer * i;
                
            return answer;
        }
        Factorial operator+(Factorial s);
};

Factorial Factorial::operator+(Factorial sanj)
{
  startnum = startnum + sanj.startnum;
  return *this;
}

int main() {
    // Write C++ code here
    Factorial obj(5);
    Factorial obj2(2);
    
    std::cout << obj.Calculate() << std::endl;
    std::cout << obj2.Calculate() << std::endl;
    
    Factorial obj3 = obj2 + obj;
    std::cout << obj3.Calculate() << std::endl;

    return 0;
}
