int __fastcall json_dump_callback(json_t *a1, int (__fastcall *a2)(const char *, int, int), int a3, __int16 a4)
{
  if ( (a4 & 0x200) != 0 || a1 && *(_DWORD *)a1 == 1 || a1 && !*(_DWORD *)a1 )
    return do_dump(a1, a4, 0, a2, a3);
  else
    return -1;
}
