project(lv_lib_png
  HOMEPAGE_URL https://github.com/lvgl/lv_lib_png
  )

file(GLOB_RECURSE SOURCES *.c)
add_library(${CMAKE_PROJECT_NAME} STATIC ${SOURCES})

if("${LIB_INSTALL_DIR}" STREQUAL "")
  set(LIB_INSTALL_DIR "lib")
endif()

if("${INC_INSTALL_DIR}" STREQUAL "")
  set(INC_INSTALL_DIR "include/lvgl/${CMAKE_PROJECT_NAME}")
endif()

file(GLOB LV_DRIVERS_PUBLIC_HEADERS
  "${CMAKE_SOURCE_DIR}/lv_png.h"
  "${CMAKE_SOURCE_DIR}/lodepng.h"
  )

set_target_properties(${CMAKE_PROJECT_NAME} PROPERTIES
  OUTPUT_NAME ${CMAKE_PROJECT_NAME}
  ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
  PUBLIC_HEADER "${LV_DRIVERS_PUBLIC_HEADERS}"
)

install(TARGETS ${CMAKE_PROJECT_NAME}
  ARCHIVE DESTINATION "${LIB_INSTALL_DIR}"
  PUBLIC_HEADER DESTINATION "${INC_INSTALL_DIR}"
)
