#method overloading
from multipledispatch import dispatch
class sample: 
  @dispatch(int,int)
  def product(first,second):
      result = first*second
      print(result);
    
  @dispatch(int,int,int)
  def product(first,second,third):
      result  = first * second * third
      print(result);
    
  @dispatch(float,float,float)
  def product(first,second,third):
      result  = first * second * third
      print(result);


#calling product method with 2 arguments
c = sample()
c.product(2,3)
c.product(2,3,2) #this will give output of 12
c.product(2.2,3.4,2.3) # this will give output of 17.985999999999997
