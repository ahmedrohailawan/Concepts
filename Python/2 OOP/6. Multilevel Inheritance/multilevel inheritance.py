# multilevel inheritance

# base class
class Animal:
  def eat(self):
    print("Eating...")

# intermediate class
class Dog(Animal):
  def bark(self):
    print("Barking...")
# derived class 
class Babydog(Dog):
  def weep(self):
    print("Weeping...")

# drivers code
dog = Babydog()
dog.eat()
dog.bark()
dog.weep()
