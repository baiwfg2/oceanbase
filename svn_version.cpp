const char* svn_version() { const char* SVN_Version = "Unversioned directory"; return SVN_Version; }
const char* build_date() { return __DATE__; }
const char* build_time() { return __TIME__; }
const char* build_flags() { return "-Wno-error=extra -Wno-error=ignored-qualifiers -Wno-error=unused-but-set-variable -Wno-error=conversion -Wno-error=memset-transposed-args -Wno-error=format-truncation -Wno-error=unused-local-typedefs -Wno-error=aligned-new= -Wno-error=psabi -Wno-error=unused-variable -lcrypto"; }
