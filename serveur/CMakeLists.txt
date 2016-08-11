cmake_minimum_required(VERSION 2.8.11)

project(testproject)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the QtWidgets library
find_package(Qt5Network)

# Tell CMake to create the helloworld executable
add_executable(qt_serveur main.cpp information_linux.cpp helloworldcontroller.cpp httpglobal.cpp httplistener.cpp httpconnectionhandler.cpp httpconnectionhandlerpool.cpp httprequest.cpp httpresponse.cpp httpcookie.cpp httprequesthandler.cpp httpsession.cpp httpsessionstore.cpp staticfilecontroller.cpp)

# Use the Widgets module from Qt 5.
target_link_libraries(qt_serveur  Qt5::Network)