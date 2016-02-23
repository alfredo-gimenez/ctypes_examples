#include <map>
#include <string>

static std::map<std::string, int> mymap = {{"one", 1}, {"two", 2}, {"three", 3}};

#include <python2.6/Python.h>

extern "C" {

PyObject* get_dict() {
    PyObject *result = PyDict_New();

    for (auto keyval : mymap) {
        PyObject *key = PyString_FromString(keyval.first.c_str());
        PyObject *val = PyInt_FromLong((long)keyval.second);

        PyDict_SetItem(result, key, val);
    }

    return result;
}

} // extern "C"
