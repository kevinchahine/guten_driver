# --- Guten Driver Project ---

cmake_minimum_required(VERSION 3.21)

set(APP_NAME "guten_driver")
project(${APP_NAME})

set(NOTES
	notes/termcolor.txt
	notes/Letters.txt
	notes/Matrix.txt
	notes/ProgressBars.txt
)

set(SRC
	src/examples_boarders.cpp
	src/examples_boarders.h
	src/examples_checker_board.cpp
	src/examples_checker_board.h
	src/examples.cpp
	src/examples_draw_functions.cpp
	src/examples_draw_functions.h
	src/examples_glyphs.cpp
	src/examples_glyphs.h
	src/examples.h
	src/examples_progress_bar.cpp
	src/examples_progress_bar.h
	src/main.cpp
)

source_group(${APP_NAME} FILES ${NOTES})
source_group(${APP_NAME} FILES ${SRC})

add_executable(${APP_NAME}
	${NOTES}
	${SRC}
)

# --- Libraries ---

# --- guten ---

find_library(LIBRARY_TO_INCLUDE guten)
message("guten was found as: ${LIBRARY_TO_ADD}")
target_link_libraries(${APP_NAME} PUBLIC guten)
target_include_directories(${APP_NAME} PUBLIC guten)

