int __fastcall sub_38EBC(_DWORD *a1)
{
  size_t v1; // r10
  int v2; // r8
  _DWORD *v3; // r9
  int result; // r0
  _DWORD *v5; // r6
  int v6; // r1
  int v7; // r3
  const char *v8; // r2
  int v9; // r3
  bool v10; // zf
  int v11; // r3
  bool v12; // zf
  const char *v13; // r2
  int v14; // r3
  bool v15; // zf
  int v16; // r3
  bool v17; // zf
  const char *v18; // r2
  int v19; // r3
  __int64 v20; // r6
  const char *v21; // r2
  bool v22; // zf
  int v23; // r2
  const char *v24; // r2
  int v25; // r1
  _DWORD *v26; // r8
  char v27; // [sp+17h] [bp-99h] BYREF
  int v28; // [sp+18h] [bp-98h] BYREF
  char v29; // [sp+1Ch] [bp-94h] BYREF
  int v30; // [sp+20h] [bp-90h] BYREF
  char v31; // [sp+24h] [bp-8Ch] BYREF
  _DWORD v32[2]; // [sp+28h] [bp-88h] BYREF
  char src[160]; // [sp+30h] [bp-80h] BYREF

  v1 = a1[2];
  v2 = *(_DWORD *)(v1 + 60);
  v3 = *(_DWORD **)(v2 + 28);
  result = (unsigned __int16)sub_27AAC(a1, src, 128, v32);
  src[(unsigned __int16)result] = 0;
  if ( !(_WORD)result )
    return result;
  *(_DWORD *)(v2 + 168) = (unsigned __int16)result;
  v5 = (_DWORD *)(v2 + 216);
  strcpy((char *)(v2 + 40), src);
  v6 = v32[1];
  v7 = *(_DWORD *)(v2 + 168);
  *(_DWORD *)(v2 + 216) = v32[0];
  *(_DWORD *)(v2 + 220) = v6;
  sub_387C8(v1, (int)"receive(%s) [%d]\n", (const char *)(v2 + 40), v7);
  *v3 = 2;
  sub_2DDBC(v1 + 12, (const char *)(v2 + 40));
  if ( *(_BYTE *)(v2 + 40) == 63 || !strcmp((const char *)(v2 + 40), "ERROR 05 NO SUCH FUNCTION") )
    return (int)sub_38920(v1, 1, v8);
  v9 = *(unsigned __int8 *)(v2 + 45);
  v10 = v9 == 43;
  if ( v9 != 43 )
    v10 = v9 == 45;
  if ( !v10 )
    goto LABEL_27;
  v11 = *(unsigned __int8 *)(v2 + 49);
  v12 = v11 == 43;
  if ( v11 != 43 )
    v12 = v11 == 45;
  if ( !v12 || sscanf((const char *)(v2 + 40), "%5d%*c%3d%*c%3d", &v30, &v29, &v31) != 3 )
  {
LABEL_27:
    if ( sscanf((const char *)(v2 + 40), "F%2d", &v28) == 1 && v28 > 0 && v28 <= 79 )
    {
      if ( v28 == 50 )
        return (int)sub_38920(v1, 3, (const char *)0x32);
      if ( v28 == 51 )
        return (int)sub_38920(v1, 4, (const char *)0x33);
      return (int)sub_387C8(v1, (int)"got F%02d - ignoring\n", v28);
    }
    if ( !strcmp((const char *)(v2 + 40), " TRUETIME Mk III") || !strncmp((const char *)(v2 + 40), " TRUETIME XL", 0xCu) )
    {
      result = (int)sub_38920(v1, 2, v13);
      if ( (dword_7BE6C & 0x400) != 0 )
        return sub_4FE78(6, "TM/TMD/XL: %s", (const char *)(v2 + 40));
      return result;
    }
    v14 = *(unsigned __int8 *)(v2 + 40);
    v15 = v14 == 78;
    if ( v14 != 78 )
      v15 = v14 == 83;
    if ( v15 )
    {
      v16 = *(unsigned __int8 *)(v2 + 49);
      v17 = v16 == 87;
      if ( v16 != 87 )
        v17 = v16 == 69;
      if ( v17 && *(_BYTE *)(v2 + 58) == 43 )
      {
        result = (int)sub_38920(v1, 7, v13);
        if ( (dword_7BE6C & 0x400) != 0 )
          return sub_4FE78(6, "TCU-800: %s", (const char *)(v2 + 40));
        return result;
      }
    }
    if ( *(_BYTE *)(v2 + 43) != 58
      || *(_BYTE *)(v2 + 46) != 58
      || *(_BYTE *)(v2 + 49) != 58
      || sscanf((const char *)(v2 + 40), "%3d:%2d:%2d:%2d%c", v2 + 176, v2 + 180, v2 + 184, v2 + 188, &v27) != 5 )
    {
      return sub_27040(v1, 2);
    }
    v22 = v27 == 62;
    if ( v27 != 62 )
      v22 = v27 == 35;
    if ( v22 )
    {
      v23 = 1;
    }
    else
    {
      v23 = 0;
      if ( v27 != 63 && v27 != 88 )
      {
        *(_BYTE *)(v2 + 32) = 0;
        goto LABEL_55;
      }
    }
    *(_BYTE *)(v2 + 32) = 3;
LABEL_55:
    result = (int)sub_38920(v1, 8, (const char *)v23);
    if ( v3[2] )
    {
      sub_38920(v1, 6, v24);
      if ( sub_27698((_DWORD *)v2) )
      {
        v25 = *(_DWORD *)(v2 + 220);
        v26 = (_DWORD *)(v2 + 208);
        *v26 = *v5;
        v26[1] = v25;
        sub_276A0(v1);
        result = sub_27040(v1, 0);
        v3[2] = 0;
      }
      else
      {
        return sub_27040(v1, 6);
      }
    }
    return result;
  }
  if ( (unsigned int)(v30 - 7001) > 0x1B56 )
  {
    v18 = "UNKNOWN";
  }
  else
  {
    v18 = "EAST";
    v19 = v30 <= 9999;
    if ( v30 > 9999 )
      v18 = "WEST";
    if ( v3[1] != v19 )
    {
      v20 = *(_QWORD *)(v2 + 736);
      *(_QWORD *)(v2 + 736) = *(_QWORD *)(v2 + 728);
      *(_QWORD *)(v2 + 728) = v20;
      v3[1] = v19;
    }
  }
  sub_387C8(v1, (int)"GOES: station %s\n", v18);
  return (int)sub_38920(v1, 5, v21);
}
