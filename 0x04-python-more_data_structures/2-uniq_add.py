#!/usr/bin/python3
def uniq_add(my_list=[]):
    my_list = list(set(my_list))
    s = 0
    for n in my_list:
        s += n
    return s