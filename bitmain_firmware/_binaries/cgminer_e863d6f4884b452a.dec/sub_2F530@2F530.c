int __fastcall sub_2F530(unsigned __int8 *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  size_t v7; // r0
  void *v8; // r0
  void *v9; // r4
  unsigned __int8 *v11[2]; // [sp+4h] [bp-80Ch] BYREF
  void *v12; // [sp+Ch] [bp-804h] BYREF
  char v13[2048]; // [sp+10h] [bp-800h] BYREF

  v11[0] = a1;
  v7 = strlen((const char *)a1);
  v8 = malloc(v7 + 1);
  v9 = v8;
  v12 = v8;
  if ( !v8 )
  {
    strcpy(v13, "Failed to malloc pooldetails buf");
    sub_343C4(3, v13, 1);
    sub_26B0C(1);
  }
  *a2 = v8;
  sub_2F4E8(v11, (int *)&v12);
  if ( *v11[0] && (*a3 = v12, sub_2F4E8(v11, (int *)&v12), *v11[0]) )
  {
    *a4 = v12;
    sub_2F4E8(v11, (int *)&v12);
    return 1;
  }
  else
  {
    free(v9);
    return 0;
  }
}
