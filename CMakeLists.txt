cmake_minimum_required(VERSION 3.5)

project(Warlock)

####### Warlock Libraries ########

add_library(WarlockShared SHARED 
    src/Warlock.c
    src/util/str_util.c
)

add_library(WarlockStatic STATIC 
    src/Warlock.c
    src/util/str_util.c
)

###################################

target_include_directories(WarlockStatic
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include
)

target_include_directories(WarlockShared
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include
)

# Add test executables to build
add_executable(WarlockTests
    tests/unit_test_exec.c
    tests/test_main.c
)

target_include_directories(WarlockTests
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include
)

# links library to test executable
target_link_libraries( WarlockTests
    PRIVATE 
        WarlockShared
)