#encapsulation
#1 public data members
print("Public variables")
class Employee1():
  def __init__(self,name,salary):
    self.name = name
    self.salary = salary
  def print(self):
    print(self.name, " salary is ",self.salary)

emp1 = Employee1("ahmed","1000")
emp1.print()
print("Employee vaiable access = ",emp1.salary)





#2 protected variables
print("--------------------")
print("Protected vaiables")
class Employee2():
  def __init__(self,name,salary):
    self.name = name
    self._salary = salary
  def print(self):
    print(self.name, " salary is ",self._salary)

emp2 = Employee2("ahmed","1000")
emp2.print()
# print("Employee vaiable access = ",emp2.salary)     this wiil not access vaiables
print("employee variable will not be access")






#3 private variables
print("-----------------")
print("private vaiables")
class Employee3():
  def __init__(self,name,salary):
    self.name = name
    self.__salary = salary
  def print(self):
    print(self.name, " salary is ",self.__salary)

emp3 = Employee3("ahmed","1000")
emp3.print()
# print("Employee vaiable access = ",emp3.salary)     this wiil not access vaiables
print("employee variable will not be access")
