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
               
            std::cout << startnum << " factorial is : "; 
            return answer;
        }
        Factorial operator-(Factorial s);
        Factorial operator+(Factorial s);
        void operator++();
};

Factorial Factorial::operator-(Factorial sanj)
{
  Factorial answerobj(startnum - sanj.startnum);
  return answerobj;
}

Factorial Factorial::operator+(Factorial sanj)
{
  Factorial answerobj(startnum + sanj.startnum);
  return answerobj;
}
void Factorial::operator++()
{
  startnum = startnum + 1;
}

int main() {
    // Write C++ code here
    Factorial obj_six(6);
    Factorial obj_two(2);
    
    std::cout << obj_six.Calculate() << std::endl;
    std::cout << obj_two.Calculate() << std::endl;
    
    Factorial obj_eight = obj_six + obj_two;
    std::cout << obj_eight.Calculate() << std::endl;
    
    Factorial obj_four = obj_six - obj_two;
    std::cout << obj_four.Calculate() << std::endl;
    
    ++obj_six;
    std::cout << obj_six.Calculate() << std::endl;

    return 0;
}
