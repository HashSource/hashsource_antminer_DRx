void __fastcall sub_3F17C(int a1)
{
  _DWORD *v1; // r7
  int v3; // r6
  char *v4; // r5
  int i; // r4
  int v6; // t1
  int v7; // r11
  int v8; // r2
  _BYTE buf[4]; // [sp+Ch] [bp-1808h] BYREF
  char v10[2048]; // [sp+10h] [bp-1804h] BYREF
  char s[4080]; // [sp+810h] [bp-1004h] BYREF

  v1 = &unk_55A74;
  v3 = a1;
  v4 = (char *)&unk_C4BCC;
  for ( i = 0; i != 4; ++i )
  {
    v6 = v1[1];
    ++v1;
    sprintf(s, "/sys/class/gpio/gpio%d/value", v6);
    v7 = open(s, 0);
    if ( v7 < 0 && (byte_632F0 || byte_630C0 || dword_60964 > 2) )
    {
      snprintf(v10, 0x800u, "%s :open %s failed", "check_chain", s);
      sub_38438(3, v10, 0);
    }
    if ( lseek(v7, 0, 0) < 0 )
      perror(s);
    if ( read(v7, buf, 2u) > 0 && buf[0] == 49 )
    {
      ++*(_BYTE *)(a1 + 61);
      *(_BYTE *)(v3 + 157) = 1;
      v8 = (unsigned __int8)byte_632F0;
      v4[24] = 1;
      ++byte_C5468;
      if ( v8 || byte_630C0 || dword_60964 > 4 )
      {
        snprintf(v10, 0x800u, " detected at %s  chain %d", s, i);
        sub_38438(5, v10, 0);
      }
    }
    else
    {
      *(_BYTE *)(v3 + 157) = 0;
      v4[24] = 0;
    }
    ++v3;
    ++v4;
  }
  if ( byte_632F0 || byte_630C0 || dword_60964 > 4 )
  {
    snprintf(v10, 0x800u, "detect total chain num %d", *(unsigned __int8 *)(a1 + 61));
    sub_38438(5, v10, 0);
  }
}
