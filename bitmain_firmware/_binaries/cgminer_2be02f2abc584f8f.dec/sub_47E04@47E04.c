void __fastcall sub_47E04(int a1, int a2, char a3, unsigned int a4)
{
  int v8; // r3
  int v9; // r3
  char *v10; // r2
  int v11; // r3
  int v12; // r3
  char *v13; // r1
  int v14; // r3
  char *v15; // r12
  int v16; // r5
  unsigned int v17; // r6
  unsigned __int8 *k; // r4
  int v19; // r5
  unsigned int v20; // r6
  unsigned __int8 *m; // r4
  int v22; // r5
  unsigned int v23; // r6
  unsigned __int8 *j; // r4
  int v25; // r5
  unsigned int v26; // r6
  char *i; // r4
  int v28; // r6
  unsigned int v29; // r7
  int v30; // r5
  unsigned int v31; // r2
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( a4 == 32 )
    goto LABEL_31;
  if ( a4 > 0x20 )
  {
    switch ( a4 )
    {
      case 0x90u:
        v12 = 0;
        byte_77C08[a1 - 1112] = 0;
        v13 = &byte_76DAC[512 * a1 + 2564];
        do
        {
          *((_DWORD *)v13 + 1) = 0;
          v13 += 4;
          byte_77C08[128 * a1 + 940 + v12++] = 0;
        }
        while ( v12 != 54 );
        sub_47BD4((unsigned __int8)a1, a2, a3, 144);
        goto LABEL_42;
      case 0x98u:
        v14 = 0;
        byte_77C08[a1 + 1452] = 0;
        v15 = &byte_77C08[512 * a1 + 1452];
        do
        {
          *((_DWORD *)v15 + 1) = 0;
          v15 += 4;
          byte_789B8[128 * a1 + v14++] = 0;
        }
        while ( v14 != 54 );
        sub_47BD4((unsigned __int8)a1, a2, a3, 152);
        goto LABEL_41;
      case 0x34u:
        v11 = 0;
        byte_77C08[a1 - 3164] = 0;
        do
        {
          *(_DWORD *)&byte_76DAC[512 * a1 + 516 + v11] = -1;
          v11 += 4;
        }
        while ( v11 != 216 );
        sub_47BD4((unsigned __int8)a1, a2, a3, 52);
        goto LABEL_43;
    }
    goto LABEL_26;
  }
  if ( a4 == 8 )
  {
    v9 = 0;
    byte_75C10[a1 + 2456] = 0;
    v10 = &byte_75C10[512 * a1 + 2456];
    do
    {
      *((_DWORD *)v10 + 1) = 0;
      v10 += 4;
      byte_76DAC[128 * a1 + v9++] = 0;
    }
    while ( v9 != 54 );
    sub_47BD4((unsigned __int8)a1, a2, a3, 8);
    goto LABEL_44;
  }
  if ( a4 == 20 )
  {
LABEL_31:
    sub_47BD4((unsigned __int8)a1, a2, a3, a4);
    if ( a4 == 32 )
    {
      sub_2FF20();
      return;
    }
    if ( a4 <= 0x20 )
    {
      if ( a4 != 8 )
      {
        if ( a4 == 20 )
          return;
        if ( a4 )
          goto LABEL_84;
        goto LABEL_45;
      }
LABEL_44:
      v25 = 0;
      LOBYTE(v26) = 0;
      for ( i = &byte_75C10[a1 + 2456]; ; v25 = (unsigned __int8)*i )
      {
        sub_2FF20();
        if ( (unsigned __int8)*i == v25 )
        {
          v26 = (unsigned __int8)(v26 + 1);
          if ( v26 > 2 )
            return;
        }
        else
        {
          LOBYTE(v26) = 0;
        }
      }
    }
    if ( a4 != 144 )
    {
      if ( a4 != 152 )
      {
        if ( a4 != 52 )
        {
LABEL_84:
          if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
          {
            snprintf(
              s,
              0x800u,
              "!!! %s: the input register is not correct, please check it. the input register is 0x%02x\n",
              "check_asic_reg",
              a4);
            sub_3F1C0(3, s, 0);
          }
          return;
        }
LABEL_43:
        v22 = 0;
        LOBYTE(v23) = 0;
        for ( j = &byte_77C08[a1 - 3164]; ; v22 = *j )
        {
          sub_2FF20();
          if ( *j == v22 )
          {
            v23 = (unsigned __int8)(v23 + 1);
            if ( v23 > 2 )
              return;
          }
          else
          {
            LOBYTE(v23) = 0;
          }
        }
      }
LABEL_41:
      v16 = 0;
      LOBYTE(v17) = 0;
      for ( k = &byte_77C08[a1 + 1452]; ; v16 = *k )
      {
        sub_2FF20();
        if ( *k == v16 )
        {
          v17 = (unsigned __int8)(v17 + 1);
          if ( v17 > 2 )
            return;
        }
        else
        {
          LOBYTE(v17) = 0;
        }
      }
    }
LABEL_42:
    v19 = 0;
    LOBYTE(v20) = 0;
    for ( m = &byte_77C08[a1 - 1112]; ; v19 = *m )
    {
      sub_2FF20();
      if ( *m == v19 )
      {
        v20 = (unsigned __int8)(v20 + 1);
        if ( v20 > 2 )
          return;
      }
      else
      {
        LOBYTE(v20) = 0;
      }
    }
  }
  if ( a4 )
  {
LABEL_26:
    if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
    {
      snprintf(
        s,
        0x800u,
        "!!! %s: the input register is not correct, please check it. the input register is 0x%02x",
        "check_asic_reg",
        a4);
      sub_3F1C0(7, s, 0);
    }
    goto LABEL_31;
  }
  if ( byte_75C10[a1 + 400] )
  {
    v8 = 0;
    byte_75C10[a1 + 404] = 0;
    do
      dword_75DA8[128 * a1 + v8++] = 0;
    while ( v8 != 54 );
  }
  sub_47BD4((unsigned __int8)a1, a2, a3, 0);
LABEL_45:
  v28 = 0;
  LOBYTE(v29) = 0;
  while ( 1 )
  {
    sub_2FF20();
    v30 = (unsigned __int8)byte_75C10[a1 + 404];
    if ( v30 != v28 )
    {
      LOBYTE(v29) = 0;
      goto LABEL_46;
    }
    v29 = (unsigned __int8)(v29 + 1);
    if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
    {
      snprintf(s, 0x800u, "%s: not receive CHIP_ADDR register value for %d time", "check_asic_reg", v29);
      sub_3F1C0(7, s, 0);
    }
    if ( v29 > 2 )
      break;
LABEL_46:
    v28 = v30;
  }
  if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
  {
    snprintf(s, 0x800u, "%s: Chain%d has %d ASICs", "check_asic_reg", a1, (unsigned __int8)byte_75C10[a1 + 404]);
    sub_3F1C0(4, s, 0);
  }
  if ( byte_75C10[a1 + 400] )
  {
    byte_75C10[a1 + 400] = 0;
    v31 = (unsigned __int8)byte_75C10[a1 + 404];
    *((_BYTE *)&unk_93504 + a1 + 1868) = v31;
    if ( (unsigned __int8)byte_93C7C < v31 )
      byte_93C7C = v31;
  }
}
