# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\MultiWidgetExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\MultiWidgetExample_autogen.dir\\ParseCache.txt"
  "MultiWidgetExample_autogen"
  )
endif()
