from ctypes import cdll, py_object
lib = cdll.LoadLibrary('./libpyobjectfunc.so')

lib.get_dict.restype = py_object

def get_dict():
    return lib.get_dict()
