double *__fastcall json_load_callback(double *a1, int a2, int a3, char *a4)
{
  int v8; // r3
  _DWORD v10[2]; // [sp+0h] [bp-45Ch] BYREF
  char v11; // [sp+8h] [bp-454h]
  int v12; // [sp+10h] [bp-44Ch]
  int v13; // [sp+14h] [bp-448h]
  int v14; // [sp+18h] [bp-444h]
  int v15; // [sp+1Ch] [bp-440h]
  int v16; // [sp+24h] [bp-438h]
  _DWORD v17[8]; // [sp+28h] [bp-434h] BYREF
  _DWORD s[261]; // [sp+48h] [bp-414h] BYREF

  memset(s, 0, 0x410u);
  s[259] = a2;
  s[258] = a1;
  jsonp_error_init(a4, "<callback>");
  if ( a1 )
  {
    LOWORD(v8) = -29424;
    a1 = 0;
    HIWORD(v8) = (unsigned int)&loc_34C88 >> 16;
    v10[1] = s;
    v10[0] = v8;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v15 = 0;
    v16 = 0;
    v14 = 1;
    if ( !strbuffer_init(v17) )
    {
      v17[3] = a3;
      v17[5] = -1;
      a1 = sub_39DF4(v10, a3, (int)a4);
      sub_38E9C((int)v10);
    }
  }
  else
  {
    sub_38D6C((int)a4, 0, 4, "wrong arguments");
  }
  return a1;
}
