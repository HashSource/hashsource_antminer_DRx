int __fastcall sub_393B8(int a1)
{
  char *v1; // r4
  int v2; // r5
  int i; // r0
  int v4; // t1
  int v5; // r4
  int v6; // r5
  bool v7; // zf
  int result; // r0
  int v9; // [sp+8h] [bp-808h] BYREF
  __int16 v10; // [sp+Ch] [bp-804h]
  char v11; // [sp+Eh] [bp-802h]
  char v12; // [sp+Fh] [bp-801h] BYREF
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v9 = 352692821;
  v1 = (char *)&v9 + 1;
  v10 = 1;
  v2 = (a1 << 16) | 0x400000;
  v11 = 27;
  pthread_mutex_lock(&stru_6FC94);
  for ( i = 85; ; i = v4 )
  {
    sub_382C4(i | v2);
    if ( v1 == &v12 )
      break;
    v4 = (unsigned __int8)*v1++;
  }
  sub_2A810();
  v5 = sub_3832C(v2);
  v6 = sub_3832C(v2);
  pthread_mutex_unlock(&stru_6FC94);
  v7 = v5 == 21;
  if ( v5 == 21 )
    v7 = v6 == 1;
  if ( v7 )
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
    {
      snprintf(s, 0x800u, "%s ok", "enable_PIC16F1704_dc_dc_new");
      sub_343C4(5, s, 0);
      return 1;
    }
    else
    {
      return 1;
    }
  }
  else if ( byte_73320 || (result = (unsigned __int8)byte_6FA70, byte_6FA70) || dword_6D35C > 2 )
  {
    snprintf(
      s,
      0x800u,
      "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x",
      "enable_PIC16F1704_dc_dc_new",
      v5,
      v6);
    sub_343C4(3, s, 0);
    return 0;
  }
  return result;
}
