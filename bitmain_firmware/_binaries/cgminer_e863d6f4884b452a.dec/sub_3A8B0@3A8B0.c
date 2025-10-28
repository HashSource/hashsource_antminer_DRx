int __fastcall sub_3A8B0(int a1, unsigned int a2)
{
  char *v2; // r4
  int v3; // r5
  int i; // r0
  int v5; // t1
  int v6; // r4
  int v7; // r5
  bool v8; // zf
  int result; // r0
  int v10; // [sp+8h] [bp-808h] BYREF
  char v11; // [sp+Ch] [bp-804h]
  char v12; // [sp+Dh] [bp-803h]
  char v13; // [sp+Eh] [bp-802h]
  char v14; // [sp+Fh] [bp-801h]
  char v15[2048]; // [sp+10h] [bp-800h] BYREF

  v2 = (char *)&v10 + 1;
  v11 = BYTE1(a2);
  v14 = a2 + BYTE1(a2) + 42;
  v12 = a2;
  v13 = (unsigned __int16)((unsigned __int8)a2 + (unsigned __int16)(a2 >> 8) + 42) >> 8;
  v10 = 604416597;
  v3 = (a1 << 16) | 0x400000;
  pthread_mutex_lock(&stru_6FC94);
  for ( i = 85; ; i = v5 )
  {
    sub_382C4(i | v3);
    if ( v2 == v15 )
      break;
    v5 = (unsigned __int8)*v2++;
  }
  sub_2A810();
  v6 = sub_3832C(v3);
  v7 = sub_3832C(v3);
  pthread_mutex_unlock(&stru_6FC94);
  sub_2A810();
  v8 = v6 == 36;
  if ( v6 == 36 )
    v8 = v7 == 1;
  if ( v8 )
  {
    if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      snprintf(v15, 0x800u, "\n--- %s ok\n\n", "save_freq_PIC16F1704_new");
      sub_343C4(7, v15, 0);
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
      v15,
      0x800u,
      "\n--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
      "save_freq_PIC16F1704_new",
      v6,
      v7);
    sub_343C4(3, v15, 0);
    return 0;
  }
  return result;
}
