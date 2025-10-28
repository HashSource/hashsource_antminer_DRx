int __fastcall sub_4E5B4(int a1)
{
  int v2; // r6
  int v3; // r11
  int v4; // r7
  char *v5; // r5
  char v7[2052]; // [sp+0h] [bp-804h] BYREF

  v2 = 0;
  *(_BYTE *)(a1 + 61) = 0;
  v3 = sub_437FC(2);
  v4 = a1;
  v5 = (char *)&unk_B3AFC;
  do
  {
    if ( ((v3 >> v2) & 1) != 0 )
    {
      ++*(_BYTE *)(a1 + 61);
      *(_BYTE *)(v4 + 156) = 1;
      v5[24] = 1;
      ++byte_B435C;
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
      {
        snprintf(v7, 0x800u, "detected chain %d", v2);
        sub_3F178(5, v7, 0);
      }
    }
    else
    {
      *(_BYTE *)(v4 + 156) = 0;
      v5[24] = 0;
    }
    ++v2;
    ++v4;
    ++v5;
  }
  while ( v2 != 4 );
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
  {
    snprintf(v7, 0x800u, "detect total chain num %d", *(unsigned __int8 *)(a1 + 61));
    sub_3F178(4, v7, 0);
  }
  if ( !*(_BYTE *)(a1 + 61) )
  {
    sub_4E244(0);
    while ( 1 )
    {
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
      {
        strcpy(v7, "No Hash Board\n");
        sub_3F178(3, v7, 0);
      }
      sleep(3u);
    }
  }
  return sub_30140();
}
