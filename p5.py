def most_frequent(str1):
    dict = {}
    for n in str1:
        keys = dict.keys()
        if n in keys:
            dict[n] += 1
        else:
            dict[n] = 1
    return dict

str1=input("Enter a string: ")
result=most_frequent(str1)
print(result)
key=result.keys()
for key in result:
    print(key,"=",result.get(key))
sort=sorted(result.items(),key = lambda x : x[1], reverse=True)
print("letters in decreasing order of frequency:\n",sort)
