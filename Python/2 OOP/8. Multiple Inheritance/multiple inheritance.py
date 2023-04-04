#4 mutiple inheritance

# base class 1
class Name:
  name = ""
  def name(self):
    print(self.name)

# base class 2
class Reg_no:
  reg_no = ""
  def reg_no(self):
    print(self.reg_no)

# derived class
class Student(Name,Reg_no):
  def student(self):
    print("student Name is : ",self.name)     
    print("student Reg# is : ",self.reg_no)

    # it can not access name if it is private
    # it can not access reg_no if it is private



# drivers code
s1 = Student()
s1.name = "Ahmed"
s1.reg_no = "200901124"
s1.student()
