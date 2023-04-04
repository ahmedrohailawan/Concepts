# exception error printing using sys module which is going to print details of error occured
import sys
class listappend():
  x = [1,2,3,4,'a']
  def append(self,a):
    listappend.x.append(a)
class average(listappend):
  def cal(self):
    try:
      print(sum(listappend.x)/len(listappend.x))
    except TypeError:
      print("error occured", sys.exc_info())
    except:
      print("error occured")
    finally:
      print("done!")

obj = average()
obj.cal()
