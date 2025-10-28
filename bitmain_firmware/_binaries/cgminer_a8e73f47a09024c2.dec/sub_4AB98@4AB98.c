int __fastcall sub_4AB98(int a1)
{
  int v2; // r4
  int v3; // r10
  int v4; // r6
  int v5; // r7
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v2 = 0;
  *(_BYTE *)(a1 + 66) = 0;
  v3 = 0;
  while ( 1 )
  {
    sleep(1u);
    sub_4A800();
    v4 = sub_4A984(a1, v3);
    v5 = v2 + 1;
    if ( v2 <= 50 )
    {
      v2 += 2;
      if ( v5 > 20 )
      {
        if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
        {
          strcpy(s, "tuning up 20 times\n");
          sub_3F178(5, s, 0);
          v3 = 1;
        }
        else
        {
          v3 = 1;
        }
      }
    }
    else if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
    {
      strcpy(s, "power voltage abnormal\n");
      sub_3F178(5, s, 0);
      ++v2;
    }
    else
    {
      ++v2;
    }
    if ( (unsigned __int8)(v4 - 1) > 0xFDu )
      break;
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
    {
      snprintf(s, 0x800u, "tunning %d times\n", v2);
      sub_3F178(5, s, 0);
    }
    if ( *(_BYTE *)(a1 + 66) )
      return *(unsigned __int8 *)(a1 + 66);
  }
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    snprintf(s, 0x800u, "%s, pic_voltage=%d, break!\n", "power_set_iic_power_voltage", v4);
    sub_3F178(5, s, 0);
  }
  return *(unsigned __int8 *)(a1 + 66);
}
