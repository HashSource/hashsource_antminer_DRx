int __fastcall sub_36BEC(unsigned __int8 *a1, _BYTE **a2, _BYTE **a3, _BYTE **a4)
{
  size_t v7; // r0
  _BYTE *v8; // r4
  unsigned __int8 *v10[2]; // [sp+4h] [bp-810h] BYREF
  char v11[2036]; // [sp+Ch] [bp-808h] BYREF
  _BYTE *v12[2]; // [sp+80Ch] [bp-8h] BYREF

  v10[0] = a1;
  v7 = strlen((const char *)a1);
  v8 = malloc(v7 + 1);
  v12[0] = v8;
  if ( !v8 )
  {
    strcpy(v11, "Failed to malloc pooldetails buf");
    sub_3F178(3, v11, 1);
    sub_134A4(1);
  }
  *a2 = v12[0];
  sub_364EC(44, v10, v12);
  if ( *v10[0] && (*a3 = v12[0], sub_364EC(44, v10, v12), *v10[0]) )
  {
    *a4 = v12[0];
    sub_364EC(44, v10, v12);
    return 1;
  }
  else
  {
    free(v8);
    return 0;
  }
}
