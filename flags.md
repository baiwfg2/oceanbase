### src/obmysql/Makefile


```
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS)
	$(AM_CXXFLAGS) $(CXXFLAGS)
	$(LIBTOOLFLAGS) --mode=link $(CXXLD) $(AM_CXXFLAGS) \
	$(CXXFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_CFLAGS = -g -D_OB_VERSION=400 -DCOMPATIBLE -D__USE_LARGEFILE64 -D_FILE_OFFSET_BITS=64	-D_LARGE_FILE -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -Werror -Wall
AM_CXXFLAGS = -D__STDC_LIMIT_MACROS -D_OB_VERSION=400 -D__STDC_CONSTANT_MACROS -D_NO_EXCEPTION 	-Wall -Werror -Wextra -Wunused-parameter 	-Wformat -Wconversion -Wno-deprecated -fno-strict-aliasing -g
#CXXFLAGS+=-O2
AM_LDFLAGS = -lpthread -lc -lm -lrt -lcrypt -lssl $(am__append_2)
CFLAGS = -g -O2
CPPFLAGS = 
CXXFLAGS = -Wno-error=extra -Wno-error=ignored-qualifiers -Wno-error=unused-but-set-variable -Wno-error=conversion -Wno-error=memset-transposed-args -Wno-error=format-truncation -Wno-error=unused-local-typedefs -Wno-error=aligned-new= -Wno-error=psabi -Wno-error=unused-variable -lcrypto $(am__append_1)
LDFLAGS = 
AM_CPPFLAGS = -I${TBLIB_ROOT}/include/tbsys \
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_mysql_command_packet.o -MD -MP -MF $(DEPDIR)/ob_mysql_command_packet.Tpo -c -o ob_mysql_command_packet.o `test -f 'packet/ob_mysql_command_packet.cpp' || echo '$(srcdir)/'`packet/ob_mysql_command_packet.cpp
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_mysql_command_packet.o `test -f 'packet/ob_mysql_command_packet.cpp' || echo '$(srcdir)/'`packet/ob_mysql_command_packet.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_mysql_command_packet.obj -MD -MP -MF $(DEPDIR)/ob_mysql_command_packet.Tpo -c -o ob_mysql_command_packet.obj `if test -f 'packet/ob_mysql_command_packet.cpp'; then $(CYGPATH_W) 'packet/ob_mysql_command_packet.cpp'; else $(CYGPATH_W) '$(srcdir)/packet/ob_mysql_command_packet.cpp'; fi`
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_mysql_command_packet.obj `if test -f 'packet/ob_mysql_command_packet.cpp'; then $(CYGPATH_W) 'packet/ob_mysql_command_packet.cpp'; else $(CYGPATH_W) '$(srcdir)/packet/ob_mysql_command_packet.cpp'; fi`
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_mysql_eof_packet.o -MD -MP -MF $(DEPDIR)/ob_mysql_eof_packet.Tpo -c -o ob_mysql_eof_packet.o `test -f 'packet/ob_mysql_eof_packet.cpp' || echo '$(srcdir)/'`packet/ob_mysql_eof_packet.cpp
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_mysql_eof_packet.o `test -f 'packet/ob_mysql_eof_packet.cpp' || echo '$(srcdir)/'`packet/ob_mysql_eof_packet.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_mysql_eof_packet.obj -MD -MP -MF $(DEPDIR)/ob_mysql_eof_packet.Tpo -c -o ob_mysql_eof_packet.obj `if test -f 'packet/ob_mysql_eof_packet.cpp'; then $(CYGPATH_W) 'packet/ob_mysql_eof_packet.cpp'; else $(CYGPATH_W) '$(srcdir)/packet/ob_mysql_eof_packet.cpp'; fi`
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_mysql_eof_packet.obj `if test -f 'packet/ob_mysql_eof_packet.cpp'; then $(CYGPATH_W) 'packet/ob_mysql_eof_packet.cpp'; else $(CYGPATH_W) '$(srcdir)/packet/ob_mysql_eof_packet.cpp'; fi`
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_mysql_error_packet.o -MD -MP -MF $(DEPDIR)/ob_mysql_error_packet.Tpo -c -o ob_mysql_error_packet.o `test -f 'packet/ob_mysql_error_packet.cpp' || echo '$(srcdir)/'`packet/ob_mysql_error_packet.cpp
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_mysql_error_packet.o `test -f 'packet/ob_mysql_error_packet.cpp' || echo '$(srcdir)/'`packet/ob_mysql_error_packet.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_mysql_error_packet.obj -MD -MP -MF $(DEPDIR)/ob_mysql_error_packet.Tpo -c -o ob_mysql_error_packet.obj `if test -f 'packet/ob_mysql_error_packet.cpp'; then $(CYGPATH_W) 'packet/ob_mysql_error_packet.cpp'; else $(CYGPATH_W) '$(srcdir)/packet/ob_mysql_error_packet.cpp'; fi`
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_mysql_error_packet.obj `if test -f 'packet/ob_mysql_error_packet.cpp'; then $(CYGPATH_W) 'packet/ob_mysql_error_packet.cpp'; else $(CYGPATH_W) '$(srcdir)/packet/ob_mysql_error_packet.cpp'; fi`
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_mysql_field_packet.o -MD -MP -MF $(DEPDIR)/ob_mysql_field_packet.Tpo -c -o ob_mysql_field_packet.o `test -f 'packet/ob_mysql_field_packet.cpp' || echo '$(srcdir)/'`packet/ob_mysql_field_packet.cpp
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_mysql_field_packet.o `test -f 'packet/ob_mysql_field_packet.cpp' || echo '$(srcdir)/'`packet/ob_mysql_field_packet.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_mysql_field_packet.obj -MD -MP -MF $(DEPDIR)/ob_mysql_field_packet.Tpo -c -o ob_mysql_field_packet.obj `if test -f 'packet/ob_mysql_field_packet.cpp'; then $(CYGPATH_W) 'packet/ob_mysql_field_packet.cpp'; else $(CYGPATH_W) '$(srcdir)/packet/ob_mysql_field_packet.cpp'; fi`
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_mysql_field_packet.obj `if test -f 'packet/ob_mysql_field_packet.cpp'; then $(CYGPATH_W) 'packet/ob_mysql_field_packet.cpp'; else $(CYGPATH_W) '$(srcdir)/packet/ob_mysql_field_packet.cpp'; fi`
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_mysql_handshake_packet.o -MD -MP -MF $(DEPDIR)/ob_mysql_handshake_packet.Tpo -c -o ob_mysql_handshake_packet.o `test -f 'packet/ob_mysql_handshake_packet.cpp' || echo '$(srcdir)/'`packet/ob_mysql_handshake_packet.cpp
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_mysql_handshake_packet.o `test -f 'packet/ob_mysql_handshake_packet.cpp' || echo '$(srcdir)/'`packet/ob_mysql_handshake_packet.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_mysql_handshake_packet.obj -MD -MP -MF $(DEPDIR)/ob_mysql_handshake_packet.Tpo -c -o ob_mysql_handshake_packet.obj `if test -f 'packet/ob_mysql_handshake_packet.cpp'; then $(CYGPATH_W) 'packet/ob_mysql_handshake_packet.cpp'; else $(CYGPATH_W) '$(srcdir)/packet/ob_mysql_handshake_packet.cpp'; fi`
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_mysql_handshake_packet.obj `if test -f 'packet/ob_mysql_handshake_packet.cpp'; then $(CYGPATH_W) 'packet/ob_mysql_handshake_packet.cpp'; else $(CYGPATH_W) '$(srcdir)/packet/ob_mysql_handshake_packet.cpp'; fi`
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_mysql_ok_packet.o -MD -MP -MF $(DEPDIR)/ob_mysql_ok_packet.Tpo -c -o ob_mysql_ok_packet.o `test -f 'packet/ob_mysql_ok_packet.cpp' || echo '$(srcdir)/'`packet/ob_mysql_ok_packet.cpp
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_mysql_ok_packet.o `test -f 'packet/ob_mysql_ok_packet.cpp' || echo '$(srcdir)/'`packet/ob_mysql_ok_packet.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_mysql_ok_packet.obj -MD -MP -MF $(DEPDIR)/ob_mysql_ok_packet.Tpo -c -o ob_mysql_ok_packet.obj `if test -f 'packet/ob_mysql_ok_packet.cpp'; then $(CYGPATH_W) 'packet/ob_mysql_ok_packet.cpp'; else $(CYGPATH_W) '$(srcdir)/packet/ob_mysql_ok_packet.cpp'; fi`
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_mysql_ok_packet.obj `if test -f 'packet/ob_mysql_ok_packet.cpp'; then $(CYGPATH_W) 'packet/ob_mysql_ok_packet.cpp'; else $(CYGPATH_W) '$(srcdir)/packet/ob_mysql_ok_packet.cpp'; fi`
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_mysql_packet.o -MD -MP -MF $(DEPDIR)/ob_mysql_packet.Tpo -c -o ob_mysql_packet.o `test -f 'packet/ob_mysql_packet.cpp' || echo '$(srcdir)/'`packet/ob_mysql_packet.cpp
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_mysql_packet.o `test -f 'packet/ob_mysql_packet.cpp' || echo '$(srcdir)/'`packet/ob_mysql_packet.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_mysql_packet.obj -MD -MP -MF $(DEPDIR)/ob_mysql_packet.Tpo -c -o ob_mysql_packet.obj `if test -f 'packet/ob_mysql_packet.cpp'; then $(CYGPATH_W) 'packet/ob_mysql_packet.cpp'; else $(CYGPATH_W) '$(srcdir)/packet/ob_mysql_packet.cpp'; fi`
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_mysql_packet.obj `if test -f 'packet/ob_mysql_packet.cpp'; then $(CYGPATH_W) 'packet/ob_mysql_packet.cpp'; else $(CYGPATH_W) '$(srcdir)/packet/ob_mysql_packet.cpp'; fi`
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_mysql_resheader_packet.o -MD -MP -MF $(DEPDIR)/ob_mysql_resheader_packet.Tpo -c -o ob_mysql_resheader_packet.o `test -f 'packet/ob_mysql_resheader_packet.cpp' || echo '$(srcdir)/'`packet/ob_mysql_resheader_packet.cpp
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_mysql_resheader_packet.o `test -f 'packet/ob_mysql_resheader_packet.cpp' || echo '$(srcdir)/'`packet/ob_mysql_resheader_packet.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_mysql_resheader_packet.obj -MD -MP -MF $(DEPDIR)/ob_mysql_resheader_packet.Tpo -c -o ob_mysql_resheader_packet.obj `if test -f 'packet/ob_mysql_resheader_packet.cpp'; then $(CYGPATH_W) 'packet/ob_mysql_resheader_packet.cpp'; else $(CYGPATH_W) '$(srcdir)/packet/ob_mysql_resheader_packet.cpp'; fi`
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_mysql_resheader_packet.obj `if test -f 'packet/ob_mysql_resheader_packet.cpp'; then $(CYGPATH_W) 'packet/ob_mysql_resheader_packet.cpp'; else $(CYGPATH_W) '$(srcdir)/packet/ob_mysql_resheader_packet.cpp'; fi`
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_mysql_row_packet.o -MD -MP -MF $(DEPDIR)/ob_mysql_row_packet.Tpo -c -o ob_mysql_row_packet.o `test -f 'packet/ob_mysql_row_packet.cpp' || echo '$(srcdir)/'`packet/ob_mysql_row_packet.cpp
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_mysql_row_packet.o `test -f 'packet/ob_mysql_row_packet.cpp' || echo '$(srcdir)/'`packet/ob_mysql_row_packet.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_mysql_row_packet.obj -MD -MP -MF $(DEPDIR)/ob_mysql_row_packet.Tpo -c -o ob_mysql_row_packet.obj `if test -f 'packet/ob_mysql_row_packet.cpp'; then $(CYGPATH_W) 'packet/ob_mysql_row_packet.cpp'; else $(CYGPATH_W) '$(srcdir)/packet/ob_mysql_row_packet.cpp'; fi`
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_mysql_row_packet.obj `if test -f 'packet/ob_mysql_row_packet.cpp'; then $(CYGPATH_W) 'packet/ob_mysql_row_packet.cpp'; else $(CYGPATH_W) '$(srcdir)/packet/ob_mysql_row_packet.cpp'; fi`
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_mysql_spr_packet.o -MD -MP -MF $(DEPDIR)/ob_mysql_spr_packet.Tpo -c -o ob_mysql_spr_packet.o `test -f 'packet/ob_mysql_spr_packet.cpp' || echo '$(srcdir)/'`packet/ob_mysql_spr_packet.cpp
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_mysql_spr_packet.o `test -f 'packet/ob_mysql_spr_packet.cpp' || echo '$(srcdir)/'`packet/ob_mysql_spr_packet.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_mysql_spr_packet.obj -MD -MP -MF $(DEPDIR)/ob_mysql_spr_packet.Tpo -c -o ob_mysql_spr_packet.obj `if test -f 'packet/ob_mysql_spr_packet.cpp'; then $(CYGPATH_W) 'packet/ob_mysql_spr_packet.cpp'; else $(CYGPATH_W) '$(srcdir)/packet/ob_mysql_spr_packet.cpp'; fi`
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_mysql_spr_packet.obj `if test -f 'packet/ob_mysql_spr_packet.cpp'; then $(CYGPATH_W) 'packet/ob_mysql_spr_packet.cpp'; else $(CYGPATH_W) '$(srcdir)/packet/ob_mysql_spr_packet.cpp'; fi`
```
### src/updateserver/Makefile


