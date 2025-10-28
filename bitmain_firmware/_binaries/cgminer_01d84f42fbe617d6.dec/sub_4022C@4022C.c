void __fastcall sub_4022C(int a1)
{
  int v2; // r3
  int v3; // r2
  int v4; // r1
  size_t v5; // r0
  int v6; // r6
  int v7; // r5
  int v8; // r8
  int v9; // r7
  int v10; // t1
  int v11; // [sp+14h] [bp-828h] BYREF
  char s[4]; // [sp+18h] [bp-824h] BYREF
  int v13; // [sp+1Ch] [bp-820h]
  int v14; // [sp+20h] [bp-81Ch]
  int v15; // [sp+24h] [bp-818h]
  int v16; // [sp+28h] [bp-814h]
  int v17; // [sp+2Ch] [bp-810h]
  int v18; // [sp+30h] [bp-80Ch]
  int v19; // [sp+34h] [bp-808h]
  char v20[2052]; // [sp+38h] [bp-804h] BYREF

  v2 = 0;
  v13 = 0;
  v11 = 0;
  v14 = 0;
  *(_DWORD *)s = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  while ( 1 )
  {
    v3 = *(_DWORD *)&aD_0[8 * v2];
    v4 = 8 * v2++;
    if ( a1 == v3 )
      break;
    if ( v2 == 100 )
    {
      if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
      {
        strcpy(v20, "error freq,set default instead");
        sub_38438(4, v20, 0);
        v4 = 32;
      }
      else
      {
        v4 = 32;
      }
      break;
    }
  }
  sprintf(s, "%08x", *(_DWORD *)&aBitmainL3Detec_0[v4 + 76]);
  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(v20, 0x800u, "regdata: %s", s);
    sub_38438(7, v20, 0);
  }
  v5 = strlen(s);
  if ( !sub_295B8(&v11, (unsigned __int8 *)s, v5 >> 1) )
  {
    snprintf(v20, 0x800u, "Invalid vil plldata for reg data, hex2bin error now: %s", s);
    sub_38438(3, v20, 1);
    sub_16724(1);
  }
  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(v20, 0x800u, "%s: frequency = %d", "set_frequency", a1);
    sub_38438(7, v20, 0);
  }
  v6 = 805859;
  v7 = 0;
  v8 = v11;
  v9 = 805836;
  do
  {
    v10 = *(unsigned __int8 *)++v6;
    if ( v10 == 1 )
    {
      sub_3F864(*(_DWORD *)(v9 + 8), 1, 0, 8, v8);
      *(_WORD *)(v7 + 808094) = a1;
      sub_2B244();
    }
    v7 += 2;
    v9 += 4;
  }
  while ( v7 != 8 );
}
