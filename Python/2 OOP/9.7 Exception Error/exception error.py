amount = 100
try:
  a = amount/0
  print(a)
except:
  print("an Error occured")

print("next command will be executed because")
print("error has been")
print("handled")




# catching specific error
def fun(a):
  b = a/(a-3)
  print(b)

try:
  fun(4)
  fun(3)
  fun(5)
except ZeroDivisionError:
  print("zero division error occured in case of 3")
except:
  print("an error occured")
finally:
  print("The operation is completed")

