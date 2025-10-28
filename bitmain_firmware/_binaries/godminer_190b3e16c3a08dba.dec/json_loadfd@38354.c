double *__fastcall json_loadfd(int a1, int a2, char *a3)
{
  char *v3; // r12
  char *v4; // r3
  char *v6; // r1
  int v8; // r3
  double *v9; // r4
  const char *v11; // r3
  int v12; // [sp+4h] [bp-4Ch] BYREF
  _DWORD v13[2]; // [sp+8h] [bp-48h] BYREF
  char v14; // [sp+10h] [bp-40h]
  int v15; // [sp+18h] [bp-38h]
  int v16; // [sp+1Ch] [bp-34h]
  int v17; // [sp+20h] [bp-30h]
  int v18; // [sp+24h] [bp-2Ch]
  int v19; // [sp+2Ch] [bp-24h]
  _DWORD v20[8]; // [sp+30h] [bp-20h] BYREF

  LOWORD(v3) = 9092;
  LOWORD(v4) = 9100;
  v12 = a1;
  if ( a1 )
  {
    HIWORD(v4) = (unsigned int)"" >> 16;
    v6 = v4;
  }
  else
  {
    HIWORD(v3) = (unsigned int)"ig" >> 16;
    v6 = v3;
  }
  jsonp_error_init(a3, v6);
  if ( v12 < 0 )
  {
    LOWORD(v11) = 9064;
    HIWORD(v11) = (unsigned int)" exiting." >> 16;
    v9 = 0;
    sub_36F4C((int)a3, 0, 4, v11);
  }
  else
  {
    LOWORD(v8) = 28860;
    v9 = 0;
    HIWORD(v8) = (unsigned int)&loc_34E54 >> 16;
    v13[0] = v8;
    v13[1] = &v12;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v18 = 0;
    v19 = 0;
    v17 = 1;
    if ( !strbuffer_init(v20) )
    {
      v20[3] = a2;
      v20[5] = -1;
      v9 = sub_37FD4(v13, a2, (int)a3);
      sub_3707C((int)v13);
    }
  }
  return v9;
}
