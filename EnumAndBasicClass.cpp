// Online C++ compiler to run C++ program online
#include <iostream>

enum PossibleCutenessValues
{
    VeryUgly = 1,
    Ugly,
    Normal,
    Cute,
    SuperCute,
};

class Animal
{
  public:
  Animal(enum PossibleCutenessValues BirthValue)
  {
      HowCuteAmI = BirthValue;
  }
  protected: 
  enum PossibleCutenessValues HowCuteAmI;
};

int main() {
    // Write C++ code here
    Animal Lion(SuperCute);

    return 0;
}
