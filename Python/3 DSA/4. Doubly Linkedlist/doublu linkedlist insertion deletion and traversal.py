#creating a node
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None

#creating a doubly linked list class
class dllist:
    def __init__(self):
        self.head = None

    #function to insert at value in the beggining
    def insert(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        if self.head is not None:
            self.head.prev = new_node
        self.head = new_node

    #function to insert value at a given position
    def insert_at_any_position(self, prev_node, new_data):
        if prev_node is None:
            print("No previous node in the list")
            return
        new_node = Node(new_data)
        new_node.next = prev_node.next
        prev_node.next = new_node
        new_node.prev = prev_node
        if new_node.next:
            new_node.next.prev = new_node

    #function to insert a value at the end
    def insert_at_end(self, new_data):
        new_node = Node(new_data)
        if self.head is None:
            self.head = new_node
            return
        last = self.head
        while last.next:
            last = last.next
        last.next = new_node
        new_node.prev = last
        return
    #function to delete a node at start mid and end
    def deletenode(self, dele):
        if self.head is None or dele is None:
            return
        if self.head == dele:
            self.head = dele.next
        if dele.next is not None:
            dele.next.prev = dele.prev
        if dele.prev is not None:
            dele.prev.next = dele.next
 

    #functio to print doubly linked list    
    def printlist(self, node):
        while node:
            print(node.data)
            last = node
            node = node.next

if __name__=='__main__':
    dllist = dllist()
    dllist.insert(1)
    dllist.insert(2)
    dllist.insert(3)
    dllist.insert(4)
    dllist.insert_at_any_position(dllist.head.next,8)
    dllist.insert(5)
    dllist.insert_at_end(9)
    print("insertion in the Doubly linked list\n")
    dllist.printlist(dllist.head)
    print("\ndeletion in the Doubly linked list\n")
    dllist.deletenode(dllist.head)
    dllist.deletenode(dllist.head.next.next)
    dllist.deletenode(dllist.head.next.next.next.next)
    dllist.printlist(dllist.head)
