cmake_minimum_required(VERSION 3.8)
project(inheritance)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES main.cpp Counter.cpp Counter.h)
#set(SOURCE_FILES testDistance.cpp Distance.cpp Distance.h)
#set(SOURCE_FILES testEmployee.cpp Employee.cpp Employee.h Manager.cpp Manager.h Scientist.cpp Scientist.h Laborer.cpp Laborer.h Student.cpp Student.h)
#set(SOURCE_FILES testMultiInheritence.cpp)
set(SOURCE_FILES diamond.cpp)
add_executable(inheritance ${SOURCE_FILES})