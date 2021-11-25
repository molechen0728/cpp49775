#include "pch.h"
#include "cpp49775.h"
#include <stdlib.h>


SomeData __stdcall new_data()
{
	SomeData sd;
	sd.data = (char*)malloc(sizeof(char) * 1024);
	sd.len = 1024;
	return sd;
}

void __stdcall delete_data(SomeData* data)
{
	free(data->data);
	data->len = 0;
}