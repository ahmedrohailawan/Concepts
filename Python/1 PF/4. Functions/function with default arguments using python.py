#function with default arguments
def default(country="Pakistan"):
  print("i am from "+country)
if __name__=='__main__':
  default("India")
  default("England")
  default()
