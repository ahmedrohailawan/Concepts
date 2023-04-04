class Employee():
  def __init__(self):
    print("Employee created successfully")
  def __del__(self):
    print("Destructor called, Employee object deleted")

obj1 = Employee()
del obj1