```
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS)
	$(AM_CXXFLAGS) $(CXXFLAGS)
	$(LIBTOOLFLAGS) --mode=link $(CXXLD) $(AM_CXXFLAGS) \
	$(CXXFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_CFLAGS = -g -D_OB_VERSION=400 -DCOMPATIBLE -D__USE_LARGEFILE64 -D_FILE_OFFSET_BITS=64	-D_LARGE_FILE -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -Werror -Wall
AM_CXXFLAGS = -D__STDC_LIMIT_MACROS -D_OB_VERSION=400 -D__STDC_CONSTANT_MACROS -D_NO_EXCEPTION 	-Wall -Werror -Wextra -Wunused-parameter 	-Wformat -Wconversion -Wno-deprecated -fno-strict-aliasing -g
#CXXFLAGS+=-pg
#CXXFLAGS+=-O2 -Wno-strict-aliasing
AM_LDFLAGS = -lpthread -lc -lm -lrt -ldl -laio -lcrypt -lssl \
CFLAGS = -g -O2
CPPFLAGS = 
CXXFLAGS = -Wno-error=extra -Wno-error=ignored-qualifiers -Wno-error=unused-but-set-variable -Wno-error=conversion -Wno-error=memset-transposed-args -Wno-error=format-truncation -Wno-error=unused-local-typedefs -Wno-error=aligned-new= -Wno-error=psabi -Wno-error=unused-variable -lcrypto -D__UNIT_TEST__ -D__VERSION_ID__="\"updateserver \
LDFLAGS = 
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT svn_version.o -MD -MP -MF $(DEPDIR)/svn_version.Tpo -c -o svn_version.o `test -f '$(top_srcdir)/svn_version.cpp' || echo '$(srcdir)/'`$(top_srcdir)/svn_version.cpp
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o svn_version.o `test -f '$(top_srcdir)/svn_version.cpp' || echo '$(srcdir)/'`$(top_srcdir)/svn_version.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT svn_version.obj -MD -MP -MF $(DEPDIR)/svn_version.Tpo -c -o svn_version.obj `if test -f '$(top_srcdir)/svn_version.cpp'; then $(CYGPATH_W) '$(top_srcdir)/svn_version.cpp'; else $(CYGPATH_W) '$(srcdir)/$(top_srcdir)/svn_version.cpp'; fi`
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o svn_version.obj `if test -f '$(top_srcdir)/svn_version.cpp'; then $(CYGPATH_W) '$(top_srcdir)/svn_version.cpp'; else $(CYGPATH_W) '$(srcdir)/$(top_srcdir)/svn_version.cpp'; fi`
	echo -n 'const char* build_flags() { return "' >> $@ && echo -n $(CXXFLAGS) $(CPPFLAGS) |sed s/\"//g >> $@ && echo '"; }' >> $@
```
### src/chunkserver/Makefile


