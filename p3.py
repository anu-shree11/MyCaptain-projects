terms=int(input("Enter the number of terms:"))
a, b= 0, 1
count=0
if terms <= 0:
    print("Please enter a positive number")
elif terms == 1:
    print("The fibonacci series upto",terms)
    print(a)
else:
    print("The fabinocci series upto",terms,"terms is:")
    while count < terms:
        print(a, end=" ")
        c=a+b
        a=b
        b=c
        count+=1
