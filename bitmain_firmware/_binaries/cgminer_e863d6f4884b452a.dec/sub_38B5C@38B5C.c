int __fastcall sub_38B5C(int a1)
{
  int *v1; // r4
  int v2; // r5
  int i; // r0
  int v4; // t1
  int v5; // r4
  int v6; // r5
  bool v7; // zf
  int result; // r0
  int v9; // [sp+8h] [bp-808h] BYREF
  __int16 v10; // [sp+Ch] [bp-804h] BYREF
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v10 = 2304;
  v1 = &v9;
  v9 = 84191829;
  v2 = (a1 << 16) | 0x400000;
  pthread_mutex_lock(&stru_6FC94);
  for ( i = 85; ; i = v4 )
  {
    sub_382C4(i | v2);
    if ( (int *)((char *)&v10 + 1) == v1 )
      break;
    v4 = *((unsigned __int8 *)v1 + 1);
    v1 = (int *)((char *)v1 + 1);
  }
  sub_2A810();
  v5 = sub_3832C(v2);
  v6 = sub_3832C(v2);
  pthread_mutex_unlock(&stru_6FC94);
  sub_2A810();
  v7 = v5 == 5;
  if ( v5 == 5 )
    v7 = v6 == 1;
  if ( v7 )
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
    {
      snprintf(s, 0x800u, "%s ok\n\n", "write_data_into_PIC16F1704_flash_new");
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
      "write_data_into_PIC16F1704_flash_new",
      v5,
      v6);
    sub_343C4(3, s, 0);
    return 0;
  }
  return result;
}
