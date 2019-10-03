set(HEADERS_PATH ${PROJECT_SOURCE_DIR}/include/${PROJECT_NAME})
set(HEADERS
	${HEADERS_PATH}/dummy.hpp
)

set(SOURCES_PATH ${PROJECT_SOURCE_DIR}/src)
set(SOURCES
	${SOURCES_PATH}/dummy.cpp
)

set(INC_PATH ${PROJECT_SOURCE_DIR}/include)
set(LIB_RANDOM_INC ${PROJECT_SOURCE_DIR}/lib/random/include)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})
target_include_directories(${PROJECT_NAME}
	PUBLIC
		${INC_PATH}
		${LIB_RANDOM_INC}
)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)

#set(tool_dest "bin")
#set(include_dest "include/${PROJECT_NAME}-${PROJECT_VERSION}")
#set(lib_dest "lib/${PROJECT_NAME}-${PROJECT_VERSION}")

#add_executable(test test.cpp)

target_link_libraries(${PROJECT_NAME} mardcpp)

find_package(Boost REQUIRED)

#find_package(OpenMP REQUIRED)
#find_package(Curses REQUIRED)

#include_directories(${CURSES_INCLUDE_DIR})

#target_link_libraries(test PRIVATE OpenMP::OpenMP_CXX ${PROJECT_SOURCE_DIR}/build/lib/libmardcpp.a ${CURSES_LIBRARIES})
