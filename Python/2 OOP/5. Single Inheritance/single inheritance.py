#single inheritance

# base class
class Animal:
  def eat(self):
    print("Eating...")

# derived class
class Dog(Animal):
  def bark(self):
    print("Barking...")

# drivers code
dog = Dog()
dog.eat()
dog.bark()
