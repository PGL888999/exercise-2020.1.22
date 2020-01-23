#!/usr/bin/python
def move(n, a, var, c):
    if(n == 1):
        print(a,"->",c)
    return
move(n-1, a, c, var)
move(1, a, var, c)
move(n-1, var, a, c)
move(3, "a", "b", "c")
