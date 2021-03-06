/*This file is generated by luagen.*/
#include "lua_ftk_icon_view.h"
#include "lua_ftk_callbacks.h"

static void tolua_reg_types (lua_State* L)
{
	tolua_usertype(L, "FtkIconView");
}

static int lua_ftk_icon_view_create(lua_State* L)
{
	tolua_Error err = {0};
	FtkIconView* retv;
	FtkWidget* parent;
	int x;
	int y;
	int width;
	int height;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err) && tolua_isnumber(L, 3, 0, &err) && tolua_isnumber(L, 4, 0, &err) && tolua_isnumber(L, 5, 0, &err);

	return_val_if_fail(param_ok, 0);

	parent = tolua_tousertype(L, 1, 0);
	x = tolua_tonumber(L, 2, 0);
	y = tolua_tonumber(L, 3, 0);
	width = tolua_tonumber(L, 4, 0);
	height = tolua_tonumber(L, 5, 0);
	retv = ftk_icon_view_create(parent, x, y, width, height);
	tolua_pushusertype(L, (FtkIconView*)retv, "FtkIconView");

	return 1;
}

static int lua_ftk_icon_view_set_item_size(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkWidget* thiz;
	int size;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	size = tolua_tonumber(L, 2, 0);
	retv = ftk_icon_view_set_item_size(thiz, size);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_icon_view_set_clicked_listener(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkWidget* thiz;
	char* listener;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isstring(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	listener = (char*)tolua_tostring(L, 2, 0);
	retv = ftk_icon_view_set_clicked_listener(thiz, lua_ftk_icon_view_item_listener_func, listener);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_icon_view_get_count(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_icon_view_get_count(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_icon_view_remove(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkWidget* thiz;
	int index;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	index = tolua_tonumber(L, 2, 0);
	retv = ftk_icon_view_remove(thiz, index);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_icon_view_add(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkWidget* thiz;
	FtkIconViewItem* item;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isusertype(L, 2, "FtkIconViewItem", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	item = tolua_tousertype(L, 2, 0);
	retv = ftk_icon_view_add(thiz, item);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_icon_view_get(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkWidget* thiz;
	int index;
	const FtkIconViewItem* item;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	index = tolua_tonumber(L, 2, 0);
	retv = ftk_icon_view_get(thiz, index, &item);
	tolua_pushnumber(L, (lua_Number)retv);
	tolua_pushusertype(L, (FtkIconViewItem*)item, "FtkIconViewItem");

	return 1;
}

int tolua_ftk_icon_view_init(lua_State* L)
{
	tolua_open(L);
	tolua_reg_types(L);
	tolua_module(L, NULL, 0);
	tolua_beginmodule(L, NULL);
	tolua_cclass(L,"FtkIconView", "FtkIconView", "FtkWidget", NULL);
	tolua_beginmodule(L, "FtkIconView");
	tolua_function(L, "Create", lua_ftk_icon_view_create);
	tolua_function(L, "SetItemSize", lua_ftk_icon_view_set_item_size);
	tolua_function(L, "SetClickedListener", lua_ftk_icon_view_set_clicked_listener);
	tolua_function(L, "GetCount", lua_ftk_icon_view_get_count);
	tolua_function(L, "Remove", lua_ftk_icon_view_remove);
	tolua_function(L, "Add", lua_ftk_icon_view_add);
	tolua_function(L, "Get", lua_ftk_icon_view_get);
	tolua_endmodule(L);
	tolua_endmodule(L);


	return 1;
}
