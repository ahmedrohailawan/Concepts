#node class
class Node:
    def __init__ (self, data):
        self.data=data
        self.next=None

#linked list class
class Linkedlist:
    def __init__(self):
        self.head = None 
    
    #to insert a node at head    
    def insert_at_head(self,new_data):
        new_node = Node(new_data)  
        new_node.next= self.head
        self.head = new_node
    
    #to insert a node at tail
    def insert_at_tail(self,new_data):
        new_node = Node(new_data)
        if self.head is None:
            self.head=new_node
            return
        last = self.head
        while (last.next):
            last = last.next
        last.next=new_node
    
    #to insert a node at a given position
    def insert_at_any_position(self,prev_node,new_data):
        if prev_node is None:
            print("The previous node is not in the list")
            return
        new_node=Node(new_data)
        new_node.next=prev_node.next
        prev_node.next=new_node
        
    #to delete a node 
    def delete_node(self, value):
        temp=self.head
        if temp is not None:
            if temp.data==value:
                self.head=temp.next
                temp=None
                return
        while(temp is not None):
            if temp.data==value:
                break
            prev = temp
            temp = temp.next
        if temp==None:
            return
        prev.next=temp.next
        temp=None
        
    
    #To print list
    def printlist(self):
        temp=self.head
        while(temp):
            print(temp.data)
            temp=temp.next

#execution will be started from here      
if __name__=='__main__':
    llist=Linkedlist()
  
    #making nodes 
    llist.head=Node(1)
    second=Node(2)
    third=Node(3)
    #linking nodes
    llist.head.next=second
    second.next=third
    print("\tLinked list")
    llist.printlist()
    
    #insertion
    llist.insert_at_head(4)                                        #insertion at a head
    llist.insert_at_tail(5)                                        #insertion at the tail
    llist.insert_at_any_position(llist.head.next.next,6)      #insertion at any position
    print("\tInsertions in the linkedlist")
    llist.printlist()
    
    #deletion
    llist.delete_node(4)                                           #deletiong from the head
    llist.delete_node(5)                                           #deleting from the tail
    llist.delete_node(6)                                           #deleting at any position
    print("\tDeletion in the linkedlist")
    llist.printlist()
