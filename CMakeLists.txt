
# CMake版本约束
cmake_minimum_required(VERSION 2.8.3)
 
#工程名称
project(demo3)
 
set(CMAKE_CXX_STANDARD 11)

# 包含头文件目录
include_directories(inc)

# 源码目录
set(SRC_DIRS "src")

# 头文件目录
set(INC_DIRS "inc")

# 查找源码目录下的所有.cpp文件 并存放到指定变量名SC_FILES的列表中
FILE(GLOB SRCS  "${SRC_DIRS}/*.cpp" "${SRC_DIRS}/*.ui" "${INC_DIRS}/*.h")

# 开启Qt MOC
set(CMAKE_AUTOMOC ON)
 
# 开启Qt ROC
set(CMAKE_AUTORCC ON)
 
# 开启Qt UIC
set(CMAKE_AUTOUIC ON)

 
set(Qt5 Core Gui Widgets Charts DataVisualization)
 

# 查找Qt库
find_package(Qt5 REQUIRED ${Qt5})

if(Qt5_FOUND)
    include_directories(${Qt5Core_INCLUDE_DIRS} ${Qt5Gui_INCLUDE_DIRS}
        ${Qt5Widgets_INCLUDE_DIRS} ${Qt5Charts_INCLUDE_DIRS})
    set(QT_LIBRARIES ${Qt5Widgets_LIBRARIES} ${Qt5Core_LIBRARIES} ${Qt5Gui_LIBRARIES} ${Qt5Charts_LIBRARIES} ${Qt5DataVisualization_LIBRARIES})
 
    # 增加可执行文件
    add_executable(${PROJECT_NAME} ${SRCS})
    target_link_libraries(${PROJECT_NAME} ${QT_LIBRARIES})
endif(Qt5_FOUND)
