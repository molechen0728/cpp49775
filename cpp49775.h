#pragma once
typedef struct {
    char* data;
    unsigned int len;
} SomeData;

extern "C" _declspec(dllexport) SomeData __stdcall new_data();
extern "C" _declspec(dllexport) void __stdcall delete_data(SomeData * data);