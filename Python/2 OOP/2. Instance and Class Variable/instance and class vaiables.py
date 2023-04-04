# 1. class vaiables
class Bar():
  foo =2
print(Bar.foo)
Bar.foo += 2
print(Bar.foo)




# 2. instance variables
class House():
  def __init__(self,color):
    self.color = color
  def print(self):
    print("The color of the house is ",self.color)

# driver code
house1 = House("Red")
house1.print()
house2 = House("Black")
house2.print()
