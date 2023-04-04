# creating a node class
class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
 # function to insert values in a linked list 
def insert(head, data):
    if not head:
        return Node(data)
    newNode = Node(data)
    newNode.next = head
    head = newNode
    return head
 
# function to convert singly list into circular linkedlist
def cllist(head):
    start = head
    while(head.next is not None):
        head = head.next 
    head.next = start
    return start

# function to print the circular linked list
def printlist(node):
    start = node
    while(node.next is not start):
        print("{} ".format(node.data),end="")
        node=node.next
    print("{} ".format(node.data),end="")

if __name__=='__main__':
    head=None
    head=insert(head,1)
    head=insert(head,2)
    head=insert(head,3)
    head=insert(head,4)
    head=insert(head,5)                

    cllist(head)
    printlist(head)
