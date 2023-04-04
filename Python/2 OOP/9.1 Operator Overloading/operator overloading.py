# operator overloading
class Sample:
  def __init__(self,a,b):
    self.a = a
    self.b = b
  def __addition__(self):
    return self.a + self.b
  def __add__(self,other):
    return self.a + other.a, self.b + other.b


# driver code
obj1 = Sample(2,3)
obj2 = Sample(4,5)
obj3 = obj1 + obj2
print(obj3)



# to check if two objects are equal or not 
class A:
    def __init__(self, a):
        self.a = a
    def __lt__(self, other):
        if(self.a<other.a):
            return "ob1 is lessthan ob2"
        else:
            return "ob2 is less than ob1"
    def __eq__(self, other):
        if(self.a == other.a):
            return "Both are equal"
        else:
            return "Not equal"
                 
ob1 = A(2)
ob2 = A(3)
print(ob1 < ob2)
 
ob3 = A(4)
ob4 = A(4)
print(ob1 == ob2)

