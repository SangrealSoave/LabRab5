# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)

project ("CMakeProject1")
project ("CMakeProject2")
project ("CMakeProject3")
project ("CMakeProject4")
project ("CMakeProject5")
project ("CMakeProject6")
project ("CMakeProject7")
# Включите подпроекты.
add_subdirectory ("CMakeProject5\\Task1")
add_subdirectory ("CMakeProject5\\Task2")
add_subdirectory ("CMakeProject5\\Task3")
add_subdirectory ("CMakeProject5\\Task4")
add_subdirectory ("CMakeProject5\\Task5")
add_subdirectory ("CMakeProject5\\Task6")
add_subdirectory ("CMakeProject5\\Task7")