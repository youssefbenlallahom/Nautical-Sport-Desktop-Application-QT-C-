cmake_minimum_required(VERSION 3.5)

project(SmtpClient VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_compile_options(-DSMTP_MIME_LIBRARY)

message(USING QT5)

add_library(${PROJECT_NAME} SHARED
    emailaddress.cpp
    mimeattachment.cpp
    mimefile.cpp
    mimehtml.cpp
    mimeinlinefile.cpp
    mimemessage.cpp
    mimepart.cpp
    mimetext.cpp
    smtpclient.cpp
    quotedprintable.cpp
    mimemultipart.cpp
    mimecontentformatter.cpp
)

target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Core Qt5::Network)

set(CMAKE_SKIP_BUILD_RPATH FALSE)
set(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)
set(CMAKE_INSTALL_RPATH "$ORIGIN")

set(public_headers
    emailaddress.h
    mimeattachment.h
    mimefile.h
    mimehtml.h
    mimeinlinefile.h
    mimemessage.h
    mimepart.h
    mimetext.h
    smtpclient.h
    quotedprintable.h
    mimemultipart.h
    mimecontentformatter.h
)

# note that ${public_headers} has to be in quotes
set_target_properties(${PROJECT_NAME} PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER "${public_headers}")

include(GNUInstallDirs)
install(TARGETS ${PROJECT_NAME}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${PROJECT_NAME}
)
