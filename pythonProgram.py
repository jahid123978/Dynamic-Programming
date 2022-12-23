# import datetime
# from collections import Counter
# print(datetime.datetime.now())
# print(datetime.date.today())
# print(datetime.date.today().day)
# print(datetime.date.today().month)
# print(datetime.date.today().year)

# def pyPart(n):
#     myList = []
#     for i in range(1, n+1):
#         myList.append("* "*i)
#     print("\n".join(myList))

# pyPart(5)

# item  = int(input("Enter a number"))
# if(item<10):
#     print("Number is less than 10")
# elif(item>10 and item<50):
#     print("Number is between 10 and 50")
# else:
#  print("Number is greater than 10")

# list = [1, 2, 3, 4]
# for i in list:
#     print(i*2)
# for index, value in enumerate(list):
#     print("Value: ", value, " Index: ", index)

# list1 = [1, 2, 3, 4]
# list2 = [2, 3, 4]

# for i in zip(list1, list2):
#     print(i)

# for i in range(0, 6, 2):
#     print(i)

# str1 = "Hellow"
# print(str1[-2:])
# thirdList = [3, 4, 5, 6]
# print(len(thirdList))
# print(thirdList*3)
# thirdList.remove(6)
# print(thirdList.index(4))

# str2 = "oko"
# str2.remove("o")
# print(str2)

# firstVariable = 10
# if firstVariable>40:
#     print("The number is greater than 40")
# elif firstVariable>5 and firstVariable<10:
#     print("The number is between 5 and 10")
# else:
#     print("The number is less than 10")

# def summation():
#     sum = 0
#     for i in range(1, 11):
#         sum += i
#     return sum
# def summation():
#     sum = 0
#     i=0
#     while (i<=10):
#         sum += i
#         i += 1
#     return sum
# print(summation())

# firstList = [2, 3, 4, 5]
# for index,value in enumerate(firstList):
#     print("Index: ", index, " Value: ", value)
# print(firstList[::-1])

# #First way to remove multiple occurence from list
# firstList = [1, 1, 1, 2, 2, 3, 3, 4, 5]
# updateList = [*set(firstList)]
# print(updateList)
# #Second way to remove multiple occurence from list
# result = []
# [result.append(x) for x in firstList if x not in result]
# print(result)

# #Third way to remove multple occurence from list
# res = [i for n,i in enumerate(firstList) if i not in firstList[:n]]
# print(res)

# #Four way to remove multile occurence from list
# temp = Counter(firstList)
# fourList = [*temp]
# print(fourList)


# secondList = ["Hello", "World"]
# def ReverseTheWord(string):
#     firstList = list(string)
#     secondList = []
#     s = ' '
#      for i in firstList:
#           s +=i
#           if i == ' ':
#               secondList.append(s)
#               s = ' '
#           if i != len(firstList)-1:
#               s = ' '
#       secondList.reverse()
#      return secondList
# # secondList.remove(' ')

# string = "Hello World"
# print(ReverseTheWord(string))
# print(secondList)
# for i in firstList:
#     s += i
#     print(i)
#     if i == ' ':
# 	   secondList.append(s)
# 	   s = ' '
# print(secondList)

# import matplotlib.pyplot as plt
# plt.plot([1, 2, 3, 4])
# plt.ylabel('some numbers')
# plt.show()

# import numpy as np
# a = np.array([
#      [1, 2],
#      [2, 3]
# ])
# print("Sum of all elements: ", a.sum())

#if elif else
# a = 10
# if a == 10:
#      print("a is equal to 10")
# else:
#      print("a is not equal to 10")
# age = 56
# if age <= 20:
#      print("The man is young")
# elif age > 20:
#      print("The man is adult")
# else:
#      print("The man is not adult")
# list = [1, 2, 3, 4, 5]
# for i in list:
#      print(i, end=" ")
# first = [1, 2, 3]
# tuple1 = tuple(first)
# print(tuple1)