```
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS)
	$(AM_CXXFLAGS) $(CXXFLAGS)
	$(LIBTOOLFLAGS) --mode=link $(CXXLD) $(AM_CXXFLAGS) \
	$(CXXFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_CFLAGS = -g -D_OB_VERSION=400 -DCOMPATIBLE -D__USE_LARGEFILE64 -D_FILE_OFFSET_BITS=64	-D_LARGE_FILE -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -Werror -Wall
AM_CXXFLAGS = -D__STDC_LIMIT_MACROS -D_OB_VERSION=400 -D__STDC_CONSTANT_MACROS -D_NO_EXCEPTION 	-Wall -Werror -Wextra -Wunused-parameter 	-Wformat -Wconversion -Wno-deprecated -fno-strict-aliasing -g
AM_LDFLAGS = -lpthread -lc -lm -lrt -ldl -laio -lssl $(am__append_2)
CFLAGS = -g -O2
CPPFLAGS = 
CXXFLAGS = -Wno-error=extra -Wno-error=ignored-qualifiers -Wno-error=unused-but-set-variable -Wno-error=conversion -Wno-error=memset-transposed-args -Wno-error=format-truncation -Wno-error=unused-local-typedefs -Wno-error=aligned-new= -Wno-error=psabi -Wno-error=unused-variable -lcrypto $(am__append_1)
LDFLAGS = 
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT svn_version.o -MD -MP -MF $(DEPDIR)/svn_version.Tpo -c -o svn_version.o `test -f '$(top_srcdir)/svn_version.cpp' || echo '$(srcdir)/'`$(top_srcdir)/svn_version.cpp
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o svn_version.o `test -f '$(top_srcdir)/svn_version.cpp' || echo '$(srcdir)/'`$(top_srcdir)/svn_version.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT svn_version.obj -MD -MP -MF $(DEPDIR)/svn_version.Tpo -c -o svn_version.obj `if test -f '$(top_srcdir)/svn_version.cpp'; then $(CYGPATH_W) '$(top_srcdir)/svn_version.cpp'; else $(CYGPATH_W) '$(srcdir)/$(top_srcdir)/svn_version.cpp'; fi`
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o svn_version.obj `if test -f '$(top_srcdir)/svn_version.cpp'; then $(CYGPATH_W) '$(top_srcdir)/svn_version.cpp'; else $(CYGPATH_W) '$(srcdir)/$(top_srcdir)/svn_version.cpp'; fi`
	echo -n 'const char* build_flags() { return "' >> $@ && echo -n $(CXXFLAGS) $(CPPFLAGS) |sed s/\"//g >> $@ && echo '"; }' >> $@
```
### src/proxyserver/Makefile


```
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS)
	$(AM_CXXFLAGS) $(CXXFLAGS)
	$(LIBTOOLFLAGS) --mode=link $(CXXLD) $(AM_CXXFLAGS) \
	$(CXXFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_CFLAGS = -g -D_OB_VERSION=400 -DCOMPATIBLE -D__USE_LARGEFILE64 -D_FILE_OFFSET_BITS=64	-D_LARGE_FILE -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -Werror -Wall
AM_CXXFLAGS = -D__STDC_LIMIT_MACROS -D_OB_VERSION=400 -D__STDC_CONSTANT_MACROS -D_NO_EXCEPTION 	-Wall -Werror -Wextra -Wunused-parameter 	-Wformat -Wconversion -Wno-deprecated -fno-strict-aliasing -g
AM_LDFLAGS = -lpthread -lm -lrt -ldl -laio -lssl $(am__append_2)
CFLAGS = -g -O2
CPPFLAGS = 
CXXFLAGS = -Wno-error=extra -Wno-error=ignored-qualifiers -Wno-error=unused-but-set-variable -Wno-error=conversion -Wno-error=memset-transposed-args -Wno-error=format-truncation -Wno-error=unused-local-typedefs -Wno-error=aligned-new= -Wno-error=psabi -Wno-error=unused-variable -lcrypto $(am__append_1)
LDFLAGS = 
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT svn_version.o -MD -MP -MF $(DEPDIR)/svn_version.Tpo -c -o svn_version.o `test -f '$(top_srcdir)/svn_version.cpp' || echo '$(srcdir)/'`$(top_srcdir)/svn_version.cpp
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o svn_version.o `test -f '$(top_srcdir)/svn_version.cpp' || echo '$(srcdir)/'`$(top_srcdir)/svn_version.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT svn_version.obj -MD -MP -MF $(DEPDIR)/svn_version.Tpo -c -o svn_version.obj `if test -f '$(top_srcdir)/svn_version.cpp'; then $(CYGPATH_W) '$(top_srcdir)/svn_version.cpp'; else $(CYGPATH_W) '$(srcdir)/$(top_srcdir)/svn_version.cpp'; fi`
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o svn_version.obj `if test -f '$(top_srcdir)/svn_version.cpp'; then $(CYGPATH_W) '$(top_srcdir)/svn_version.cpp'; else $(CYGPATH_W) '$(srcdir)/$(top_srcdir)/svn_version.cpp'; fi`
	echo -n 'const char* build_flags() { return "' >> $@ && echo -n $(CXXFLAGS) $(CPPFLAGS) |sed s/\"//g >> $@ && echo '"; }' >> $@
```
### src/lsync/Makefile


```
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS)
	$(AM_CXXFLAGS) $(CXXFLAGS)
	$(LIBTOOLFLAGS) --mode=link $(CXXLD) $(AM_CXXFLAGS) \
	$(CXXFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_CFLAGS = -g -D_OB_VERSION=400 -DCOMPATIBLE -D__USE_LARGEFILE64 -D_FILE_OFFSET_BITS=64	-D_LARGE_FILE -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -Werror -Wall
AM_CXXFLAGS = -D__STDC_LIMIT_MACROS -D_OB_VERSION=400 -D__STDC_CONSTANT_MACROS -D_NO_EXCEPTION 	-Wall -Werror -Wextra -Wunused-parameter 	-Wformat -Wconversion -Wno-deprecated -fno-strict-aliasing -g
AM_LDFLAGS = -lpthread -lc -lm -lrt -ldl -laio -lcrypt -lssl \
CFLAGS = -g -O2
CPPFLAGS = 
CXXFLAGS = -Wno-error=extra -Wno-error=ignored-qualifiers -Wno-error=unused-but-set-variable -Wno-error=conversion -Wno-error=memset-transposed-args -Wno-error=format-truncation -Wno-error=unused-local-typedefs -Wno-error=aligned-new= -Wno-error=psabi -Wno-error=unused-variable -lcrypto -DORDER_SERIALIZE -D__LSYNC_DEBUG__ \
LDFLAGS = 
AM_CPPFLAGS = -I${TBLIB_ROOT}/include/tbsys \
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT svn_version.o -MD -MP -MF $(DEPDIR)/svn_version.Tpo -c -o svn_version.o `test -f '${top_srcdir}/svn_version.cpp' || echo '$(srcdir)/'`${top_srcdir}/svn_version.cpp
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o svn_version.o `test -f '${top_srcdir}/svn_version.cpp' || echo '$(srcdir)/'`${top_srcdir}/svn_version.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT svn_version.obj -MD -MP -MF $(DEPDIR)/svn_version.Tpo -c -o svn_version.obj `if test -f '${top_srcdir}/svn_version.cpp'; then $(CYGPATH_W) '${top_srcdir}/svn_version.cpp'; else $(CYGPATH_W) '$(srcdir)/${top_srcdir}/svn_version.cpp'; fi`
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o svn_version.obj `if test -f '${top_srcdir}/svn_version.cpp'; then $(CYGPATH_W) '${top_srcdir}/svn_version.cpp'; else $(CYGPATH_W) '$(srcdir)/${top_srcdir}/svn_version.cpp'; fi`
```
### src/compactsstable/Makefile


