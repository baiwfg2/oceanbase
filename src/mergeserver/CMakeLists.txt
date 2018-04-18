add_library(MS STATIC
../../svn_version.cpp
ob_chunk_server_task_dispatcher.cpp
ob_merge_callback.cpp
ob_merge_server.cpp
ob_merge_server_main.cpp
ob_merge_server_service.cpp
ob_merger_groupby_operator.cpp
ob_ms_server_counter.cpp
ob_merger_operator.cpp
ob_merger_reverse_operator.cpp
ob_merger_sorted_operator.cpp
ob_ms_lease_task.cpp
ob_ms_monitor_task.cpp
ob_ms_rpc_proxy.cpp
ob_ms_async_rpc.cpp
ob_rpc_event.cpp
ob_ms_rpc_event.cpp
ob_ms_request.cpp
ob_ms_scan_request.cpp
ob_ms_sub_scan_request.cpp
ob_ms_get_request.cpp
ob_ms_sub_get_request.cpp
ob_ms_scan_param.cpp
ob_ms_scanner_encoder.cpp
ob_ms_schema_proxy.cpp
ob_ms_schema_task.cpp
ob_ms_service_monitor.cpp
ob_ms_sql_sorted_operator.cpp
ob_ms_sql_operator.cpp
ob_sql_rpc_event.cpp
ob_ms_sql_rpc_event.cpp
ob_ms_sql_request.cpp
ob_ms_sql_scan_request.cpp
ob_ms_sql_sub_scan_request.cpp
ob_ms_sql_get_request.cpp
ob_ms_sql_sub_get_request.cpp
ob_ms_ups_task.cpp
ob_mutator_param_decoder.cpp
ob_param_decoder.cpp
ob_query_cache.cpp
ob_read_param_decoder.cpp
ob_read_param_modifier.cpp
ob_rs_rpc_proxy.cpp
ob_merge_server_config.cpp
ob_ms_sql_proxy.cpp
ob_get_privilege_task.cpp
ob_bloom_filter_task_queue_thread.cpp
ob_insert_cache.cpp
ob_merge_reload_config.cpp
ob_frozen_data_cache.cpp
)

add_executable(mergeserver main.cpp)

target_link_libraries(mergeserver
        sql.a
        MS.a
        obmysql.a
        common.a
        sql.a
        btree.a
        timezone.a
        tbsys.a easy.a
        ssl crypt crypto
#        dl
        aio
        pthread
        )
