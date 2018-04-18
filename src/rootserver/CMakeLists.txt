add_library(RS STATIC
    ../../svn_version.cpp
    ob_root_server_state.cpp
    ob_daily_merge_checker.cpp
    ob_heartbeat_checker.cpp
    ob_rs_trigger_event_util.cpp
    ob_root_inner_table_task.cpp
    ob_root_async_task_queue.cpp
    ob_chunk_server_manager.cpp
    ob_root_sql_proxy.cpp
    ob_migrate_info.cpp
    ob_restart_server.cpp
    ob_root_balancer.cpp
    ob_root_balancer_runnable.cpp
    ob_root_bootstrap.cpp
    ob_root_callback.cpp
    ob_root_ddl_operator.cpp
    ob_root_fetch_thread.cpp
    ob_root_log_manager.cpp
    ob_root_log_replay.cpp
    ob_root_log_worker.cpp
    ob_root_meta2.cpp
    ob_root_ms_provider.cpp
    ob_root_rpc_stub.cpp
    ob_root_server2.cpp
    ob_root_stat_key.cpp
    ob_root_table2.cpp
    ob_root_ups_provider.cpp
    ob_root_util.cpp
    ob_root_worker.cpp
    ob_schema_service_ms_provider.cpp
    ob_schema_service_ups_provider.cpp
    ob_server_balance_info.cpp
    ob_tablet_info_manager.cpp
    ob_ups_check_runnable.cpp
    ob_ups_heartbeat_runnable.cpp
    ob_ups_manager.cpp
    ob_root_server_config.cpp
    ob_root_monitor_table.cpp
    ob_rs_after_restart_task.cpp
    ob_root_operation_helper.cpp
    ob_root_operation_data.cpp
    ob_rs_schema_operation.cpp
    ob_root_table_operation.cpp
    ob_root_timer_task.cpp
    ob_root_reload_config.cpp
    ob_data_source_mgr.cpp
    )

add_executable(rootserver ob_root_main.cpp main.cpp)

# library link order is very important
target_link_libraries(rootserver 
        timezone.a
        RS.a 
        roottable.a
        common.a
        sql.a
        common.a # use twice on purpose
        tbsys.a easy.a
        ssl crypto
        aio
        pthread)

