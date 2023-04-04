#program to traverse a tree in postorder,preorder and inorder with recursion 

#creating a node class
class Node:
  def __init__(self,info):
    self.info = info
    self.left = None 
    self.right=None
    self.level=None
  def __str__(self):
    return str(self.info)

#creating a tree function 
class searchtree:
  def __init__(self):
    self.root=None

  def create(self,val):
    if self.root == None:
      self.root = Node(val)
    else:
      current = self.root
      while 1: 
        if val < current.info:
          if current.left:
            current = current.left 
          else:
            current.left = Node(val)
            break;
        elif val > current.info:
            if current.right:
              current = current.right 
            else:
              current.right = Node(val)
              break;
        else:
            break;
  #creating an inorder tree traversal fucntion 
  def inorder(self,node):
    if node is not None:
      self.inorder(node.left)
      print (node.info)
      self.inorder(node.right)

  #creating a preorder tree traversal fucntion
  def preorder(self,node):
    if node is not None:
      print (node.info)
      self.inorder(node.left)
      self.inorder(node.right)

  #creating a postorder tree traversal function 
  def postorder(self,node):
    if node is not None:
      self.inorder(node.left)
      self.inorder(node.right)
      print (node.info)

      
if __name__=='__main__':
  tree= searchtree()
  arr = [8,3,1,6,4,7,10,14,13]
  for i in arr:
    tree.create(i)

  print("Inorder traversal")
  tree.inorder(tree.root)

  print("Preorder traversal")
  tree.preorder(tree.root)

  print("Postorder traversal")
  tree.postorder(tree.root)
