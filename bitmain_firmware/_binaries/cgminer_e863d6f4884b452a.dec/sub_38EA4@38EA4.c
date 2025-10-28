int __fastcall sub_38EA4(int a1, int a2)
{
  char *v3; // r4
  int v4; // r5
  int i; // r0
  int v6; // t1
  int v7; // r4
  int v8; // r5
  bool v9; // zf
  int result; // r0
  int v11; // [sp+8h] [bp-80Ch] BYREF
  char v12; // [sp+Ch] [bp-808h]
  char v13; // [sp+Dh] [bp-807h]
  char v14; // [sp+Eh] [bp-806h]
  char v15; // [sp+Fh] [bp-805h] BYREF
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v14 = a2 + 21;
  v3 = (char *)&v11 + 1;
  v13 = (unsigned __int16)(a2 + 21) >> 8;
  v12 = a2;
  v4 = (a1 << 16) | 0x400000;
  v11 = 268806741;
  pthread_mutex_lock(&stru_6FC94);
  for ( i = 85; ; i = v6 )
  {
    sub_382C4(i | v4);
    if ( v3 == &v15 )
      break;
    v6 = (unsigned __int8)*v3++;
  }
  sub_2A810();
  v7 = sub_3832C(v4);
  v8 = sub_3832C(v4);
  pthread_mutex_unlock(&stru_6FC94);
  sub_2A810();
  v9 = v7 == 16;
  if ( v7 == 16 )
    v9 = v8 == 1;
  if ( v9 )
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
    {
      snprintf(s, 0x800u, "%s ok, voltage = 0x%02x", "set_PIC16F1704_voltage_new", a2);
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
      "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
      "set_PIC16F1704_voltage_new",
      v7,
      v8);
    sub_343C4(3, s, 0);
    return 0;
  }
  return result;
}
