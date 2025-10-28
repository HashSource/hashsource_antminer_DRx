int __fastcall json_dump_callback(_DWORD *a1, int (__fastcall *a2)(__int16 *, int, int), int a3, int a4)
{
  int v8; // r4
  unsigned int v10[8]; // [sp+Ch] [bp-20h] BYREF

  if ( (a4 & 0x200) == 0 && (!a1 || *a1 > 1u) || hashtable_init(v10) )
    return -1;
  v8 = sub_37458(a1, a4, 0, v10, a2, a3);
  hashtable_close((int)v10);
  return v8;
}
