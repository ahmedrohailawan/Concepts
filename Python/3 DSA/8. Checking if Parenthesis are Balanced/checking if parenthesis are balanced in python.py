# stack class

from collections import deque
class Stack : 
    def __init__(self):
        self.container=deque()
    def push(self,val):                           #making push function
        self.container.append(val)
    def pop(self):                                #making pop function
        return self.container.pop()
    def top(self):                               #making top function
        return container[-1]
    def is_empty(self):                          #check if stack is empty or not
        return len(self.container)==0
    def size(self):                              #to find the size of stack
        return len(self.container)

# function to check parenthesis in the expression 


def check_parenthesis(expression):                     #function for checking parenthesis
    s=Stack()
    parenthesis = {'(':')','[':']','{':'}'}            #using python dectionar having concept of keys and values concept
    for x in expression:                               #loop to traverse in a string 
        if x in parenthesis.keys():                    #for open parenthesis                   
            s.push(x)                                  #to append value
        elif x in parenthesis.values():                # for closing partenthesis
            popped = ""                                
            if not s.is_empty():
                popped = s.pop()
            if s.is_empty() and popped == "":
                print("Invalid Expression , not balanced")
                return
    if s.is_empty():
        print("Valid Expression")
    else:
        print("Invalid Expression")


check_parenthesis("{a+b}")                          #valid

check_parenthesis("))((a+b}{")                      #invalid

check_parenthesis("((a+b))")                        #valid

check_parenthesis("[a+b]*(x+2y)*(gg+kk)")           #valid

check_parenthesis("))")                             #invalid
