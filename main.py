#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    fp = open(sys.argv[1], "r")
    argc = len(sys.argv)

    if (argc == 2):
        for line in fp:
            if len(line) < 20:
                num = int(line)
                for i in range(2, num):
                    if num % i == 0:
                        print("{:d}={:d}*{:d}".format(num, int(num / i), i))
                        break
