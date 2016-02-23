from ctypes import cdll
lib = cdll.LoadLibrary('./libsimplefunc.so')

def add2(n):
    return lib.add2(n)
