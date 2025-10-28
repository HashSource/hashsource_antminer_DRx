void __fastcall sub_41A58(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r4
  char v5[2052]; // [sp+0h] [bp-804h] BYREF

  v2 = open("/dev/i2c-0", 2050);
  v3 = a1;
  v4 = 0;
  *(_DWORD *)(a1 + 187) = v2;
  do
  {
    if ( *(_BYTE *)(v3 + 157) )
    {
      if ( ioctl(v2, 0x703u, *(int *)((char *)&unk_557AC + v4) >> 1) < 0 )
        perror("set i2c slave addr  error");
      v2 = *(_DWORD *)(a1 + 187);
    }
    v4 += 4;
    ++v3;
  }
  while ( v4 != 16 );
  dword_C54A6 = v2;
  if ( byte_632F0 || byte_630C0 || dword_60964 > 4 )
  {
    strcpy(v5, "i2c init ok");
    sub_38438(5, v5, 0);
  }
}
