cmake_minimum_required(VERSION 2.8.11)

project(testproject)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the QtWidgets library
find_package(Qt5Widgets)
find_package(Qt5Network)

# Tell CMake to create the helloworld executable
add_executable(qt_client WIN32 main.cpp mainwindow.cpp fenetre_information.cpp)

# Use the Widgets module from Qt 5.
target_link_libraries(qt_client Qt5::Widgets Qt5::Network)