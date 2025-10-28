int __fastcall sub_90F98(_DWORD *a1, int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  char v5; // r8
  int (__fastcall *v9)(_DWORD *, int *); // r3
  signed int v11; // r2
  unsigned __int8 *v12; // r0
  unsigned __int8 *v13; // r4
  void (__fastcall *v14)(_DWORD *, int *, signed int, unsigned __int8 *, int *); // r5
  int v15; // r5
  signed int v16; // [sp+14h] [bp-20h]
  int v17; // [sp+1Ch] [bp-18h] BYREF
  int v18; // [sp+20h] [bp-14h] BYREF
  int v19; // [sp+24h] [bp-10h]
  int v20; // [sp+28h] [bp-Ch]
  int v21; // [sp+2Ch] [bp-8h]

  v5 = a2;
  v20 = 0;
  v19 = 0;
  v21 = 0;
  v18 = a3 | 0x1980000;
  BYTE1(v20) = a2;
  v9 = (int (__fastcall *)(_DWORD *, int *))a1[70];
  HIWORD(v20) = 255;
  if ( v9(a1, &v18) )
    return 0;
  usleep(0xC350u);
  *a4 = 0;
  v19 = 0;
  *a5 = 0;
  v11 = a1[89];
  v20 = 0;
  v21 = 0;
  v18 = 0;
  if ( v11 >= 1 )
    v11 = 1;
  v16 = v11;
  v12 = (unsigned __int8 *)calloc(v11, 0xCu);
  BYTE1(v20) = v5;
  v13 = v12;
  v14 = (void (__fastcall *)(_DWORD *, int *, signed int, unsigned __int8 *, int *))a1[75];
  HIWORD(v20) = 255;
  v14(a1, &v18, v16, v12, &v17);
  v15 = v17;
  if ( v17 == 1 && a2 == v13[4] )
  {
    *a4 = *(_DWORD *)v13;
    *a5 = 1;
  }
  free(v13);
  return v15;
}
