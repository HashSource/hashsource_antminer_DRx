double *__fastcall json_loads(int a1, int a2, char *a3)
{
  int v6; // r3
  double *v7; // r4
  _DWORD v9[2]; // [sp+0h] [bp-54h] BYREF
  _DWORD v10[2]; // [sp+8h] [bp-4Ch] BYREF
  char v11; // [sp+10h] [bp-44h]
  int v12; // [sp+18h] [bp-3Ch]
  int v13; // [sp+1Ch] [bp-38h]
  int v14; // [sp+20h] [bp-34h]
  int v15; // [sp+24h] [bp-30h]
  int v16; // [sp+2Ch] [bp-28h]
  _DWORD v17[9]; // [sp+30h] [bp-24h] BYREF

  jsonp_error_init(a3, "<string>");
  if ( a1 )
  {
    LOWORD(v6) = -29496;
    v7 = 0;
    HIWORD(v6) = (unsigned int)&loc_34C40 >> 16;
    v9[0] = a1;
    v10[0] = v6;
    v9[1] = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v15 = 0;
    v16 = 0;
    v10[1] = v9;
    v14 = 1;
    if ( !strbuffer_init(v17) )
    {
      v17[3] = a2;
      v17[5] = -1;
      v7 = sub_39DF4(v10, a2, (int)a3);
      sub_38E9C((int)v10);
    }
  }
  else
  {
    v7 = 0;
    sub_38D6C((int)a3, 0, 4, "wrong arguments");
  }
  return v7;
}
