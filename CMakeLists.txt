cmake_minimum_required(VERSION 3.1)
project(asteroids CXX)

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

# set optimization level
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")

# Create the executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Find the required packages

find_library(AL5 allegro)
find_library(AL5_FONT allegro_font)
find_library(AL5_AUDIO allegro_audio)
find_library(AL5_ACODEC allegro_acodec)
find_library(AL5_PRIM allegro_primitives)

find_library(MATH_LIBRARY m)

# Add the include directories for Allegro 5
# include_directories(${ALLEGRO5_INCLUDE_DIRS})

# Link against Allegro 5 and the math library
target_link_libraries(${PROJECT_NAME} ${MATH_LIBRARY} ${AL5} ${AL5_FONT} ${AL5_AUDIO} ${AL5_ACODEC} ${AL5_PRIM})