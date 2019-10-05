"""
Just show possibility of invoke "c" function in python.

Reference:
    1. https://stackoverflow.com/questions/14884126/build-so-file-from-c-file-using-gcc-command-line
    2. https://stackoverflow.com/questions/145270/calling-c-c-from-python

Get .so(shared output file :smile: ) file
    g++ -shared -o template.so -fPIC template.cpp

"""
import os
import ctypes


def main():
    # you should have installed g++ etc. tolls.
    # make sure template.so file exist. 
    print("Will Invoke:\n\tg++ -shared -o template.so -fPIC template.cpp")
    os.system("g++ -shared -o template.so -fPIC template.cpp")
    dl = ctypes.CDLL('./template.so')
    dl.main()


if __name__ == "__main__":
    main()
