cmake_minimum_required(VERSION 2.4)

project(debt_freedom)

include_directories(${PROJECT_SOURCE_DIR})
add_executable(DebtFreeGame
	       ${PROJECT_SOURCE_DIR}/src/engine/engine.cpp
	       ${PROJECT_SOURCE_DIR}/src/main.cpp)
