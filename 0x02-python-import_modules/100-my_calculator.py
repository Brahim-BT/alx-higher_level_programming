#!/usr/bin/python3

if __name__ == "__main__":
    import sys

    nargs = len(sys.argv) - 1
    if nargs != 3:
        print("Usage: ./100-my_calculator.py <a> <operator> <b>")
        sys.exit(1)

    opeation = sys.argv[2]
    if opeation != "+" and opeation != "-" and opeation != "*" and opeation != "/":
        print("Unknown operator. Available operators: +, -, * and /")
        sys.exit(1)

    from calculator_1 import add, sub, mul, div

    n1 = int(sys.argv[1])
    n2 = int(sys.argv[3])

    if opeation == "+":
        print("{} + {} = {}".format(n1, n2, add(n1, n2)))
    elif opeation == "-":
        print("{} - {} = {}".format(n1, n2, sub(n1, n2)))
    elif opeation == "*":
        print("{} * {} = {}".format(n1, n2, mul(n1, n2)))
    else:
        print("{} / {} = {}".format(n1, n2, div(n1, n2)))
