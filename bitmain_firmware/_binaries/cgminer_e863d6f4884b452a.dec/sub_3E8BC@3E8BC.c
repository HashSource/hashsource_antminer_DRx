int __fastcall sub_3E8BC(int a1)
{
  int v1; // r5
  int v2; // r3
  int v3; // r6
  int v5; // lr
  _BYTE *v7; // [sp+0h] [bp-82Ch]
  int v8; // [sp+4h] [bp-828h]
  char s[2052]; // [sp+28h] [bp-804h] BYREF

  v1 = 0;
  v2 = dword_6FAEC;
  *(_BYTE *)(a1 + 61) = 0;
  v3 = (unsigned __int8)byte_73320;
  v5 = 0;
  v8 = *(_DWORD *)(v2 + 8);
  v7 = &unk_73ED8;
  do
  {
    if ( ((v8 >> v1) & 1) != 0 )
    {
      *(_BYTE *)(a1 + 61) = v5 + 1;
      *(_BYTE *)(a1 + v1 + 156) = 1;
      v7[v1 + 24] = 1;
      ++v7[2144];
      if ( v3 || (v3 = (unsigned __int8)byte_6FA70, byte_6FA70) || dword_6D35C > 4 )
      {
        snprintf(s, 0x800u, "detected chain %d", v1, v7);
        sub_343C4(5, s, 0);
        v3 = (unsigned __int8)byte_73320;
      }
      v5 = *(unsigned __int8 *)(a1 + 61);
    }
    else
    {
      *(_BYTE *)(a1 + v1 + 156) = 0;
      v7[v1 + 24] = 0;
    }
    ++v1;
  }
  while ( v1 != 4 );
  if ( v3 || byte_6FA70 || dword_6D35C > 3 )
  {
    snprintf(s, 0x800u, "detect total chain num %d", v5);
    sub_343C4(4, s, 0);
    v5 = *(unsigned __int8 *)(a1 + 61);
  }
  if ( !v5 )
  {
    sub_3E808(0);
    while ( 1 )
    {
      if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
      {
        strcpy(s, "No Hash Board\n");
        sub_343C4(3, s, 0);
      }
      sleep(3u);
    }
  }
  return sub_2A7F4();
}
