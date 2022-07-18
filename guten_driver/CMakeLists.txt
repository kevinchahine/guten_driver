# --- Guten Driver Project ---

cmake_minimum_required(VERSION 3.21)

project(guten_driver)

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

source_group(guten_driver FILES ${NOTES})
source_group(guten_driver FILES ${SRC})

add_executable(guten_driver
	${NOTES}
	${SRC}
)

