/* * Copyright (C) Xiaozhe Wang (chaoslawful) * Copyright (C) Yichun Zhang (agentzh) */#ifndef _NGX_TCP_LUA_SLEEP_H_INCLUDED_#define _NGX_TCP_LUA_SLEEP_H_INCLUDED_#include "ngx_tcp_lua_common.h"void ngx_tcp_lua_inject_sleep_api(lua_State *L);void ngx_tcp_lua_sleep_cleanup(void *data);#endif /* _NGX_TCP_LUA_SLEEP_H_INCLUDED_ */