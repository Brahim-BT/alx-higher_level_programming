#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    my_mtrx = []
    for element in matrix:
        new_arr = []
        for i in range(len(element)):
            new_arr.append(element[i] * element[i])
        my_mtrx.append(new_arr)
    return my_mtrx
