#!/usr/bin/python3
def search_replace(my_list, search, replace):
    my_list = my_list.copy()
    for e in range(len(my_list)):
        if my_list[e] == search:
            my_list[e] = replace
    return my_list
