#ifndef _RANGES_H
#define _RANGES_H

#include "frida-gumjs.h"

extern gboolean ranges_debug_maps;
extern gboolean ranges_inst_libs;

void ranges_config(void);
void ranges_init(void);

gboolean range_is_excluded(gpointer address);

void ranges_exclude();

void ranges_add_include(GumMemoryRange *range);
void ranges_add_exclude(GumMemoryRange *range);

#endif

