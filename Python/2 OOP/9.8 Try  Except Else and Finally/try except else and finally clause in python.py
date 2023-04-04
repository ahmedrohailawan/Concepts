class expression():
  def values(self,a,b):
    try:
      c = (a+b)/(a-b)
      print("hello")
    except ZeroDivisionError:
      print("division by zero")
    else:
      print(c)
    finally:
      print("The operation has been executed successfully")

e = expression()
e.values(3,3)
e.values(4,3)
