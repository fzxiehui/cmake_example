cmake_minimum_required(VERSION 3.10)

project( example )

set( SHARED_LIB_SOURCES 
	src/ExampleSharedLibrary.cpp
)

set( EXE_SOURCES
	src/main.cpp
)

add_library( example_shared_library SHARED
	${SHARED_LIB_SOURCES}
)

target_compile_definitions( example_shared_library PRIVATE BUILD_DLL )

target_compile_definitions( example_shared_library PRIVATE USE_DLL )

target_include_directories( example_shared_library
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
		example_shared_library
)
