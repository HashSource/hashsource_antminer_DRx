int __fastcall sub_33CAC(int a1, int a2, int a3, int a4)
{
  int result; // r0
  int v7; // r10
  _DWORD *v8; // r9
  int v9; // r4
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  const char *v14; // r2
  _DWORD *v15; // r0
  const char *v16; // r2
  _DWORD *v17; // r0
  const char *v18; // r2
  _DWORD *v19; // r0
  _BOOL4 v20; // r3
  int v21; // [sp+Ch] [bp-4h] BYREF

  if ( !dword_63CC0 )
    return sub_32F3C((unsigned int *)a1, 10, 0, 0, a4);
  result = sub_32F3C((unsigned int *)a1, 69, 0, 0, a4);
  if ( a4 )
  {
    result = sub_30708((unsigned int *)a1, ",\"DEVDETAILS\":[");
    v7 = result;
  }
  else
  {
    v7 = 0;
  }
  v8 = 0;
  v21 = 0;
  if ( dword_63CC0 > 0 )
  {
    result = 0;
    do
    {
      v9 = sub_1AB68(result);
      v10 = sub_32DB0(v8, "DEVDETAILS", (const char *)&v21, 0);
      v11 = sub_32CFC(v10, "Name", *(const char **)(*(_DWORD *)(v9 + 4) + 8), 0);
      v12 = sub_32DB0(v11, "ID", (const char *)(v9 + 8), 0);
      v13 = sub_32CFC(v12, "Driver", *(const char **)(*(_DWORD *)(v9 + 4) + 4), 0);
      v14 = *(const char **)(v9 + 168);
      if ( !v14 )
        v14 = "";
      v15 = sub_32D20(v13, "Kernel", v14, 0);
      v16 = *(const char **)(v9 + 12);
      if ( !v16 )
        v16 = "";
      v17 = sub_32D20(v15, "Model", v16, 0);
      v18 = *(const char **)(v9 + 16);
      if ( !v18 )
        v18 = "";
      v19 = sub_32D20(v17, "Device Path", v18, 0);
      v20 = a4;
      if ( a4 )
        v20 = v21 > 0;
      v8 = (_DWORD *)sub_32418((unsigned int *)a1, (int)v19, a4, v20);
      result = ++v21;
    }
    while ( v21 < dword_63CC0 );
  }
  if ( v7 )
    *(_BYTE *)(a1 + 13) = 1;
  return result;
}
