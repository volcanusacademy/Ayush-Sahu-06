/*
Create a simple hierarchy of animals (e.g., Dog, Cat, Bird) with a common method makeSound(). 
Implement polymorphism by overriding this method in each animal class and
 demonstrate how you can make different animals produce their respective sounds using polymorphism.*/
#include<iostream>
using namespace std;
// Base class
class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound \n";
    }
};

// Derived class
class Cat : public Animal {
  public:
    void animalSound() {
      cout << "The Cat says: Meow Meow  \n";
    }
};
// Derived class
class Bird : public Animal {
  public:
    void animalSound() {
      cout << "The Bird says: Koo KOO  \n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog says: bow wow \n";
    }
};

int main() {
  Animal myAnimal;
  Cat myCat;
  Dog myDog;
  Bird myBird;

  myAnimal.animalSound();
  myDog.animalSound();
  myCat.animalSound();
  myBird.animalSound();
  return 0;
}