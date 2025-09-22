# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\SignalSlotExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\SignalSlotExample_autogen.dir\\ParseCache.txt"
  "SignalSlotExample_autogen"
  )
endif()
