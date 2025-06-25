cmake_minimum_required(VERSION 3.10)
project(PersonApp)

set(CMAKE_CXX_STANDARD 17)

# Add your sources
add_executable(PersonApp
    main.cpp
    Model/Person.cpp
)
