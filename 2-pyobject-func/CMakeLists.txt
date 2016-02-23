# python headers/libraries
find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})


add_library(pyobjectfunc SHARED pyobjectfunc.cpp)

target_link_libraries(pyobjectfunc ${PYTHON_LIBRARIES})

# c++11 features
target_compile_features(pyobjectfunc PRIVATE cxx_range_for)

file(GLOB PYFILES *.py)
file(COPY ${PYFILES} DESTINATION ".")
