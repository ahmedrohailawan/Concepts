class Node:
  def __init__(self,data):
    self.data=data
    self.next=None
    print("First Node created",data)
class cllist:
  def __init__(self):
    self.head=None
    self.ctr=0

  #function to insert a node at the beggining  
  def insert_beg(self,data):
    node = Node(data)
    if self.head==None:
      self.head=node
      node.next=self.head
    else:
      temp=self.head
      while(temp.next is not self.head):
        temp=temp.next
      temp.next=node
      node.next=self.head
      self.head=node
    print("Node inserted ",data)
    self.ctr+=1
    return 

  #function to insert a node at the end
  def insert_end(self,data):
    node = Node(data)
    if self.head==None:
      self.head=node
      node.next=self.head
    else:
      temp=self.head
      while temp.next is not self.head:
        temp=temp.next
      temp.next=node
      node.next=self.head
    self.ctr+=1
    print("Node inserted ",data)
    return


  #fucntion to traverse in a circular linked list  
  def traversal(self):
    temp=self.head
    i=0
    while i<self.ctr:
      print(temp.data)
      temp=temp.next
      i+=1
    return
def Menu():
  print("1. Insert at beggining")
  print("2. Insert at the end")
  print("3. Traverse")
  print("4. Exit")
  ch=eval(input("Enter choice"))
  return ch
c=cllist()
print("**************Circulat Linked List*************")
while True:
    ch=Menu()
    if ch==1:
      data=input("Enter data : ")
      c.insert_beg(data)
    elif ch==2:
      data=input("Enter data : ")
      c.insert_end(data)
    elif ch==3:
      c.traversal()
    else:
      print("Exit")
      break
