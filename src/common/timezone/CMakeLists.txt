#include_directories(/data/oceanbase/src/common)

set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)

add_library(timezone STATIC
localtime.c
)