```
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS)
	$(AM_CXXFLAGS) $(CXXFLAGS)
	$(LIBTOOLFLAGS) --mode=link $(CXXLD) $(AM_CXXFLAGS) \
	$(CXXFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_CFLAGS = -g -D_OB_VERSION=400 -DCOMPATIBLE -D__USE_LARGEFILE64 -D_FILE_OFFSET_BITS=64	-D_LARGE_FILE -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -Werror -Wall
AM_CXXFLAGS = -D__STDC_LIMIT_MACROS -D_OB_VERSION=400 -D__STDC_CONSTANT_MACROS -D_NO_EXCEPTION 	-Wall -Werror -Wextra -Wunused-parameter 	-Wformat -Wconversion -Wno-deprecated -fno-strict-aliasing -g
AM_LDFLAGS = -lpthread -lc -lm -lrt -lcrypt -lssl $(am__append_2)
CFLAGS = -g -O2
CPPFLAGS = 
CXXFLAGS = -Wno-error=extra -Wno-error=ignored-qualifiers -Wno-error=unused-but-set-variable -Wno-error=conversion -Wno-error=memset-transposed-args -Wno-error=format-truncation -Wno-error=unused-local-typedefs -Wno-error=aligned-new= -Wno-error=psabi -Wno-error=unused-variable -lcrypto $(am__append_1)
LDFLAGS = 
AM_CPPFLAGS = -I${TBLIB_ROOT}/include/tbsys \
```
### src/rootserver/Makefile


```
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS)
	$(AM_CXXFLAGS) $(CXXFLAGS)
	$(LIBTOOLFLAGS) --mode=link $(CXXLD) $(AM_CXXFLAGS) \
	$(CXXFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_CFLAGS = -g -D_OB_VERSION=400 -DCOMPATIBLE -D__USE_LARGEFILE64 -D_FILE_OFFSET_BITS=64	-D_LARGE_FILE -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -Werror -Wall
AM_CXXFLAGS = -D__STDC_LIMIT_MACROS -D_OB_VERSION=400 -D__STDC_CONSTANT_MACROS -D_NO_EXCEPTION 	-Wall -Werror -Wextra -Wunused-parameter 	-Wformat -Wconversion -Wno-deprecated -fno-strict-aliasing -g
AM_LDFLAGS = -lpthread -lc -lm -lrt -lssl -laio $(am__append_2)
CFLAGS = -g -O2
CPPFLAGS = 
CXXFLAGS = -Wno-error=extra -Wno-error=ignored-qualifiers -Wno-error=unused-but-set-variable -Wno-error=conversion -Wno-error=memset-transposed-args -Wno-error=format-truncation -Wno-error=unused-local-typedefs -Wno-error=aligned-new= -Wno-error=psabi -Wno-error=unused-variable -lcrypto $(am__append_1)
LDFLAGS = 
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT svn_version.o -MD -MP -MF $(DEPDIR)/svn_version.Tpo -c -o svn_version.o `test -f '$(top_srcdir)/svn_version.cpp' || echo '$(srcdir)/'`$(top_srcdir)/svn_version.cpp
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o svn_version.o `test -f '$(top_srcdir)/svn_version.cpp' || echo '$(srcdir)/'`$(top_srcdir)/svn_version.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT svn_version.obj -MD -MP -MF $(DEPDIR)/svn_version.Tpo -c -o svn_version.obj `if test -f '$(top_srcdir)/svn_version.cpp'; then $(CYGPATH_W) '$(top_srcdir)/svn_version.cpp'; else $(CYGPATH_W) '$(srcdir)/$(top_srcdir)/svn_version.cpp'; fi`
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o svn_version.obj `if test -f '$(top_srcdir)/svn_version.cpp'; then $(CYGPATH_W) '$(top_srcdir)/svn_version.cpp'; else $(CYGPATH_W) '$(srcdir)/$(top_srcdir)/svn_version.cpp'; fi`
	echo -n 'const char* build_flags() { return "' >> $@ && echo -n $(CXXFLAGS) $(CPPFLAGS) |sed s/\"//g >> $@ && echo '"; }' >> $@
```
### src/importserver/Makefile


```
AM_CFLAGS = -g -D_OB_VERSION=400 -DCOMPATIBLE -D__USE_LARGEFILE64 -D_FILE_OFFSET_BITS=64	-D_LARGE_FILE -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -Werror -Wall
AM_CXXFLAGS = -D__STDC_LIMIT_MACROS -D_OB_VERSION=400 -D__STDC_CONSTANT_MACROS -D_NO_EXCEPTION 	-Wall -Werror -Wextra -Wunused-parameter 	-Wformat -Wconversion -Wno-deprecated -fno-strict-aliasing -g
AM_LDFLAGS = 
CFLAGS = -g -O2
CPPFLAGS = 
CXXFLAGS = -Wno-error=extra -Wno-error=ignored-qualifiers -Wno-error=unused-but-set-variable -Wno-error=conversion -Wno-error=memset-transposed-args -Wno-error=format-truncation -Wno-error=unused-local-typedefs -Wno-error=aligned-new= -Wno-error=psabi -Wno-error=unused-variable -lcrypto
LDFLAGS = 
```
### src/sstable/Makefile


```
#CXXFLAGS+= -D_SSTABLE_NO_STAT_
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS)
	$(AM_CXXFLAGS) $(CXXFLAGS)
	$(LIBTOOLFLAGS) --mode=link $(CXXLD) $(AM_CXXFLAGS) \
	$(CXXFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_CFLAGS = -g -D_OB_VERSION=400 -DCOMPATIBLE -D__USE_LARGEFILE64 -D_FILE_OFFSET_BITS=64	-D_LARGE_FILE -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -Werror -Wall
AM_CXXFLAGS = -D__STDC_LIMIT_MACROS -D_OB_VERSION=400 -D__STDC_CONSTANT_MACROS -D_NO_EXCEPTION 	-Wall -Werror -Wextra -Wunused-parameter 	-Wformat -Wconversion -Wno-deprecated -fno-strict-aliasing -g
AM_LDFLAGS = -lpthread -lc -lm -lrt -ldl -laio $(am__append_2)
CFLAGS = -g -O2
CPPFLAGS = 
CXXFLAGS = -Wno-error=extra -Wno-error=ignored-qualifiers -Wno-error=unused-but-set-variable -Wno-error=conversion -Wno-error=memset-transposed-args -Wno-error=format-truncation -Wno-error=unused-local-typedefs -Wno-error=aligned-new= -Wno-error=psabi -Wno-error=unused-variable -lcrypto $(am__append_1)
LDFLAGS = 
AM_CPPFLAGS = -I${TBLIB_ROOT}/include/tbsys \
```
### src/compactsstablev2/Makefile


```
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS)
	$(AM_CXXFLAGS) $(CXXFLAGS)
	$(LIBTOOLFLAGS) --mode=link $(CXXLD) $(AM_CXXFLAGS) \
	$(CXXFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_CFLAGS = -g -D_OB_VERSION=400 -DCOMPATIBLE -D__USE_LARGEFILE64 -D_FILE_OFFSET_BITS=64	-D_LARGE_FILE -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -Werror -Wall
AM_CXXFLAGS = -D__STDC_LIMIT_MACROS -D_OB_VERSION=400 -D__STDC_CONSTANT_MACROS -D_NO_EXCEPTION 	-Wall -Werror -Wextra -Wunused-parameter 	-Wformat -Wconversion -Wno-deprecated -fno-strict-aliasing -g
AM_LDFLAGS = -lpthread -lc -lm -lrt -lcrypt -lssl -pg $(am__append_2)
CFLAGS = -g -O2
CPPFLAGS = 
CXXFLAGS = -Wno-error=extra -Wno-error=ignored-qualifiers -Wno-error=unused-but-set-variable -Wno-error=conversion -Wno-error=memset-transposed-args -Wno-error=format-truncation -Wno-error=unused-local-typedefs -Wno-error=aligned-new= -Wno-error=psabi -Wno-error=unused-variable -lcrypto -D_SSTABLE_NO_STAT_ $(am__append_1)
LDFLAGS = 
AM_CPPFLAGS = -I${TBLIB_ROOT}/include/tbsys \
```
### src/Makefile


