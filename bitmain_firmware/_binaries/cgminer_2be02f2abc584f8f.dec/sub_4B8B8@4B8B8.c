int __fastcall sub_4B8B8(int a1)
{
  int v2; // r6
  int v3; // r11
  int v4; // r7
  char *v5; // r5
  char v7[2052]; // [sp+0h] [bp-804h] BYREF

  v2 = 0;
  *(_BYTE *)(a1 + 61) = 0;
  v3 = sub_42544(2);
  v4 = a1;
  v5 = (char *)&unk_93504;
  do
  {
    if ( ((v3 >> v2) & 1) != 0 )
    {
      ++*(_BYTE *)(a1 + 61);
      *(_BYTE *)(v4 + 124) = 1;
      v5[8] = 1;
      ++byte_93C56;
      if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
      {
        snprintf(v7, 0x800u, "detected chain %d", v2);
        sub_3F1C0(5, v7, 0);
      }
    }
    else
    {
      *(_BYTE *)(v4 + 124) = 0;
      v5[8] = 0;
    }
    ++v2;
    ++v4;
    ++v5;
  }
  while ( v2 != 4 );
  if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
  {
    snprintf(v7, 0x800u, "detect total chain num %d", *(unsigned __int8 *)(a1 + 61));
    sub_3F1C0(4, v7, 0);
  }
  if ( !*(_BYTE *)(a1 + 61) )
  {
    sub_4B834(0);
    while ( 1 )
    {
      if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
      {
        strcpy(v7, "No Hash Board\n");
        sub_3F1C0(3, v7, 0);
      }
      sleep(3u);
    }
  }
  return sub_2FF20();
}
