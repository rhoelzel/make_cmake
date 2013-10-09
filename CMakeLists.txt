cmake_minimum_required(VERSION 2.8) # stuff not directly
project(example)                    # related to building
include_directories(${CMAKE_SOURCE_DIR}/stuff/include) # -I flags for compiler
link_directories(${CMAKE_SOURCE_DIR}/stuff/lib)        # -L flags for linker
set(PROGSRC prog1.c prog2.c prog3.c)                   # define variable 
add_executable(prog main.c ${PROGSRC})                 # define executable target, specify sources
target_link_libraries(prog mystatlib mydynlib stuff)   # -l flags for linking prog
add_library(mystatlib STATIC mystatlib.c)              # define static library target, specify sources
add_library(mydynlib SHARED mydynlib.cpp)              # define shared library target, specify sources
#extra flags for linking mydynlib
set_target_properties(mydynlib PROPERTIES POSITION_INDEPENDENT_CODE TRUE) 
#alternatively:
#set_target_properties(mydynlib PROPERTIES LINK_FLAGS "-fPIC")
