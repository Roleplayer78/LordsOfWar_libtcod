
set ( CMAKE_CPP_FLAGS "-Wall -pedantic" )

# Include directories
include_directories ( ${CMAKE_SOURCE_DIR}/include ) 

file ( GLOB SRCS *.cpp )
file ( GLOB INCS ../include/*.hpp )

# Add libtcod library to compilation
find_library ( LIBTCODXX_LIBRARY NAMES "tcodxx" PATHS ${CMAKE_SOURCE_DIR}/libtcod NO_DEFAULT_PATH )
find_library ( LIBTCOD_LIBRARY NAMES "tcod" PATHS ${CMAKE_SOURCE_DIR}/libtcod NO_DEFAULT_PATH )
include_directories ( ${CMAKE_SOURCE_DIR}/libtcod/include ) 

add_executable ( tlow ${SRCS} ${INCS} )
target_link_libraries( tlow  ${LIBTCOD_LIBRARY} ${LIBTCODXX_LIBRARY} )
