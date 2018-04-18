#include_directories(/data/oceanbase/src/common)

set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)

add_library(roottable STATIC
ob_old_root_table_schema.cpp
ob_tablet_meta_table_row.cpp
ob_first_tablet_entry_meta.cpp
ob_first_tablet_entry_schema.cpp
ob_first_tablet_entry.cpp
ob_scan_helper_impl.cpp
ob_meta_table_schema.cpp
ob_meta_table3.cpp
ob_root_table3.cpp
ob_root_table_service.cpp
)
