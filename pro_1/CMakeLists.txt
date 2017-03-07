project(ex2_1)
cmake_minimum_required(VERSION 2.6)
find_package(Qt4 REQUIRED)
find_package(OpenCV 3 REQUIRED)

include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR})
include_directories(${OpenCV_INCLUDE_DIRS})

#set(ex2_1_SRCS ex2_1.cpp main.cpp)
#qt4_automoc(${ex2_1_SRCS})
add_executable(ex2_1 main.cpp)
target_link_libraries(ex2_1 ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY})
target_link_libraries(ex2_1 ${OpenCV_LIBS})
install(TARGETS ex2_1 RUNTIME DESTINATION bin)
