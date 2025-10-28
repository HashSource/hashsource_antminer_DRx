double *__fastcall json_load_callback(double *a1, int a2, int a3, char *a4)
{
  char *v8; // r1
  int v9; // r3
  const char *v11; // r3
  _DWORD v12[2]; // [sp+0h] [bp-45Ch] BYREF
  char v13; // [sp+8h] [bp-454h]
  int v14; // [sp+10h] [bp-44Ch]
  int v15; // [sp+14h] [bp-448h]
  int v16; // [sp+18h] [bp-444h]
  int v17; // [sp+1Ch] [bp-440h]
  int v18; // [sp+24h] [bp-438h]
  _DWORD v19[8]; // [sp+28h] [bp-434h] BYREF
  _DWORD s[261]; // [sp+48h] [bp-414h] BYREF

  memset(s, 0, 0x410u);
  LOWORD(v8) = 9136;
  HIWORD(v8) = (unsigned int)"" >> 16;
  s[259] = a2;
  s[258] = a1;
  jsonp_error_init(a4, v8);
  if ( a1 )
  {
    LOWORD(v9) = 28400;
    a1 = 0;
    HIWORD(v9) = (unsigned int)&loc_34C88 >> 16;
    v12[1] = s;
    v12[0] = v9;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v17 = 0;
    v18 = 0;
    v16 = 1;
    if ( !strbuffer_init(v19) )
    {
      v19[3] = a3;
      v19[5] = -1;
      a1 = sub_37FD4(v12, a3, (int)a4);
      sub_3707C((int)v12);
    }
  }
  else
  {
    LOWORD(v11) = 9064;
    HIWORD(v11) = (unsigned int)" exiting." >> 16;
    sub_36F4C((int)a4, 0, 4, v11);
  }
  return a1;
}