```
AM_CFLAGS = -g -D_OB_VERSION=400 -DCOMPATIBLE -D__USE_LARGEFILE64 -D_FILE_OFFSET_BITS=64	-D_LARGE_FILE -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -Werror -Wall
AM_CXXFLAGS = -D__STDC_LIMIT_MACROS -D_OB_VERSION=400 -D__STDC_CONSTANT_MACROS -D_NO_EXCEPTION 	-Wall -Werror -Wextra -Wunused-parameter 	-Wformat -Wconversion -Wno-deprecated -fno-strict-aliasing -g
AM_LDFLAGS = 
CFLAGS = -g -O2
CPPFLAGS = 
CXXFLAGS = -Wno-error=extra -Wno-error=ignored-qualifiers -Wno-error=unused-but-set-variable -Wno-error=conversion -Wno-error=memset-transposed-args -Wno-error=format-truncation -Wno-error=unused-local-typedefs -Wno-error=aligned-new= -Wno-error=psabi -Wno-error=unused-variable -lcrypto
LDFLAGS = 
	echo -n 'const char* build_flags() { return "' >> $@ && echo -n $(CXXFLAGS) $(CPPFLAGS) |sed s/\"//g >> $@ && echo '"; }' >> $@
```
### src/sql/Makefile


```
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS)
	$(AM_CXXFLAGS) $(CXXFLAGS)
	$(LIBTOOLFLAGS) --mode=link $(CXXLD) $(AM_CXXFLAGS) \
	$(CXXFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_CFLAGS = -g -D_OB_VERSION=400 -DCOMPATIBLE -D__USE_LARGEFILE64 -D_FILE_OFFSET_BITS=64	-D_LARGE_FILE -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -Werror -Wall
AM_CXXFLAGS = -D__STDC_LIMIT_MACROS -D_OB_VERSION=400 -D__STDC_CONSTANT_MACROS -D_NO_EXCEPTION 	-Wall -Werror -Wextra -Wunused-parameter 	-Wformat -Wconversion -Wno-deprecated -fno-strict-aliasing -g
AM_LDFLAGS = -lpthread -lc -lm -lrt -lcrypt -lssl $(am__append_2)
CFLAGS = -g -O2
CPPFLAGS = 
CXXFLAGS = -Wno-error=extra -Wno-error=ignored-qualifiers -Wno-error=unused-but-set-variable -Wno-error=conversion -Wno-error=memset-transposed-args -Wno-error=format-truncation -Wno-error=unused-local-typedefs -Wno-error=aligned-new= -Wno-error=psabi -Wno-error=unused-variable -lcrypto $(am__append_1)
LDFLAGS = 
	echo -n 'const char* build_flags() { return "' >> $@ && echo -n $(CXXFLAGS) $(CPPFLAGS) |sed s/\"//g >> $@ && echo '"; }' >> $@
```
### src/client/obsql/src/Makefile


```
	$(LIBTOOLFLAGS) --mode=link $(CXXLD) $(AM_CXXFLAGS) \
	$(CXXFLAGS) $(libobsql_la_LDFLAGS) $(LDFLAGS) -o $@
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS)
	$(AM_CXXFLAGS) $(CXXFLAGS)
	$(LIBTOOLFLAGS) --mode=link $(CXXLD) $(AM_CXXFLAGS) \
	$(CXXFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_CFLAGS = -g -D_OB_VERSION=400 -DCOMPATIBLE -D__USE_LARGEFILE64 -D_FILE_OFFSET_BITS=64	-D_LARGE_FILE -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -Werror -Wall
AM_CXXFLAGS = -D__STDC_LIMIT_MACROS -D_OB_VERSION=400 -D__STDC_CONSTANT_MACROS -D_NO_EXCEPTION 	-Wall -Werror -Wextra -Wunused-parameter 	-Wformat -Wconversion -Wno-deprecated -fno-strict-aliasing -g
AM_LDFLAGS = -lpthread -lc -lm -lrt -ldl -laio $(am__append_2)
CFLAGS = -g -O2
CPPFLAGS = 
CXXFLAGS = -Wno-error=extra -Wno-error=ignored-qualifiers -Wno-error=unused-but-set-variable -Wno-error=conversion -Wno-error=memset-transposed-args -Wno-error=format-truncation -Wno-error=unused-local-typedefs -Wno-error=aligned-new= -Wno-error=psabi -Wno-error=unused-variable -lcrypto $(am__append_1)
LDFLAGS = 
libobsql_la_CFLAGS = -g -fPIC \
libobsql_la_LDFLAGS = -L${top_builddir}/src/common/ \
AM_CPPFLAGS = -I${TBLIB_ROOT}/include/tbnet \
```
### src/client/obsql/demo/Makefile


```
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS)
	$(AM_CXXFLAGS) $(CXXFLAGS)
	$(LIBTOOLFLAGS) --mode=link $(CXXLD) $(AM_CXXFLAGS) \
	$(CXXFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_CFLAGS = -g -D_OB_VERSION=400 -DCOMPATIBLE -D__USE_LARGEFILE64 -D_FILE_OFFSET_BITS=64	-D_LARGE_FILE -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -Werror -Wall
AM_CXXFLAGS = -D__STDC_LIMIT_MACROS -D_OB_VERSION=400 -D__STDC_CONSTANT_MACROS -D_NO_EXCEPTION 	-Wall -Werror -Wextra -Wunused-parameter 	-Wformat -Wconversion -Wno-deprecated -fno-strict-aliasing -g
AM_LDFLAGS = -L/usr/lib64/mysql \
CFLAGS = -g -O2
CPPFLAGS = 
CXXFLAGS = -Wno-error=extra -Wno-error=ignored-qualifiers -Wno-error=unused-but-set-variable -Wno-error=conversion -Wno-error=memset-transposed-args -Wno-error=format-truncation -Wno-error=unused-local-typedefs -Wno-error=aligned-new= -Wno-error=psabi -Wno-error=unused-variable -lcrypto
LDFLAGS = 
AM_CPPFLAGS = -I${top_srcdir}/include\
```
### src/client/obsql/Makefile


```
AM_CFLAGS = -g -D_OB_VERSION=400 -DCOMPATIBLE -D__USE_LARGEFILE64 -D_FILE_OFFSET_BITS=64	-D_LARGE_FILE -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -Werror -Wall
AM_CXXFLAGS = -D__STDC_LIMIT_MACROS -D_OB_VERSION=400 -D__STDC_CONSTANT_MACROS -D_NO_EXCEPTION 	-Wall -Werror -Wextra -Wunused-parameter 	-Wformat -Wconversion -Wno-deprecated -fno-strict-aliasing -g
AM_LDFLAGS = 
CFLAGS = -g -O2
CPPFLAGS = 
CXXFLAGS = -Wno-error=extra -Wno-error=ignored-qualifiers -Wno-error=unused-but-set-variable -Wno-error=conversion -Wno-error=memset-transposed-args -Wno-error=format-truncation -Wno-error=unused-local-typedefs -Wno-error=aligned-new= -Wno-error=psabi -Wno-error=unused-variable -lcrypto
LDFLAGS = 
```
### src/client/obsql/test/Makefile


```
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS)
	$(AM_CXXFLAGS) $(CXXFLAGS)
	$(LIBTOOLFLAGS) --mode=link $(CXXLD) $(AM_CXXFLAGS) \
	$(CXXFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_CFLAGS = -g -D_OB_VERSION=400 -DCOMPATIBLE -D__USE_LARGEFILE64 -D_FILE_OFFSET_BITS=64	-D_LARGE_FILE -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -Werror -Wall
AM_CXXFLAGS = -D__STDC_LIMIT_MACROS -D_OB_VERSION=400 -D__STDC_CONSTANT_MACROS -D_NO_EXCEPTION 	-Wall -Werror -Wextra -Wunused-parameter 	-Wformat -Wconversion -Wno-deprecated -fno-strict-aliasing -g
AM_LDFLAGS = -L/usr/lib64/mysql \
CFLAGS = -g -O2
CPPFLAGS = 
CXXFLAGS = -Wno-error=extra -Wno-error=ignored-qualifiers -Wno-error=unused-but-set-variable -Wno-error=conversion -Wno-error=memset-transposed-args -Wno-error=format-truncation -Wno-error=unused-local-typedefs -Wno-error=aligned-new= -Wno-error=psabi -Wno-error=unused-variable -lcrypto
LDFLAGS = 
AM_CPPFLAGS = -I${top_srcdir}/include\
```
### src/client/libmysql_example/Makefile


