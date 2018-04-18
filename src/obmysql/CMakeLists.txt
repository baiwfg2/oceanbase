set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)

add_library(obmysql STATIC
ob_mysql_callback.cpp
ob_mysql_command_queue.cpp
ob_mysql_command_queue_thread.cpp
ob_mysql_dtoa.cpp
ob_mysql_field.cpp
ob_mysql_loginer.cpp
ob_mysql_result_set.cpp
ob_mysql_row.cpp
ob_mysql_server.cpp
ob_mysql_state.cpp
ob_mysql_util.cpp
packet/ob_mysql_command_packet.cpp
packet/ob_mysql_eof_packet.cpp
packet/ob_mysql_error_packet.cpp
packet/ob_mysql_field_packet.cpp
packet/ob_mysql_handshake_packet.cpp
packet/ob_mysql_ok_packet.cpp
packet/ob_mysql_packet.cpp
packet/ob_mysql_resheader_packet.cpp
packet/ob_mysql_row_packet.cpp
packet/ob_mysql_spr_packet.cpp
)
