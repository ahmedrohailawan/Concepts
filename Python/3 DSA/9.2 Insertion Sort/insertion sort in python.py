def insertion_sort_acending(arr):
  for i in range(1,len(arr)):
    key = arr[i]
    j = i-1
    while j>=0 and key < arr[j]:
      arr[j+1]=arr[j]
      j-=1
    arr[j+1]=key
#print function
def print_arr(arr):
  for i in range(len(arr)):
    print(arr[i])

#taking input of array
arr=[]
n = int(input("Enter length of array "))
for i in range(0,n):
  arr.append(input())

#acending order
insertion_sort_acending(arr)
print("acending order is ")
print_arr(arr)
