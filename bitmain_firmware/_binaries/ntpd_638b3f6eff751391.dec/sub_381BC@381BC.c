const char *__fastcall sub_381BC(_DWORD *a1)
{
  size_t v1; // r8
  int v2; // r4
  int *v3; // r5
  int v4; // r6
  _BYTE *v5; // r0
  _BYTE *v6; // r1
  const char *result; // r0
  int v8; // r1
  int v9; // r6
  int v10; // r3
  int v11; // r2
  bool v12; // cc
  int v13; // r3
  bool v14; // zf
  const char *v15; // r3
  unsigned int v16; // s15
  int v17; // r1
  char v18; // [sp+26h] [bp-6h] BYREF
  char v19; // [sp+27h] [bp-5h] BYREF
  unsigned int v20; // [sp+28h] [bp-4h] BYREF
  _DWORD v21[2]; // [sp+2Ch] [bp+0h] BYREF
  char v22; // [sp+34h] [bp+8h] BYREF
  char v23; // [sp+40h] [bp+14h] BYREF
  char v24; // [sp+49h] [bp+1Dh]
  char v25; // [sp+4Ch] [bp+20h]

  v1 = a1[2];
  v2 = *(_DWORD *)(v1 + 60);
  v3 = *(int **)(v2 + 28);
  v4 = v3[1];
  v5 = sub_27AAC(a1, (_BYTE *)v4, v2 + 166 - v4, v21);
  v5[v4] = 32;
  v6 = &v5[v4 + 1];
  v3[1] = (int)v6;
  *v6 = 0;
  if ( *v3 )
  {
    v10 = *v3 + 1;
    v11 = v3[1];
    v12 = v10 <= 2;
    result = (const char *)(v2 + 40);
    *v3 = v10;
    v13 = v11 - (v2 + 40);
    *(_DWORD *)(v2 + 168) = v13;
    if ( !v12 )
    {
      if ( v13 > 45
        && sscanf(
             result,
             "%c%2d:%2d:%2d.%3ld%c %9s%3d%13s%4ld",
             &v18,
             v2 + 180,
             v2 + 184,
             v2 + 188,
             v2 + 192,
             &v19,
             &v22,
             v2 + 176,
             &v23,
             &v20) == 10 )
      {
        v14 = v24 == 56;
        *(_DWORD *)(v2 + 192) *= 1000000;
        if ( !v14 )
          *(_BYTE *)(v2 + 32) = 3;
        if ( v25 == 72 )
          v15 = "WWVH";
        else
          v15 = "WWV";
        *(_DWORD *)(v2 + 748) = *(_DWORD *)v15;
        if ( *(unsigned __int8 *)(v1 + 69) <= 1u )
          *(_DWORD *)(v1 + 88) = *(_DWORD *)(v2 + 748);
        v16 = v20;
        if ( !v20 )
        {
          v17 = *(_DWORD *)(v2 + 220);
          *(_DWORD *)(v2 + 208) = *(_DWORD *)(v2 + 216);
          *(_DWORD *)(v2 + 212) = v17;
        }
        *(double *)(v2 + 232) = (double)v16 * 0.00001 * 60.0;
        result = (const char *)sub_27698((_DWORD *)v2);
        if ( result )
        {
          if ( *(double *)(v1 + 432) > 1.5 )
            return (const char *)sub_276A0(v1);
        }
        else
        {
          return (const char *)sub_27040(v1, 6);
        }
      }
      else
      {
        return (const char *)sub_27040(v1, 2);
      }
    }
  }
  else
  {
    result = (const char *)v21[0];
    v8 = v21[1];
    v9 = v3[1];
    *(_DWORD *)(v2 + 216) = v21[0];
    *(_DWORD *)(v2 + 220) = v8;
    *v3 = 1;
    *(_DWORD *)(v2 + 168) = v9 - (v2 + 40);
  }
  return result;
}
