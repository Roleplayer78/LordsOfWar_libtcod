# Author Lord of War
# Date: 5/04/2014

cmake_minimum_required(VERSION 2.8)

# Project

project ( "The Lords of War" ) 

# Adding sources to project
add_subdirectory ( source )

add_custom_target ( lua COMMAND make linux WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lua )
add_custom_target ( libtcod COMMAND make -f makefiles/makefile-linux WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/libtcod )
