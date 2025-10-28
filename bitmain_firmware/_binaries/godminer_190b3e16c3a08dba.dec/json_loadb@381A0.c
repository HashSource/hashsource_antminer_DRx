double *__fastcall json_loadb(int a1, int a2, int a3, char *a4)
{
  char *v5; // r1
  int v9; // r3
  double *v10; // r4
  const char *v12; // r3
  _DWORD v13[3]; // [sp+4h] [bp-54h] BYREF
  _DWORD v14[2]; // [sp+10h] [bp-48h] BYREF
  char v15; // [sp+18h] [bp-40h]
  int v16; // [sp+20h] [bp-38h]
  int v17; // [sp+24h] [bp-34h]
  int v18; // [sp+28h] [bp-30h]
  int v19; // [sp+2Ch] [bp-2Ch]
  int v20; // [sp+34h] [bp-24h]
  _DWORD v21[8]; // [sp+38h] [bp-20h] BYREF

  LOWORD(v5) = 9080;
  HIWORD(v5) = (unsigned int)"remote" >> 16;
  jsonp_error_init(a4, v5);
  if ( a1 )
  {
    LOWORD(v9) = 28364;
    v10 = 0;
    HIWORD(v9) = (unsigned int)&loc_34C64 >> 16;
    v13[0] = a1;
    v13[1] = a2;
    v14[0] = v9;
    v13[2] = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v19 = 0;
    v20 = 0;
    v14[1] = v13;
    v18 = 1;
    if ( !strbuffer_init(v21) )
    {
      v21[3] = a3;
      v21[5] = -1;
      v10 = sub_37FD4(v14, a3, (int)a4);
      sub_3707C((int)v14);
    }
  }
  else
  {
    LOWORD(v12) = 9064;
    HIWORD(v12) = (unsigned int)" exiting." >> 16;
    v10 = 0;
    sub_36F4C((int)a4, 0, 4, v12);
  }
  return v10;
}
