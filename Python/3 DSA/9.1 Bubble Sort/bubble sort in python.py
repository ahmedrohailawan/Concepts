def bubblesort(arr):
  n=len(arr)
  for i in range(n-1):
    for j in range(n-i-1):
      if arr[j]>arr[j+1]:
        arr[j],arr[j+1]=arr[j+1],arr[j]

if __name__=="__main__":
  arr=[5,4,1,2,3]
  bubblesort(arr)
  for i in range(len(arr)):
    print(arr[i])
