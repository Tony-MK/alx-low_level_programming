#!usr/bin/python3


for i in range(999, 100, -1):
    for k in range(999, 100, -1):
        if str(i * k) == str(i * k)[::-1]:
            print("{} * {} = {}".format(i, k, i * k))
            exit(1)
