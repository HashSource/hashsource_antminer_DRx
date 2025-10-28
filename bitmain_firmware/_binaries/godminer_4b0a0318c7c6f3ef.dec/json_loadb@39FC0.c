double *__fastcall json_loadb(int a1, int a2, int a3, char *a4)
{
  int v8; // r3
  double *v9; // r4
  _DWORD v11[3]; // [sp+4h] [bp-54h] BYREF
  _DWORD v12[2]; // [sp+10h] [bp-48h] BYREF
  char v13; // [sp+18h] [bp-40h]
  int v14; // [sp+20h] [bp-38h]
  int v15; // [sp+24h] [bp-34h]
  int v16; // [sp+28h] [bp-30h]
  int v17; // [sp+2Ch] [bp-2Ch]
  int v18; // [sp+34h] [bp-24h]
  _DWORD v19[8]; // [sp+38h] [bp-20h] BYREF

  jsonp_error_init(a4, "<buffer>");
  if ( a1 )
  {
    LOWORD(v8) = -29460;
    v9 = 0;
    HIWORD(v8) = (unsigned int)&loc_34C64 >> 16;
    v11[0] = a1;
    v11[1] = a2;
    v12[0] = v8;
    v11[2] = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v17 = 0;
    v18 = 0;
    v12[1] = v11;
    v16 = 1;
    if ( !strbuffer_init(v19) )
    {
      v19[3] = a3;
      v19[5] = -1;
      v9 = sub_39DF4(v12, a3, (int)a4);
      sub_38E9C((int)v12);
    }
  }
  else
  {
    v9 = 0;
    sub_38D6C((int)a4, 0, 4, "wrong arguments");
  }
  return v9;
}
