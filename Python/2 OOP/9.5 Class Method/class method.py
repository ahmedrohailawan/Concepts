#class method

class student:
  school_name = "ABC school"      #class vaiable
  def __init__(self,name,regno):
    self.name = name              #instance vaiables
    self.regno = regno            #instance vaiables

  def show (self):
    print(self.name," reg no is ",self.regno,"and he studies in ",self.school_name)     # intance method
  @classmethod
  def change_school_name(cls,name):     
    print("\nold school name was ",student.school_name)         #access class variables
    student.school_name = name                                  #modify class variables
    print("now new school name is ",student.school_name,"\n")


#driver code
s = student("ahmed",200)
s.show()                                 # calling instance method
s.change_school_name("xyz school")            #call class method
s.show() 
student.change_school_name("tuv school")      #call class method
s.show()
