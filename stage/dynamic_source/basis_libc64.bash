#!/bin/bash


function compile()
{
	
	cd %CA2_ROOT%nodeapp/seed/metaseed


g++ -std=c++0x -fexceptions -fnon-call-exceptions -fno-pie -fno-stack-protector -Wno-pointer-arith -Wno-attributes -Winvalid-pch -fPIC   -g -D_DEBUG    -I../../../app-core/appseed/netnode_dynamic_source_library -I../../../app/thirdparty/appseed -I. -I.. -I../.. -I../core -I../../nodeapp/linux -I../../nodeapp/linux/include -I../../../app -I../../../app/include -I../../.. -I../../../app/appseed -I../../../app/appseed/core -I../../../app/appseed/base -I../../../app/appseed/axis -I../../../app/appseed/aura -I../../../app/axis  -I/netnodenet/net/netseed/include -c -I"%CA2_ROOT%time/dynamic_source/library/include" "%CA2_ROOT%time/dynamic_source/%ITEM_NAME%.cpp" -o "%CA2_ROOT%time/intermediate/%PLATFORM%/%CONFIGURATION_NAME%/netnode_dynamic_source_library/%ITEM_NAME%.o" &> "%CA2_ROOT%time/dynamic_source/%ITEM_NAME%-compile-log.txt"


}


compile
