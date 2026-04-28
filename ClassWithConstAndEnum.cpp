// Online C++ compiler to run C++ program online
#include <iostream>

typedef enum PossibleCutenessValues
{
    VeryUgly = 1,
    Ugly,
    Normal,
    Cute,
    SuperCute,
} PossibleCutenessValues;

class Animal
{
  public:
  Animal(PossibleCutenessValues BirthValue)
  {
      HowCuteAmI = BirthValue;
  }
  protected: 
    PossibleCutenessValues HowCuteAmI;
};

int main() {
    // Write C++ code here
    Animal Lion(SuperCute);

    return 0;
}
