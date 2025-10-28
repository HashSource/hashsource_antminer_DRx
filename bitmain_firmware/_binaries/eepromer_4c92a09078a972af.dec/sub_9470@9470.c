int __fastcall sub_9470(int a1, __int16 a2)
{
  int v4; // r5
  unsigned int v5; // r7
  unsigned int v6; // r3
  unsigned int v7; // r5
  signed int i; // r4
  int v9; // r0
  _BYTE v11[64]; // [sp+0h] [bp-40h] BYREF

  sub_93DC(a1, a2, dword_11CF8);
  if ( (unsigned int)(*(_DWORD *)(dword_11CF8 + 4) + 64) <= 0x3F )
    return 0;
  v4 = 64;
  v5 = 64;
  while ( !sub_8DF0(a1, a2, v5, (int)v11) )
  {
    v6 = *(_DWORD *)(dword_11CF8 + 4) + 64;
    v7 = v6 - v4;
    if ( v7 > 0x3F )
    {
      v7 = 64;
LABEL_6:
      for ( i = 0; i < (int)v7; ++i )
      {
        v9 = (unsigned __int8)v11[i];
        IO_putc(v9, (_IO_FILE *)stdout);
      }
      v6 = *(_DWORD *)(dword_11CF8 + 4) + 64;
      goto LABEL_9;
    }
    if ( v7 )
      goto LABEL_6;
LABEL_9:
    v5 += 64;
    v4 = v5;
    if ( v5 > v6 )
      return 0;
  }
  fwrite("Block read failed\n", 1u, 0x12u, (FILE *)stderr);
  return 1;
}
