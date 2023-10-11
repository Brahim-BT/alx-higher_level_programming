#!/usr/bin/python3
def print_sorted_dictionary(a_dictionary):
    for w, z in sorted(a_dictionary.items()):
        print("{}: {}".format(w, z))
