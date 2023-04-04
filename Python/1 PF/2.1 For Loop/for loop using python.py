#for loop using python 
num = [1,2,3,4,5,6,7,8,9]
sum =0
for x in num:
  sum += x
  print("number = ",x)
  print("The sum is ",sum)
else:
  print("All done!")

#for loop with if else
student="ahmed"
listofstudent=["awais",'mobeen','usman','ahmed']
for x in listofstudent:
  if x == student:
    print("Student is in the list")
    break
else:
  print("student is not found") 
