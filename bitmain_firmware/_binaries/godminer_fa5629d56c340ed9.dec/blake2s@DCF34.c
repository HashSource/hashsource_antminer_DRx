int __fastcall blake2s(void *a1, char *a2, const void *a3, size_t a4, unsigned __int64 a5, unsigned __int8 a6)
{
  bool v6; // zf
  bool v7; // zf
  _BYTE v12[197]; // [sp+3Fh] [bp-C5h] BYREF

  v6 = a1 == 0;
  if ( a1 )
    v6 = a2 == 0;
  if ( v6 )
    return -1;
  v7 = a6 == 0;
  if ( a6 )
    v7 = a3 == 0;
  if ( !v7 )
  {
    if ( blake2s_init_key((int *)((unsigned int)v12 & 0xFFFFFFC0), a4, a3, a6) < 0 )
      return -1;
LABEL_9:
    blake2s_update((_DWORD *)((unsigned int)v12 & 0xFFFFFFC0), a2, a5);
    blake2s_final((unsigned int)v12 & 0xFFFFFFC0, a1, a4);
    return 0;
  }
  if ( blake2s_init((int *)((unsigned int)v12 & 0xFFFFFFC0), a4) >= 0 )
    goto LABEL_9;
  return -1;
}
