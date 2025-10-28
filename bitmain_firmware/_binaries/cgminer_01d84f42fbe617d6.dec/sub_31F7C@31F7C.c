int __fastcall sub_31F7C(unsigned __int8 *a1, unsigned __int8 **a2, _DWORD *a3, _DWORD *a4)
{
  size_t v7; // r0
  unsigned __int8 *v8; // r0
  unsigned __int8 *v9; // r4
  unsigned __int8 *v11[2]; // [sp+4h] [bp-80Ch] BYREF
  unsigned __int8 *v12; // [sp+Ch] [bp-804h] BYREF
  char v13[2048]; // [sp+10h] [bp-800h] BYREF

  v11[0] = a1;
  v7 = strlen((const char *)a1);
  v8 = (unsigned __int8 *)malloc(v7 + 1);
  v9 = v8;
  v12 = v8;
  if ( !v8 )
  {
    strcpy(v13, "Failed to malloc pooldetails buf");
    sub_38438(3, v13, 1);
    sub_16724(1);
  }
  *a2 = v8;
  sub_31EF4(v11, &v12);
  if ( *v11[0] && (*a3 = v12, sub_31EF4(v11, &v12), *v11[0]) )
  {
    *a4 = v12;
    sub_31EF4(v11, &v12);
    return 1;
  }
  else
  {
    free(v9);
    return 0;
  }
}
