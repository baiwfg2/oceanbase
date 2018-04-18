set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)

add_library(btree STATIC
btree_default_alloc.cpp
btree_node.cpp
btree_read_param.cpp
btree_write_handle.cpp
id_btree.cpp
key_btree.cpp
btree_base.cpp
btree_read_handle_new.cpp
btree_base_handle.cpp
btree_root_pointer.cpp
btree_array_list.cpp
btree_write_param.cpp
id_key_btree.cpp
)
