int __fastcall sub_3837C(int a1, __int16 a2, __int16 a3)
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
  char v15; // [sp+Fh] [bp-805h]
  char v16[2052]; // [sp+10h] [bp-804h] BYREF

  v12 = a2;
  v3 = (char *)&v11 + 1;
  v15 = a3 + 7 + a2;
  v14 = (unsigned __int16)(a3 + 7 + a2) >> 8;
  v4 = (a1 << 16) | 0x400000;
  v13 = a3;
  v11 = 17214037;
  pthread_mutex_lock(&stru_6FC94);
  for ( i = 85; ; i = v6 )
  {
    sub_382C4(i | v4);
    if ( v3 == v16 )
      break;
    v6 = (unsigned __int8)*v3++;
  }
  sub_2A810();
  v7 = sub_3832C(v4);
  v8 = sub_3832C(v4);
  pthread_mutex_unlock(&stru_6FC94);
  v9 = v7 == 1;
  if ( v7 == 1 )
    v9 = v8 == 1;
  if ( v9 )
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
    {
      snprintf(v16, 0x800u, "%s ok", "set_PIC16F1704_flash_pointer_new");
      sub_343C4(5, v16, 0);
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
      v16,
      0x800u,
      "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
      "set_PIC16F1704_flash_pointer_new",
      v7,
      v8);
    sub_343C4(3, v16, 0);
    return 0;
  }
  return result;
}
