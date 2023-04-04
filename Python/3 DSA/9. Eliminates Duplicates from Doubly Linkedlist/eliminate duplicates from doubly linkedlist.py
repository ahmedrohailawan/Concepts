#class node
class Node:
    def __init__(self, new_data):
        self.data = new_data
        self.next = None
        self.prev = None

#function delete node
def deletenode(head_ref, _del):
    if (head_ref == None or _del == None):
        return
    if (head_ref == _del):
        head_ref = _del.next
    if (_del.next != None):
        _del.next.prev = _del.prev
    if (_del.prev != None):
        _del.prev.next = _del.next
    return head_ref
 
#function to remove duplicates
def removeduplicates(head_ref):
    if ((head_ref) == None):
        return None
    current = head_ref
    next = None
    while (current.next != None) :
        if (current.data == current.next.data):
            _deletenode(head_ref, current.next)
        else:
            current = current.next
    return head_ref
#
#n to insert values in the list
def push(head_ref, new_data):
    new_node = Node(0)
    new_node.data = new_data
    new_node.prev = None
    new_node.next = (head_ref)
    if ((head_ref) != None):
        (head_ref).prev = new_node
    (head_ref) = new_node
    return head_ref
 
# Function to print nodes in a given doubly linked list
def printList(head):
    if (head == None):
        print("Doubly Linked list empty")
    while (head != None) :
        print(head.data, end = " ")
        head = head.next


head = None
head = push(head, 1)
head = push(head, 1)
head = push(head, 2)
head = push(head, 2)
head = push(head, 3)
head = push(head, 4)
head = push(head, 5)
head = push(head, 5)
head = push(head, 6)
 
print( "Insertion in Doubly linked list\n")
printList(head)

head = removeduplicates(head)
print("After removing duplicates")
printList(head)
