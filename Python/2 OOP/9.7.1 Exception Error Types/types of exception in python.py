# zero division error oocur when a number is divided by zero
try:
  x = 5/0
except:
  print("Zero division error")
  
  
  # lst errors
lst = ['1','2','3']

# index error occurs when trying to access the element of list or tuple which does not exists
try:
  print(lst[3])
except:
  print("Index error")

# type error occurs when data type of objects in operation is inapropriate
try:
  lst+2
except:
  print("Type error")

# attribute error occurs when we call an attribute which does not exist
try:
  lst.add
except:
  print("attribute error")
  
  
  
  
  
  # key error occurs when you try to access a key which does not exist in a dictionary
d = {'a':'hello'}
try:
  d['b']
except:
  print("key error")
  
  
  
  
  # name error occurs when excutin a var, func, libraray without quotes that have not been  decelared previously in code
try:
  print(x)
except:
  print("Name error")
  
  
  
  
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







# to print all builtin errors
print(dir(locals()['__builtins__']))
