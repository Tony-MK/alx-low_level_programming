#!usr/bin/python3

largest_palindrome = 0;
for i in range(999, 100, -1):
    for k in range(999, 100, -1):
        if i * k > largest_palindrome and str(i * k) == str(i * k)[::-1]:
            largest_palindrome = i * k

print(largest_palindrome)
