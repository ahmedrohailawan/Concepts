def selection_sort(arr):
  for i in range(len(arr)):
    min_index=i
    for j in range(i+1,len(arr)):
      if arr[min_index]>arr[j]:
        min_index=j
        arr[i],arr[min_index]=arr[min_index],arr[i]

if __name__=="__main__":
    arr=[]
    n = int(input("Enter length of array "))
    for i in range(0,n):
      arr.append(input())
    selection_sort(arr)
    print("Sorted array is ")
    for i in range(len(arr)):
      print(arr[i])
