from collections import deque
class Stack:
  def __init__(self):
    self.container=[]
  def push(self,val):
    self.container.append(val)
  def pop(self):
    return self.container.pop()
  def top(self):
    return (self.container[-1])
  def is_empty(self):
    return len(self.container)==0
  def size(self):
    return len(self.container)
  def print_stack(self):
    for x in range(self.size()):
      print(self.container.pop())


if __name__=='__main__':
  s=Stack()
  def Menu():
    print("--------------------Menu-----------------")
    print("1. Push")
    print("2. Pop")
    print("3. top")
    print("4. is empty")
    print("5. size")
    print("6. print")
    print("7. exit")
    ch= eval(input("Enter choice "))
    return ch

  while True:
    ch = Menu()
    if ch==1:
      data=input("Enter value : ")
      s.push(data)
    elif ch==2:
      print(s.pop())
    elif ch==3:
      print(s.top())
    elif ch==4:
      print(s.is_empty())
    elif ch==5:
      print(s.size())
    elif ch==6:
      print("\n<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>")
      print("\t\tstack")
      s.print_stack()
      print("<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>\n")
    else:
      print("Exit")
      break
