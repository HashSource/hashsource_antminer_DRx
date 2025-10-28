double *__fastcall json_loadfd(int a1, int a2, char *a3)
{
  char *v4; // r1
  int v6; // r3
  double *v7; // r4
  int v9; // [sp+4h] [bp-4Ch] BYREF
  _DWORD v10[2]; // [sp+8h] [bp-48h] BYREF
  char v11; // [sp+10h] [bp-40h]
  int v12; // [sp+18h] [bp-38h]
  int v13; // [sp+1Ch] [bp-34h]
  int v14; // [sp+20h] [bp-30h]
  int v15; // [sp+24h] [bp-2Ch]
  int v16; // [sp+2Ch] [bp-24h]
  _DWORD v17[8]; // [sp+30h] [bp-20h] BYREF

  v9 = a1;
  if ( a1 )
    v4 = "<stream>";
  else
    v4 = "<stdin>";
  jsonp_error_init(a3, v4);
  if ( v9 < 0 )
  {
    v7 = 0;
    sub_38D6C((int)a3, 0, 4, "wrong arguments");
  }
  else
  {
    LOWORD(v6) = -28964;
    v7 = 0;
    HIWORD(v6) = (unsigned int)&loc_34E54 >> 16;
    v10[0] = v6;
    v10[1] = &v9;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v15 = 0;
    v16 = 0;
    v14 = 1;
    if ( !strbuffer_init(v17) )
    {
      v17[3] = a2;
      v17[5] = -1;
      v7 = sub_39DF4(v10, a2, (int)a3);
      sub_38E9C((int)v10);
    }
  }
  return v7;
}
