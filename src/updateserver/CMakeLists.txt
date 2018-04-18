add_definitions(-D__VERSION_ID__=\"updateserver-1.0.0.0\" -D_BTREE_ENGINE_ )

add_library(US STATIC
../../svn_version.cpp
ob_async_log_applier.cpp
ob_btree_engine_alloc.cpp
ob_cached_pos_log_reader.cpp
ob_data_block.cpp
ob_fetched_log.cpp
ob_located_log_reader.cpp
ob_lock_mgr.cpp
ob_log_buffer.cpp
ob_log_replay_worker.cpp
ob_log_src.cpp
ob_log_sync_delay_stat.cpp
ob_memtable.cpp
ob_memtable_rowiter.cpp
ob_multi_file_utils.cpp
ob_on_disk_log_locator.cpp
ob_pos_log_reader.cpp
ob_prefetch_log_buffer.cpp
ob_query_engine.cpp
ob_remote_log_src.cpp
ob_replay_log_src.cpp
ob_ring_data_buffer.cpp
ob_schema_mgrv2.cpp
ob_session_mgr.cpp
ob_sessionctx_factory.cpp
ob_slave_sync_type.cpp
ob_sstable_mgr.cpp
ob_store_mgr.cpp
ob_table_engine.cpp
ob_table_mgr.cpp
ob_trans_buffer.cpp
ob_trans_executor.cpp
ob_trans_mgr.cpp
ob_transfer_sstable_query.cpp
ob_update_callback.cpp
ob_update_server.cpp
ob_update_server_main.cpp
ob_ups_cache.cpp
ob_ups_clog_status.cpp
ob_ups_compact_cell_iterator.cpp
ob_ups_compact_cell_writer.cpp
ob_ups_fetch_runnable.cpp
ob_ups_log_mgr.cpp
ob_ups_log_utils.cpp
ob_ups_mutator.cpp
ob_ups_replay_runnable.cpp
ob_ups_rpc_stub.cpp
ob_ups_slave_mgr.cpp
ob_ups_stat.cpp
ob_ups_table_mgr.cpp
ob_ups_timer_task.cpp
ob_ups_utils.cpp
ob_update_server_config.cpp
ob_ups_phy_operator_factory.cpp
ob_table_list_query.cpp
ob_ups_lock_filter.cpp
ob_ups_inc_scan.cpp
ob_clog_stat.cpp
ob_memtable_modify.cpp
ob_trigger_handler.cpp
ob_update_reload_config.cpp
ob_inc_seq.cpp
)

add_executable(updateserver main.cpp)
add_executable(ob_ping ups_mon.cpp)

target_link_libraries(updateserver
        US
        sstable.a
        comp.a
        common.a
        sql.a
        common.a
        btree.a
        timezone.a
        tbsys.a easy.a
        ssl crypt crypto
        dl
        aio
        pthread
        )

target_link_libraries(ob_ping
        sstable.a
        comp.a
        common.a
        sql.a
        common.a
        btree.a
        timezone.a
        tbsys.a easy.a
        ssl crypto
        pthread
        )
