input1=input("Enter the list1 elements separated with commas:")
input2=input("Enter the list2 elements separated with commas:")
list1=input1.split(",")
print('list1=',list1)

def positive(x):
    if int(x)>0:
        return x
result1=filter(positive,list1)
print("output1=",list(result1))
        
list2=input2.split(",")
print('list2=',list2)
result2=filter(positive,list2)
print("output2=",list(result2))
