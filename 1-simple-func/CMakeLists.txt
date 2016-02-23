add_library(simplefunc SHARED simplefunc.cpp)

file(GLOB PYFILES *.py)
file(COPY ${PYFILES} DESTINATION ".")
