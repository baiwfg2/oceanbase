add_library(PS STATIC
../../svn_version.cpp
ob_proxy_server.cpp
ob_proxy_server_main.cpp
ob_proxy_service.cpp
ob_proxy_server_config.cpp
ob_yunti_proxy.cpp
ob_yunti_meta.cpp
ob_proxy_callback.cpp
ob_proxy_reader.cpp
)

add_executable(proxyserver main.cpp)

# library link order is very important
target_link_libraries(proxyserver 
        PS.a 
        timezone.a
        common.a
        sql.a
        common.a # use twice on purpose
        tbsys.a easy.a
        ssl crypto
        aio
        pthread)
