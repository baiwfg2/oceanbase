add_library(lsync STATIC
ob_lsync_server_param.cpp
ob_lsync_server.cpp
ob_seekable_log_reader2.cpp
ob_lsync_callback.cpp
)

add_executable(lsyncserver main.cpp
    ob_lsync_server_main.cpp
    )

target_link_libraries(lsyncserver
        lsync.a 
        US.a
        sstable.a
        common.a
        sql.a
        common.a # use twice on purpose
        btree.a
        comp.a
        tbsys.a easy.a
        ssl crypto crypt
        aio
        dl
        pthread)