```
LDFLAGS = -L/usr/lib64/mysql/ -lmysqlclient
```
### src/client/Makefile


```
AM_CFLAGS = -g -D_OB_VERSION=400 -DCOMPATIBLE -D__USE_LARGEFILE64 -D_FILE_OFFSET_BITS=64	-D_LARGE_FILE -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -Werror -Wall
AM_CXXFLAGS = -D__STDC_LIMIT_MACROS -D_OB_VERSION=400 -D__STDC_CONSTANT_MACROS -D_NO_EXCEPTION 	-Wall -Werror -Wextra -Wunused-parameter 	-Wformat -Wconversion -Wno-deprecated -fno-strict-aliasing -g
AM_LDFLAGS = 
CFLAGS = -g -O2
CPPFLAGS = 
CXXFLAGS = -Wno-error=extra -Wno-error=ignored-qualifiers -Wno-error=unused-but-set-variable -Wno-error=conversion -Wno-error=memset-transposed-args -Wno-error=format-truncation -Wno-error=unused-local-typedefs -Wno-error=aligned-new= -Wno-error=psabi -Wno-error=unused-variable -lcrypto
LDFLAGS = 
```
### src/common/compress/Makefile


```
	$(AM_CXXFLAGS) $(CXXFLAGS) $(liblzo_1_0_la_LDFLAGS) $(LDFLAGS) \
	$(LIBTOOLFLAGS) --mode=link $(CXXLD) $(AM_CXXFLAGS) \
	$(CXXFLAGS) $(libnone_la_LDFLAGS) $(LDFLAGS) -o $@
	$(AM_CXXFLAGS) $(CXXFLAGS) $(libsnappy_1_0_la_LDFLAGS) \
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS)
	$(AM_CXXFLAGS) $(CXXFLAGS)
	$(LIBTOOLFLAGS) --mode=link $(CXXLD) $(AM_CXXFLAGS) \
	$(CXXFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_CFLAGS = -g -D_OB_VERSION=400 -DCOMPATIBLE -D__USE_LARGEFILE64 -D_FILE_OFFSET_BITS=64	-D_LARGE_FILE -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -Werror -Wall
AM_CXXFLAGS = -D__STDC_LIMIT_MACROS -D_OB_VERSION=400 -D__STDC_CONSTANT_MACROS -D_NO_EXCEPTION 	-Wall -Werror -Wextra -Wunused-parameter 	-Wformat -Wconversion -Wno-deprecated -fno-strict-aliasing -g
AM_LDFLAGS = -lc -lm -lrt $(am__append_2)
CFLAGS = -g -O2
CPPFLAGS = 
CXXFLAGS = -Wno-error=extra -Wno-error=ignored-qualifiers -Wno-error=unused-but-set-variable -Wno-error=conversion -Wno-error=memset-transposed-args -Wno-error=format-truncation -Wno-error=unused-local-typedefs -Wno-error=aligned-new= -Wno-error=psabi -Wno-error=unused-variable -lcrypto $(am__append_1)
LDFLAGS = 
AM_CPPFLAGS = -fPIC
liblzo_1_0_la_LDFLAGS = -ldl -lm -llzo2
libsnappy_1_0_la_LDFLAGS = -ldl -lm -lsnappy
libnone_la_LDFLAGS = -ldl
```
### src/common/roottable/Makefile


```
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS)
	$(AM_CXXFLAGS) $(CXXFLAGS)
	$(LIBTOOLFLAGS) --mode=link $(CXXLD) $(AM_CXXFLAGS) \
	$(CXXFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_CFLAGS = -g -D_OB_VERSION=400 -DCOMPATIBLE -D__USE_LARGEFILE64 -D_FILE_OFFSET_BITS=64	-D_LARGE_FILE -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -Werror -Wall
AM_CXXFLAGS = -D__STDC_LIMIT_MACROS -D_OB_VERSION=400 -D__STDC_CONSTANT_MACROS -D_NO_EXCEPTION 	-Wall -Werror -Wextra -Wunused-parameter 	-Wformat -Wconversion -Wno-deprecated -fno-strict-aliasing -g
AM_LDFLAGS = -lpthread -lc -lm -lrt -lnuma -lcrypt -lssl \
CFLAGS = -g -O2
CPPFLAGS = 
CXXFLAGS = -Wno-error=extra -Wno-error=ignored-qualifiers -Wno-error=unused-but-set-variable -Wno-error=conversion -Wno-error=memset-transposed-args -Wno-error=format-truncation -Wno-error=unused-local-typedefs -Wno-error=aligned-new= -Wno-error=psabi -Wno-error=unused-variable -lcrypto $(am__append_1)
LDFLAGS = 
AM_CPPFLAGS = -I${TBLIB_ROOT}/include/tbsys \
```
### src/common/Makefile


