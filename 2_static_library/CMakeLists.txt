cmake_minimum_required(VERSION 3.10)

project( example )

set( STATIC_LIB_SOURCES 
	src/ExampleStaticLibrary.cpp
)

set( EXE_SOURCES
	src/main.cpp
)

add_library( example_static_library STATIC
	${STATIC_LIB_SOURCES}
)

target_include_directories( example_static_library
	PUBLIC
		${PROJECT_SOURCE_DIR}/include
)

add_executable( example ${EXE_SOURCES} )

target_include_directories( example 
	PRIVATE
		${PROJECT_SOURCE_DIR}/include
)

target_link_libraries(example 
	PRIVATE
		example_static_library
)
