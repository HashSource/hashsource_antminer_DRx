void __fastcall sub_4B42C(int a1, int a2, unsigned __int8 a3, unsigned int a4)
{
  int v8; // r3
  int v9; // r3
  char *v10; // r2
  int v11; // r3
  int v12; // r3
  char *v13; // r1
  char *v14; // r0
  int v15; // r3
  char *v16; // r12
  int v17; // r5
  unsigned int v18; // r6
  unsigned __int8 *k; // r4
  int v20; // r5
  unsigned int v21; // r6
  unsigned __int8 *m; // r4
  int v23; // r5
  unsigned int v24; // r6
  unsigned __int8 *j; // r4
  int v26; // r5
  unsigned int v27; // r6
  char *i; // r4
  int v29; // r6
  unsigned int v30; // r7
  int v31; // r5
  unsigned int v32; // r2
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( a4 == 32 )
    goto LABEL_31;
  if ( a4 > 0x20 )
  {
    switch ( a4 )
    {
      case 0x90u:
        v12 = 0;
        byte_7ECC0[a1 - 1112] = 0;
        v13 = &byte_7DE64[512 * a1 + 2564];
        v14 = &byte_7ECC0[128 * a1 + 940];
        do
        {
          *((_DWORD *)v13 + 1) = 0;
          v13 += 4;
          v14[v12++] = 0;
        }
        while ( v12 != 72 );
        sub_4B020((unsigned __int8)a1, a2, a3, 144);
        goto LABEL_42;
      case 0x98u:
        v15 = 0;
        byte_7ECC0[a1 + 1452] = 0;
        v16 = &byte_7ECC0[512 * a1 + 1452];
        do
        {
          *((_DWORD *)v16 + 1) = 0;
          v16 += 4;
          byte_7ECC0[128 * a1 + 3504 + v15++] = 0;
        }
        while ( v15 != 72 );
        sub_4B020((unsigned __int8)a1, a2, a3, 152);
        goto LABEL_41;
      case 0x34u:
        v11 = 0;
        byte_7ECC0[a1 - 3164] = 0;
        do
        {
          *(_DWORD *)&byte_7DE64[512 * a1 + 516 + v11] = -1;
          v11 += 4;
        }
        while ( v11 != 288 );
        sub_4B020((unsigned __int8)a1, a2, a3, 52);
        goto LABEL_43;
    }
    goto LABEL_26;
  }
  if ( a4 == 8 )
  {
    v9 = 0;
    byte_7CCC8[a1 + 2456] = 0;
    v10 = &byte_7CCC8[512 * a1 + 2456];
    do
    {
      *((_DWORD *)v10 + 1) = 0;
      v10 += 4;
      byte_7DE64[128 * a1 + v9++] = 0;
    }
    while ( v9 != 72 );
    sub_4B020((unsigned __int8)a1, a2, a3, 8);
    goto LABEL_44;
  }
  if ( a4 == 20 )
  {
LABEL_31:
    sub_4B020((unsigned __int8)a1, a2, a3, a4);
    if ( a4 == 32 )
    {
      sub_30140();
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
      v26 = 0;
      LOBYTE(v27) = 0;
      for ( i = &byte_7CCC8[a1 + 2456]; ; v26 = (unsigned __int8)*i )
      {
        sub_30140();
        if ( (unsigned __int8)*i == v26 )
        {
          v27 = (unsigned __int8)(v27 + 1);
          if ( v27 > 2 )
            return;
        }
        else
        {
          LOBYTE(v27) = 0;
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
          if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
          {
            snprintf(
              s,
              0x800u,
              "!!! %s: the input register is not correct, please check it. the input register is 0x%02x\n",
              "check_asic_reg",
              a4);
            sub_3F178(3, s, 0);
          }
          return;
        }
LABEL_43:
        v23 = 0;
        LOBYTE(v24) = 0;
        for ( j = &byte_7ECC0[a1 - 3164]; ; v23 = *j )
        {
          sub_30140();
          if ( *j == v23 )
          {
            v24 = (unsigned __int8)(v24 + 1);
            if ( v24 > 2 )
              return;
          }
          else
          {
            LOBYTE(v24) = 0;
          }
        }
      }
LABEL_41:
      v17 = 0;
      LOBYTE(v18) = 0;
      for ( k = &byte_7ECC0[a1 + 1452]; ; v17 = *k )
      {
        sub_30140();
        if ( *k == v17 )
        {
          v18 = (unsigned __int8)(v18 + 1);
          if ( v18 > 2 )
            return;
        }
        else
        {
          LOBYTE(v18) = 0;
        }
      }
    }
LABEL_42:
    v20 = 0;
    LOBYTE(v21) = 0;
    for ( m = &byte_7ECC0[a1 - 1112]; ; v20 = *m )
    {
      sub_30140();
      if ( *m == v20 )
      {
        v21 = (unsigned __int8)(v21 + 1);
        if ( v21 > 2 )
          return;
      }
      else
      {
        LOBYTE(v21) = 0;
      }
    }
  }
  if ( a4 )
  {
LABEL_26:
    if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
    {
      snprintf(
        s,
        0x800u,
        "!!! %s: the input register is not correct, please check it. the input register is 0x%02x",
        "check_asic_reg",
        a4);
      sub_3F178(7, s, 0);
    }
    goto LABEL_31;
  }
  if ( byte_7CCC8[a1 + 400] )
  {
    v8 = 0;
    byte_7CCC8[a1 + 404] = 0;
    do
      dword_7CE60[128 * a1 + v8++] = 0;
    while ( v8 != 72 );
  }
  sub_4B020((unsigned __int8)a1, a2, a3, 0);
LABEL_45:
  v29 = 0;
  LOBYTE(v30) = 0;
  while ( 1 )
  {
    sub_30140();
    v31 = (unsigned __int8)byte_7CCC8[a1 + 404];
    if ( v31 != v29 )
    {
      LOBYTE(v30) = 0;
      goto LABEL_46;
    }
    v30 = (unsigned __int8)(v30 + 1);
    if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
    {
      snprintf(s, 0x800u, "%s: not receive CHIP_ADDR register value for %d time", "check_asic_reg", v30);
      sub_3F178(7, s, 0);
    }
    if ( v30 > 2 )
      break;
LABEL_46:
    v29 = v31;
  }
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
  {
    snprintf(s, 0x800u, "%s: Chain%d has %d ASICs", "check_asic_reg", a1, (unsigned __int8)byte_7CCC8[a1 + 404]);
    sub_3F178(4, s, 0);
  }
  if ( byte_7CCC8[a1 + 400] )
  {
    byte_7CCC8[a1 + 400] = 0;
    v32 = (unsigned __int8)byte_7CCC8[a1 + 404];
    *((_BYTE *)&unk_B3AFC + a1 + 2138) = v32;
    if ( (unsigned __int8)byte_B4387 < v32 )
      byte_B4387 = v32;
  }
}
