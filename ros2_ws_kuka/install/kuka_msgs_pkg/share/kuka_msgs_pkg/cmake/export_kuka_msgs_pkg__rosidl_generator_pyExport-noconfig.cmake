#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "kuka_msgs_pkg::kuka_msgs_pkg__rosidl_generator_py" for configuration ""
set_property(TARGET kuka_msgs_pkg::kuka_msgs_pkg__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(kuka_msgs_pkg::kuka_msgs_pkg__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libkuka_msgs_pkg__rosidl_generator_py.so"
  IMPORTED_SONAME_NOCONFIG "libkuka_msgs_pkg__rosidl_generator_py.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS kuka_msgs_pkg::kuka_msgs_pkg__rosidl_generator_py )
list(APPEND _IMPORT_CHECK_FILES_FOR_kuka_msgs_pkg::kuka_msgs_pkg__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libkuka_msgs_pkg__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