```
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS)
	$(AM_CXXFLAGS) $(CXXFLAGS)
	$(LIBTOOLFLAGS) --mode=link $(CXXLD) $(AM_CXXFLAGS) \
	$(CXXFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_CFLAGS = -g -D_OB_VERSION=400 -DCOMPATIBLE -D__USE_LARGEFILE64 -D_FILE_OFFSET_BITS=64	-D_LARGE_FILE -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -Werror -Wall
AM_CXXFLAGS = -D__STDC_LIMIT_MACROS -D_OB_VERSION=400 -D__STDC_CONSTANT_MACROS -D_NO_EXCEPTION 	-Wall -Werror -Wextra -Wunused-parameter 	-Wformat -Wconversion -Wno-deprecated -fno-strict-aliasing -g
AM_LDFLAGS = -lpthread -lc -lm -lrt -lcrypt -lssl -laio \
CFLAGS = -g -O2
CPPFLAGS = 
CXXFLAGS = -Wno-error=extra -Wno-error=ignored-qualifiers -Wno-error=unused-but-set-variable -Wno-error=conversion -Wno-error=memset-transposed-args -Wno-error=format-truncation -Wno-error=unused-local-typedefs -Wno-error=aligned-new= -Wno-error=psabi -Wno-error=unused-variable -lcrypto $(am__append_1)
LDFLAGS = 
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_nb_accessor.o -MD -MP -MF $(DEPDIR)/ob_nb_accessor.Tpo -c -o ob_nb_accessor.o `test -f 'nb_accessor/ob_nb_accessor.cpp' || echo '$(srcdir)/'`nb_accessor/ob_nb_accessor.cpp
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_nb_accessor.o `test -f 'nb_accessor/ob_nb_accessor.cpp' || echo '$(srcdir)/'`nb_accessor/ob_nb_accessor.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_nb_accessor.obj -MD -MP -MF $(DEPDIR)/ob_nb_accessor.Tpo -c -o ob_nb_accessor.obj `if test -f 'nb_accessor/ob_nb_accessor.cpp'; then $(CYGPATH_W) 'nb_accessor/ob_nb_accessor.cpp'; else $(CYGPATH_W) '$(srcdir)/nb_accessor/ob_nb_accessor.cpp'; fi`
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_nb_accessor.obj `if test -f 'nb_accessor/ob_nb_accessor.cpp'; then $(CYGPATH_W) 'nb_accessor/ob_nb_accessor.cpp'; else $(CYGPATH_W) '$(srcdir)/nb_accessor/ob_nb_accessor.cpp'; fi`
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT nb_scan_cond.o -MD -MP -MF $(DEPDIR)/nb_scan_cond.Tpo -c -o nb_scan_cond.o `test -f 'nb_accessor/nb_scan_cond.cpp' || echo '$(srcdir)/'`nb_accessor/nb_scan_cond.cpp
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o nb_scan_cond.o `test -f 'nb_accessor/nb_scan_cond.cpp' || echo '$(srcdir)/'`nb_accessor/nb_scan_cond.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT nb_scan_cond.obj -MD -MP -MF $(DEPDIR)/nb_scan_cond.Tpo -c -o nb_scan_cond.obj `if test -f 'nb_accessor/nb_scan_cond.cpp'; then $(CYGPATH_W) 'nb_accessor/nb_scan_cond.cpp'; else $(CYGPATH_W) '$(srcdir)/nb_accessor/nb_scan_cond.cpp'; fi`
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o nb_scan_cond.obj `if test -f 'nb_accessor/nb_scan_cond.cpp'; then $(CYGPATH_W) 'nb_accessor/nb_scan_cond.cpp'; else $(CYGPATH_W) '$(srcdir)/nb_accessor/nb_scan_cond.cpp'; fi`
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT nb_query_res.o -MD -MP -MF $(DEPDIR)/nb_query_res.Tpo -c -o nb_query_res.o `test -f 'nb_accessor/nb_query_res.cpp' || echo '$(srcdir)/'`nb_accessor/nb_query_res.cpp
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o nb_query_res.o `test -f 'nb_accessor/nb_query_res.cpp' || echo '$(srcdir)/'`nb_accessor/nb_query_res.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT nb_query_res.obj -MD -MP -MF $(DEPDIR)/nb_query_res.Tpo -c -o nb_query_res.obj `if test -f 'nb_accessor/nb_query_res.cpp'; then $(CYGPATH_W) 'nb_accessor/nb_query_res.cpp'; else $(CYGPATH_W) '$(srcdir)/nb_accessor/nb_query_res.cpp'; fi`
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o nb_query_res.obj `if test -f 'nb_accessor/nb_query_res.cpp'; then $(CYGPATH_W) 'nb_accessor/nb_query_res.cpp'; else $(CYGPATH_W) '$(srcdir)/nb_accessor/nb_query_res.cpp'; fi`
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT nb_table_row.o -MD -MP -MF $(DEPDIR)/nb_table_row.Tpo -c -o nb_table_row.o `test -f 'nb_accessor/nb_table_row.cpp' || echo '$(srcdir)/'`nb_accessor/nb_table_row.cpp
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o nb_table_row.o `test -f 'nb_accessor/nb_table_row.cpp' || echo '$(srcdir)/'`nb_accessor/nb_table_row.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT nb_table_row.obj -MD -MP -MF $(DEPDIR)/nb_table_row.Tpo -c -o nb_table_row.obj `if test -f 'nb_accessor/nb_table_row.cpp'; then $(CYGPATH_W) 'nb_accessor/nb_table_row.cpp'; else $(CYGPATH_W) '$(srcdir)/nb_accessor/nb_table_row.cpp'; fi`
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o nb_table_row.obj `if test -f 'nb_accessor/nb_table_row.cpp'; then $(CYGPATH_W) 'nb_accessor/nb_table_row.cpp'; else $(CYGPATH_W) '$(srcdir)/nb_accessor/nb_table_row.cpp'; fi`
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_tablet_location_list.o -MD -MP -MF $(DEPDIR)/ob_tablet_location_list.Tpo -c -o ob_tablet_location_list.o `test -f 'location/ob_tablet_location_list.cpp' || echo '$(srcdir)/'`location/ob_tablet_location_list.cpp
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_tablet_location_list.o `test -f 'location/ob_tablet_location_list.cpp' || echo '$(srcdir)/'`location/ob_tablet_location_list.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_tablet_location_list.obj -MD -MP -MF $(DEPDIR)/ob_tablet_location_list.Tpo -c -o ob_tablet_location_list.obj `if test -f 'location/ob_tablet_location_list.cpp'; then $(CYGPATH_W) 'location/ob_tablet_location_list.cpp'; else $(CYGPATH_W) '$(srcdir)/location/ob_tablet_location_list.cpp'; fi`
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_tablet_location_list.obj `if test -f 'location/ob_tablet_location_list.cpp'; then $(CYGPATH_W) 'location/ob_tablet_location_list.cpp'; else $(CYGPATH_W) '$(srcdir)/location/ob_tablet_location_list.cpp'; fi`
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_tablet_location_cache_proxy.o -MD -MP -MF $(DEPDIR)/ob_tablet_location_cache_proxy.Tpo -c -o ob_tablet_location_cache_proxy.o `test -f 'location/ob_tablet_location_cache_proxy.cpp' || echo '$(srcdir)/'`location/ob_tablet_location_cache_proxy.cpp
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_tablet_location_cache_proxy.o `test -f 'location/ob_tablet_location_cache_proxy.cpp' || echo '$(srcdir)/'`location/ob_tablet_location_cache_proxy.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_tablet_location_cache_proxy.obj -MD -MP -MF $(DEPDIR)/ob_tablet_location_cache_proxy.Tpo -c -o ob_tablet_location_cache_proxy.obj `if test -f 'location/ob_tablet_location_cache_proxy.cpp'; then $(CYGPATH_W) 'location/ob_tablet_location_cache_proxy.cpp'; else $(CYGPATH_W) '$(srcdir)/location/ob_tablet_location_cache_proxy.cpp'; fi`
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_tablet_location_cache_proxy.obj `if test -f 'location/ob_tablet_location_cache_proxy.cpp'; then $(CYGPATH_W) 'location/ob_tablet_location_cache_proxy.cpp'; else $(CYGPATH_W) '$(srcdir)/location/ob_tablet_location_cache_proxy.cpp'; fi`
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_tablet_location_range_iterator.o -MD -MP -MF $(DEPDIR)/ob_tablet_location_range_iterator.Tpo -c -o ob_tablet_location_range_iterator.o `test -f 'location/ob_tablet_location_range_iterator.cpp' || echo '$(srcdir)/'`location/ob_tablet_location_range_iterator.cpp
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_tablet_location_range_iterator.o `test -f 'location/ob_tablet_location_range_iterator.cpp' || echo '$(srcdir)/'`location/ob_tablet_location_range_iterator.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_tablet_location_range_iterator.obj -MD -MP -MF $(DEPDIR)/ob_tablet_location_range_iterator.Tpo -c -o ob_tablet_location_range_iterator.obj `if test -f 'location/ob_tablet_location_range_iterator.cpp'; then $(CYGPATH_W) 'location/ob_tablet_location_range_iterator.cpp'; else $(CYGPATH_W) '$(srcdir)/location/ob_tablet_location_range_iterator.cpp'; fi`
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_tablet_location_range_iterator.obj `if test -f 'location/ob_tablet_location_range_iterator.cpp'; then $(CYGPATH_W) 'location/ob_tablet_location_range_iterator.cpp'; else $(CYGPATH_W) '$(srcdir)/location/ob_tablet_location_range_iterator.cpp'; fi`
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_tablet_location_cache.o -MD -MP -MF $(DEPDIR)/ob_tablet_location_cache.Tpo -c -o ob_tablet_location_cache.o `test -f 'location/ob_tablet_location_cache.cpp' || echo '$(srcdir)/'`location/ob_tablet_location_cache.cpp
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_tablet_location_cache.o `test -f 'location/ob_tablet_location_cache.cpp' || echo '$(srcdir)/'`location/ob_tablet_location_cache.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT ob_tablet_location_cache.obj -MD -MP -MF $(DEPDIR)/ob_tablet_location_cache.Tpo -c -o ob_tablet_location_cache.obj `if test -f 'location/ob_tablet_location_cache.cpp'; then $(CYGPATH_W) 'location/ob_tablet_location_cache.cpp'; else $(CYGPATH_W) '$(srcdir)/location/ob_tablet_location_cache.cpp'; fi`
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o ob_tablet_location_cache.obj `if test -f 'location/ob_tablet_location_cache.cpp'; then $(CYGPATH_W) 'location/ob_tablet_location_cache.cpp'; else $(CYGPATH_W) '$(srcdir)/location/ob_tablet_location_cache.cpp'; fi`
```
### src/common/btree/Makefile


