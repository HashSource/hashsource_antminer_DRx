void __fastcall sub_395EC(int a1)
{
  int *v1; // r4
  int v2; // r5
  int i; // r0
  int v4; // t1
  int *v5; // r4
  int v6; // r6
  int v7; // [sp+18h] [bp-814h] BYREF
  __int16 v8; // [sp+1Ch] [bp-810h]
  char v9; // [sp+1Eh] [bp-80Eh] BYREF
  int v10; // [sp+20h] [bp-80Ch] BYREF
  __int16 v11; // [sp+24h] [bp-808h] BYREF
  char s[2052]; // [sp+28h] [bp-804h] BYREF

  v10 = 369404501;
  v1 = &v10;
  v11 = 6656;
  v7 = 255;
  v2 = (a1 << 16) | 0x400000;
  v8 = 0;
  pthread_mutex_lock(&stru_6FC94);
  for ( i = 85; ; i = v4 )
  {
    sub_382C4(i | v2);
    if ( v1 == (int *)((char *)&v11 + 1) )
      break;
    v4 = *((unsigned __int8 *)v1 + 1);
    v1 = (int *)((char *)v1 + 1);
  }
  v5 = &v7;
  sub_2A810();
  do
  {
    *(_BYTE *)v5 = sub_3832C(v2);
    v5 = (int *)((char *)v5 + 1);
  }
  while ( &v9 != (char *)v5 );
  pthread_mutex_unlock(&stru_6FC94);
  v6 = BYTE1(v7);
  if ( BYTE1(v7) == 22 && BYTE2(v7) == 1 )
  {
    if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      snprintf(s, 0x800u, "%s ok", "heart_beat_PIC16F1704_new");
      sub_343C4(7, s, 0);
    }
  }
  else if ( (byte_73320 || byte_6FA70 || dword_6D35C > 2)
         && ((snprintf(s, 0x800u, "%s failed!", "heart_beat_PIC16F1704_new"), sub_343C4(3, s, 0), byte_73320)
          || byte_6FA70)
         || dword_6D35C > 2 )
  {
    snprintf(
      s,
      0x800u,
      "%s: read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x, read_back_data[3] = 0x%x, read_back_data[4] = 0x%x, read_back_data[5] = 0x%x\n",
      "heart_beat_PIC16F1704_new",
      (unsigned __int8)v7,
      v6,
      BYTE2(v7),
      HIBYTE(v7),
      (unsigned __int8)v8,
      HIBYTE(v8));
    sub_343C4(3, s, 0);
  }
}
