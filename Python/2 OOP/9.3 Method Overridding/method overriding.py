#method overriding
class parent:
  def __init__(self):
    self.value = "inside parent"
  def show(self):
    print(self.value)
  def print(self):
    print("This is not child class")

class child(parent):
  def __init__(self):
    self.value = "inside child"
  def show(self):
    print(self.value)

# driver code
c = child()
c.show()                # parent method is overrideen by child class
c.print()
