cmake_minimum_required(VERSION 2.8.12)

project(XmppDemo)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

set(QXMPPSrc "/Users/lixiaoning/Program/desktopclient/src/qxmpp/src")

find_package(Qt5Core)
find_package(Qt5Network)

INCLUDE_DIRECTORIES(${QXMPPSrc}/base ${QXMPPSrc}/server ${QXMPPSrc}/client)

add_executable(${PROJECT_NAME} "main.cpp")

target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Network /Users/lixiaoning/Program/desktopclient/src/lib/Debug/libqxmpp_d.dylib)
