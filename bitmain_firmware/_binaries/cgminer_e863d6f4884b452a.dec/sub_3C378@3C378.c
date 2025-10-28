int __fastcall sub_3C378(int a1)
{
  int v1; // r10
  int v2; // r4
  int result; // r0
  int v5; // r9
  int v6; // r0
  int v7; // r6
  int v8; // r2
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v1 = 0;
  v2 = 0;
  *(_BYTE *)(a1 + 66) = 0;
  while ( 1 )
  {
    v5 = v2 + 1;
    sleep(1u);
    sub_3C020();
    v6 = sub_3C17C(a1, v1);
    v7 = v6;
    if ( v2 <= 50 )
    {
      v2 += 2;
      v8 = (unsigned __int8)byte_73320;
      if ( v5 > 20 )
      {
        if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 4 )
        {
          if ( (unsigned __int8)(v6 - 1) > 0xFDu )
            goto LABEL_22;
          v1 = 1;
LABEL_7:
          if ( !byte_6FA70 && dword_6D35C <= 4 )
            goto LABEL_10;
          goto LABEL_9;
        }
        v1 = 1;
        strcpy(s, "tuning up 20 times\n");
        sub_343C4(5, s, 0);
        v8 = (unsigned __int8)byte_73320;
      }
      if ( (unsigned __int8)(v7 - 1) > 0xFDu )
        break;
      goto LABEL_18;
    }
    if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 4 )
    {
      if ( (unsigned __int8)(v6 - 1) > 0xFDu )
        goto LABEL_22;
      ++v2;
      goto LABEL_7;
    }
    ++v2;
    strcpy(s, "power voltage abnormal\n");
    sub_343C4(5, s, 0);
    v8 = (unsigned __int8)byte_73320;
    if ( (unsigned __int8)(v7 - 1) > 0xFDu )
      break;
LABEL_18:
    if ( !v8 )
      goto LABEL_7;
LABEL_9:
    snprintf(s, 0x800u, "tunning %d times\n", v2);
    sub_343C4(5, s, 0);
LABEL_10:
    result = *(unsigned __int8 *)(a1 + 66);
    if ( *(_BYTE *)(a1 + 66) )
      return result;
  }
  if ( v8 )
    goto LABEL_28;
LABEL_22:
  if ( !byte_6FA70 && dword_6D35C <= 4 )
    return *(unsigned __int8 *)(a1 + 66);
LABEL_28:
  snprintf(s, 0x800u, "%s, pic_voltage=%d, break!\n", "power_set_iic_power_voltage", v7);
  sub_343C4(5, s, 0);
  return *(unsigned __int8 *)(a1 + 66);
}
