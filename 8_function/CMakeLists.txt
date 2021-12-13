cmake_minimum_required(VERSION 3.10)

# 声明项目名
project( example )

# 函数入口
function (fun list_in)
	message(STATUS "list_in = ${list_in}")
	message(STATUS "ARGC = ${ARGC}")
	message(STATUS "ARGV = ${ARGV}")
endfunction()

# example_list
set( example_list "" )

list(APPEND example_list a)
list(APPEND example_list b)
list(APPEND example_list c)

fun( example_list )
# OutPut
# -- list_in = example_list
# -- ARGC = 1
# -- ARGV = example_list

# 取值可以使用 ARGV
fun( ${example_list} )
# OutPut
# -- list_in = a
# -- ARGC = 3
# -- ARGV = a;b;c