```
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS)
	$(AM_CXXFLAGS) $(CXXFLAGS)
	$(LIBTOOLFLAGS) --mode=link $(CXXLD) $(AM_CXXFLAGS) \
	$(CXXFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_CFLAGS = -g -D_OB_VERSION=400 -DCOMPATIBLE -D__USE_LARGEFILE64 -D_FILE_OFFSET_BITS=64	-D_LARGE_FILE -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -Werror -Wall
AM_CXXFLAGS = -D__STDC_LIMIT_MACROS -D_OB_VERSION=400 -D__STDC_CONSTANT_MACROS -D_NO_EXCEPTION 	-Wall -Werror -Wextra -Wunused-parameter 	-Wformat -Wconversion -Wno-deprecated -fno-strict-aliasing -g
AM_LDFLAGS = -lc -lm -lrt $(am__append_2)
CFLAGS = -g -O2
CPPFLAGS = 
CXXFLAGS = -Wno-error=extra -Wno-error=ignored-qualifiers -Wno-error=unused-but-set-variable -Wno-error=conversion -Wno-error=memset-transposed-args -Wno-error=format-truncation -Wno-error=unused-local-typedefs -Wno-error=aligned-new= -Wno-error=psabi -Wno-error=unused-variable -lcrypto $(am__append_1)
LDFLAGS = 
AM_CPPFLAGS = -I${TBLIB_ROOT}/include/tbsys 
```
### src/common/btree/test/Makefile


```
	$(LIBTOOLFLAGS) --mode=link $(CXXLD) $(AM_CXXFLAGS) \
	$(CXXFLAGS) $(btree_test_LDFLAGS) $(LDFLAGS) -o $@
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS)
	$(AM_CXXFLAGS) $(CXXFLAGS)
	$(LIBTOOLFLAGS) --mode=link $(CXXLD) $(AM_CXXFLAGS) \
	$(CXXFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_CFLAGS = -g -D_OB_VERSION=400 -DCOMPATIBLE -D__USE_LARGEFILE64 -D_FILE_OFFSET_BITS=64	-D_LARGE_FILE -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -Werror -Wall
AM_CXXFLAGS = -D__STDC_LIMIT_MACROS -D_OB_VERSION=400 -D__STDC_CONSTANT_MACROS -D_NO_EXCEPTION 	-Wall -Werror -Wextra -Wunused-parameter 	-Wformat -Wconversion -Wno-deprecated -fno-strict-aliasing -g
AM_LDFLAGS = -lpthread
CFLAGS = -g -O2
CPPFLAGS = 
CXXFLAGS = -Wno-error=extra -Wno-error=ignored-qualifiers -Wno-error=unused-but-set-variable -Wno-error=conversion -Wno-error=memset-transposed-args -Wno-error=format-truncation -Wno-error=unused-local-typedefs -Wno-error=aligned-new= -Wno-error=psabi -Wno-error=unused-variable -lcrypto
LDFLAGS = 
AM_CPPFLAGS = -I${top_srcdir}/src/common/btree -I${TBLIB_ROOT}/include/tbsys 
btree_test_LDFLAGS = -lgtest
```
### src/common/timezone/Makefile


```
AM_CFLAGS = -g -D_OB_VERSION=400 -DCOMPATIBLE -D__USE_LARGEFILE64 -D_FILE_OFFSET_BITS=64	-D_LARGE_FILE -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -Werror -Wall -DUSG_COMPAT
AM_CXXFLAGS = -D__STDC_LIMIT_MACROS -D_OB_VERSION=400 -D__STDC_CONSTANT_MACROS -D_NO_EXCEPTION 	-Wall -Werror -Wextra -Wunused-parameter 	-Wformat -Wconversion -Wno-deprecated -fno-strict-aliasing -g
AM_LDFLAGS = -lpthread -lc -lm -lrt -lcrypt -lssl -laio \
CFLAGS = -g -O2
CPPFLAGS = 
CXXFLAGS = -Wno-error=extra -Wno-error=ignored-qualifiers -Wno-error=unused-but-set-variable -Wno-error=conversion -Wno-error=memset-transposed-args -Wno-error=format-truncation -Wno-error=unused-local-typedefs -Wno-error=aligned-new= -Wno-error=psabi -Wno-error=unused-variable -lcrypto $(am__append_1)
LDFLAGS = 
```
### src/mrsstable/Makefile


```
AM_CFLAGS = -g -D_OB_VERSION=400 -DCOMPATIBLE -D__USE_LARGEFILE64 -D_FILE_OFFSET_BITS=64	-D_LARGE_FILE -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -Werror -Wall
AM_CXXFLAGS = -D__STDC_LIMIT_MACROS -D_OB_VERSION=400 -D__STDC_CONSTANT_MACROS -D_NO_EXCEPTION 	-Wall -Werror -Wextra -Wunused-parameter 	-Wformat -Wconversion -Wno-deprecated -fno-strict-aliasing -g
AM_LDFLAGS = 
CFLAGS = -g -O2
CPPFLAGS = 
CXXFLAGS = -Wno-error=extra -Wno-error=ignored-qualifiers -Wno-error=unused-but-set-variable -Wno-error=conversion -Wno-error=memset-transposed-args -Wno-error=format-truncation -Wno-error=unused-local-typedefs -Wno-error=aligned-new= -Wno-error=psabi -Wno-error=unused-variable -lcrypto
LDFLAGS = 
```
### src/mergeserver/Makefile


```
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS)
	$(AM_CXXFLAGS) $(CXXFLAGS)
	$(LIBTOOLFLAGS) --mode=link $(CXXLD) $(AM_CXXFLAGS) \
	$(CXXFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_CFLAGS = -g -D_OB_VERSION=400 -DCOMPATIBLE -D__USE_LARGEFILE64 -D_FILE_OFFSET_BITS=64	-D_LARGE_FILE -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -Werror -Wall
AM_CXXFLAGS = -D__STDC_LIMIT_MACROS -D_OB_VERSION=400 -D__STDC_CONSTANT_MACROS -D_NO_EXCEPTION 	-Wall -Werror -Wextra -Wunused-parameter 	-Wformat -Wconversion -Wno-deprecated -fno-strict-aliasing -g
AM_LDFLAGS = -lpthread -lc -lm -lrt -lssl -laio $(am__append_2) \
CFLAGS = -g -O2
CPPFLAGS = 
CXXFLAGS = -Wno-error=extra -Wno-error=ignored-qualifiers -Wno-error=unused-but-set-variable -Wno-error=conversion -Wno-error=memset-transposed-args -Wno-error=format-truncation -Wno-error=unused-local-typedefs -Wno-error=aligned-new= -Wno-error=psabi -Wno-error=unused-variable -lcrypto $(am__append_1)
LDFLAGS = 
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT svn_version.o -MD -MP -MF $(DEPDIR)/svn_version.Tpo -c -o svn_version.o `test -f '$(top_srcdir)/svn_version.cpp' || echo '$(srcdir)/'`$(top_srcdir)/svn_version.cpp
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o svn_version.o `test -f '$(top_srcdir)/svn_version.cpp' || echo '$(srcdir)/'`$(top_srcdir)/svn_version.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT svn_version.obj -MD -MP -MF $(DEPDIR)/svn_version.Tpo -c -o svn_version.obj `if test -f '$(top_srcdir)/svn_version.cpp'; then $(CYGPATH_W) '$(top_srcdir)/svn_version.cpp'; else $(CYGPATH_W) '$(srcdir)/$(top_srcdir)/svn_version.cpp'; fi`
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o svn_version.obj `if test -f '$(top_srcdir)/svn_version.cpp'; then $(CYGPATH_W) '$(top_srcdir)/svn_version.cpp'; else $(CYGPATH_W) '$(srcdir)/$(top_srcdir)/svn_version.cpp'; fi`
	echo -n 'const char* build_flags() { return "' >> $@ && echo -n $(CXXFLAGS) $(CPPFLAGS) |sed s/\"//g >> $@ && echo '"; }' >> $@
```
