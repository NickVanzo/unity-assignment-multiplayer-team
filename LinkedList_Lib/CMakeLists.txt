project(LinkedList)
set(HEADER_FILES List.h Node.h)
set(SOURCE_FILES List.cpp Node.cpp)
add_library(LinkedList_Lib STATIC ${SOURCE_FILES} ${HEADER_FILES})
