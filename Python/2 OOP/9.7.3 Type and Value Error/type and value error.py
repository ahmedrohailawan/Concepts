# type error and value error

class list_append():
  x = []
  def append(self,a):
    list_append.x.append(a)
    print(list_append.x)

class evenonly(list_append):
  def append(self,a):
    if not isinstance(a,int):
      raise TypeError("Only intergers are allowed")
    if a%2 != 0:
      raise ValueError("Only even numbers allowed")
    super().append(a)

lst = evenonly()
lst.append(2)
lst.append(4)
