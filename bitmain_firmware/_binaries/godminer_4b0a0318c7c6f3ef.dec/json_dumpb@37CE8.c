int __fastcall json_dumpb(_DWORD *a1, int a2, int a3, int a4)
{
  int (__fastcall *v4)(__int16 *, int, int); // r1
  int v6; // [sp+4h] [bp-Ch] BYREF
  int v7; // [sp+8h] [bp-8h]
  int v8; // [sp+Ch] [bp-4h]

  v8 = a2;
  LOWORD(v4) = 28724;
  HIWORD(v4) = (unsigned int)&loc_32FAC >> 16;
  v6 = a3;
  v7 = 0;
  if ( json_dump_callback(a1, v4, (int)&v6, a4) )
    return 0;
  else
    return v7;
}
