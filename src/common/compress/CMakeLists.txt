#include_directories(/data/oceanbase/src/common)

set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)

add_library(comp STATIC
ob_compressor.cpp
)
