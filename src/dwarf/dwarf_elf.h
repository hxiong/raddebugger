// Copyright (c) 2025 Epic Games Tools
// Licensed under the MIT license (https://opensource.org/license/mit/)

#ifndef DWARF_ELF_H
#define DWARF_ELF_H

internal B32 dw_is_dwarf_present_elf_section_table(String8 raw_image, ELF_BinInfo *bin);
internal DW_Input dw_input_from_elf_section_table(Arena *arena, String8 raw_image, ELF_BinInfo *bin);

#endif // DWARF_ELF_H
