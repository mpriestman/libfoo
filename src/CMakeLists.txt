configure_file(
  "${CMAKE_CURRENT_SOURCE_DIR}/version.h.in"
  "${PROJECT_BINARY_DIR}/version.h"
  )

add_library(foo
  foo.cpp
  )

install(TARGETS foo
  RUNTIME DESTINATION ${SDK_ROOT}/bin
  LIBRARY DESTINATION ${SDK_ROOT}/lib
  ARCHIVE DESTINATION ${SDK_ROOT}/lib
  )

install(FILES foo.h "${PROJECT_BINARY_DIR}/version.h"
  DESTINATION ${SDK_ROOT}/include
  )