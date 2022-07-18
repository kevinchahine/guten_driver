# --- Guten Driver Solution ---

cmake_minimum_required(VERSION 3.21)

project(guten_solution) 			# solution project
add_subdirectory(guten)				# library project
add_subdirectory(guten_driver)		# application project
