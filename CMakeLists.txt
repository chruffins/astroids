cmake_minimum_required(VERSION 3.1)
project(asteroids)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)

# Add your source files here
set(SOURCES
    main.cpp
    allegro/font.cpp
    allegro/music.cpp
    game/objects.cpp
    # Add other source files here
)

# Create the executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Find the required packages
find_package(PkgConfig REQUIRED)

pkg_check_modules(ALLEGRO5 REQUIRED allegro-5)

target_include_directories(${PROJECT_NAME} PUBLIC ${ALLEGRO5_INCLUDE_DIRS})
find_library(MATH_LIBRARY m)

# Add the include directories for Allegro 5
include_directories(${ALLEGRO5_INCLUDE_DIRS})

# Link against Allegro 5 and the math library
target_link_libraries(${PROJECT_NAME} ${ALLEGRO5_LIBRARIES} ${MATH_LIBRARY} allegro_primitives allegro_font allegro_audio allegro_acodec)