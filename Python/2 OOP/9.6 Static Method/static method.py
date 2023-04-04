# static method in python
class employee:
  def __init__(self,name,salary,project_name):
    self.name = name
    self.salary = salary
    self.project_name = project_name
  @staticmethod
  def gather_requirement(project_name):
    if project_name == "ABC project":
      requirement = ["task1","task2","task3"]
      return requirement
    else:
      requirement = ["task4"]
      return requirement
  def work(self):
    #calling static method from instance method
    print("these following task are for",self.name)
    requirement = self.gather_requirement(self.project_name)
    for x in requirement:
      print("complete",x)

#driver code
emp1 = employee("ahmed",200,"ABC project")
emp1.work()

emp2 = employee("daniyal",200,"xyz project")
emp2.work()
