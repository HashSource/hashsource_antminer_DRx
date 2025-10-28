void sub_3FB04()
{
  int v0; // r0
  int v1; // r12
  unsigned int v2; // r3
  char i; // r2
  int v4; // r8
  int v5; // r6
  int v6; // r7
  int v7; // t1
  char v8; // r5
  unsigned int v9; // r11
  char v10; // r0
  int v11; // r3
  char s[4]; // [sp+10h] [bp-804h] BYREF
  char v13; // [sp+14h] [bp-800h]

  if ( byte_C548D )
  {
    v0 = (unsigned __int8)sub_48F88(256, (unsigned __int8)byte_C548D);
    byte_C548C = v0;
    if ( byte_632F0 || (v1 = (unsigned __int8)byte_630C0, byte_630C0) || dword_60964 > 4 )
    {
      snprintf(s, 0x800u, "addrInterval = '%d'", (unsigned __int8)v0);
      sub_38438(5, s, 0);
      v0 = (unsigned __int8)byte_C548C;
      v1 = (unsigned __int8)byte_632F0;
    }
    v2 = (unsigned __int8)(v0 - 1);
    if ( (_BYTE)v0 != 1 )
    {
      for ( i = byte_C5466 + 1; ; ++i )
      {
        v2 >>= 1;
        if ( !v2 )
          break;
      }
      byte_C5466 = i;
    }
    if ( byte_630C1 && (v1 || byte_630C0 || dword_60964 > 6) )
    {
      snprintf(s, 0x800u, "--- %s interval %d", "software_set_address", v0);
      sub_38438(7, s, 0);
      v1 = (unsigned __int8)byte_632F0;
    }
    v4 = 805859;
    v5 = 0;
    v6 = 805836;
    if ( !v1 )
      goto LABEL_13;
LABEL_15:
    snprintf(
      s,
      0x800u,
      "%s: chain %d has %d ASIC, and addrInterval is %d",
      "software_set_address",
      v5,
      *(unsigned __int8 *)(v4 + 2175),
      (unsigned __int8)byte_C548C);
    sub_38438(5, s, 0);
    while ( 1 )
    {
      v7 = *(unsigned __int8 *)++v4;
      if ( v7 == 1 )
      {
        sub_3FA48(v5);
        sub_2B21C();
        if ( byte_632F0 || byte_630C0 || dword_60964 > 4 )
        {
          snprintf(s, 0x800u, "Now Set [%d] Chain Address", v5);
          sub_38438(5, s, 0);
        }
        if ( sub_48F88(256, (unsigned __int8)byte_C548C) )
        {
          v8 = 0;
          v9 = 0;
          do
          {
            s[3] = 0;
            s[0] = 64;
            s[1] = 4;
            ++v9;
            s[2] = v8;
            v13 = 0;
            v10 = sub_3B360(s, 32);
            v11 = *(_DWORD *)(v6 + 8);
            v13 = v10;
            sub_3BBBC(v11, s, 5u);
            v8 += byte_C548C;
            sub_2B21C();
          }
          while ( sub_48F88(256, (unsigned __int8)byte_C548C) > v9 );
        }
      }
      ++v5;
      v6 += 4;
      if ( v5 == 4 )
        break;
      if ( byte_632F0 )
        goto LABEL_15;
LABEL_13:
      if ( byte_630C0 || dword_60964 > 4 )
        goto LABEL_15;
    }
  }
  else
  {
    byte_C548C = 7;
  }
}
