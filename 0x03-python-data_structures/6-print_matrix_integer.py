#!/usr/bin/python3


def print_matrix_integer(matrix=[[]]):
    for list in matrix:
        for element in list:
            if element != 0:
                print(" ", end="")
            print("{:d}".format(element), " ", end="")
        print()
