#passing list to a function 
def names(name):
  for x in name:
    print("name is ",x)
if __name__=='__main__':
  name=['ahmed','awais','mobeen','usman']
  names(name)
