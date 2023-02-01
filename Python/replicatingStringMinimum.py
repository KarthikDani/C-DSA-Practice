"""
You are given a string and two non-negative integers as input. The two integers specify the start and end indices of a substring in the given string. Create a new string by replicating the substring a minimum number of times so that the resulting string is longer than the input string.

The input parameters are the string, start index of the substring and the end index of substring (endpoints inclusive) each on a different line.
"""


stringg = str(input())
a = int(input())
b = int(input())

temp = ""

if(a >= 0 and b >= 0):
    for i in range(0, len(stringg)+1):
        temp += stringg[a:(b+1)]
        if(len(temp) > len(stringg)):
            break
    print(temp)