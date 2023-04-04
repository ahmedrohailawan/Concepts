# instance method

class student:
  def __init__(self,name,regno):
    self.name = name              #instance vaiables
    self.regno = regno            #instance vaiables
  def show (self):
    print(self.name," reg no is ",self.regno)     # intance method



#driver code
s = student("ahmed",200)
s.show()        # calling instance method
