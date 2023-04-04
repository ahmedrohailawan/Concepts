from collections import deque
class Queue:
  def __init__(self):
    self.container=[]
  def enqueue(self,val):
    self.container.insert(0,val)
  def dequeue(self):
    return self.container.pop()
  def front(self):
    return self.container[-1]
  def is_empty(self):
    return len(self.container)==0
  def size(self):
    return len(self.container)
  def print_queue(self):
    for i in range(self.size()):
      print(self.container.pop())

if __name__=="__main__":
  q=Queue()
  def Menu():
    print("-----------Menu")
    print("1. enqueue")
    print("2. dequeue")
    print("3. front")
    print("4. is empty")
    print("5. size")
    print("6. print")
    print("7. exit")
    ch= eval(input("Enter choice "))
    return ch
  while True:
    ch = Menu()
    if ch==1:
      data = input("Enter value ")
      q.enqueue(data)
    elif ch==2:
      print(q.dequeue())
    elif ch==3:
      print(q.front())
    elif ch==4:
      print(q.is_empty())
    elif ch==5:
      print(q.size())
    elif ch==6:
      print("\n<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>")
      print("\t\tqueue")
      q.print_queue()
      print("<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>\n")
    else:
      print("exit")
      break
