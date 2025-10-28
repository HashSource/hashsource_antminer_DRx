void __fastcall sub_3C960(int a1, int a2, char a3, unsigned int a4)
{
  int v5; // r5
  char *v8; // r3
  int v9; // r4
  unsigned __int8 v10; // r6
  int v11; // r11
  bool v12; // zf
  char *v13; // r8
  unsigned int v14; // r2
  unsigned int v15; // r1
  int v16; // r0
  char *v17; // r3
  char *v18; // r0
  char *v19; // r2
  int v20; // r3
  char *v21; // r7
  int v22; // r4
  char *v23; // r3
  int v24; // r3
  char *v25; // r7
  int v26; // r4
  char *v27; // r3
  char *v28; // r0
  char *v29; // r2
  char *v30; // r3
  int v31; // r3
  char *v32; // r7
  int v33; // r4
  int v34; // r0
  char *v35; // r3
  char *v36; // r0
  char *v37; // r2
  int v38; // r3
  char *v39; // r5
  int v40; // r6
  int v41; // r4
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v5 = a1;
  if ( a4 == 32 )
    goto LABEL_11;
  if ( a4 > 0x20 )
  {
    switch ( a4 )
    {
      case 0x90u:
        v16 = a1 << 9;
        v17 = (char *)&unk_70BD0 + v16 + 2824;
        v18 = (char *)&unk_717F8 + v16;
        v19 = (char *)&unk_71EDC + 128 * v5 - 1;
        *((_BYTE *)&unk_70BD0 + v5 + 2824) = 0;
        do
        {
          *((_DWORD *)v17 + 1) = 0;
          v17 += 4;
          *++v19 = 0;
        }
        while ( v18 != v17 );
        sub_3C6D8((unsigned __int8)v5, a2, a3, 144);
        goto LABEL_43;
      case 0x98u:
        v27 = (char *)&unk_71CC8 + 512 * a1;
        v28 = (char *)&unk_721FC + 512 * a1;
        v29 = (char *)&unk_71CC8 + 128 * v5 + 3095;
        v30 = v27 + 1044;
        *((_BYTE *)&unk_71CC8 + v5 + 1044) = 0;
        do
        {
          *((_DWORD *)v30 + 1) = 0;
          v30 += 4;
          *++v29 = 0;
        }
        while ( v30 != v28 );
        sub_3C6D8((unsigned __int8)v5, a2, a3, 152);
        goto LABEL_62;
      case 0x34u:
        v23 = (char *)&unk_70BD0 + 512 * a1 + 772;
        *((_BYTE *)&unk_70BD0 + a1 + 772) = 0;
        do
        {
          *((_DWORD *)v23 + 1) = -1;
          v23 += 4;
        }
        while ( v23 != (char *)&unk_70FF4 + 512 * a1 );
        sub_3C6D8((unsigned __int8)a1, a2, a3, 52);
LABEL_53:
        v24 = 0;
        v25 = (char *)&unk_70BD0 + v5;
        LOBYTE(v5) = 0;
        do
        {
          v26 = v24;
          while ( 1 )
          {
            sub_2A7F4();
            v24 = (unsigned __int8)v25[772];
            v12 = v24 == v26;
            v26 = v24;
            if ( v12 )
              break;
            LOBYTE(v5) = 0;
          }
          v5 = (unsigned __int8)(v5 + 1);
        }
        while ( v5 != 3 );
        return;
    }
    goto LABEL_6;
  }
  if ( a4 == 8 )
  {
    v34 = a1 << 9;
    v35 = &byte_6FAD8[v34 + 2552];
    v36 = (char *)&unk_705F0 + v34;
    v37 = (char *)&unk_70CD4 + 128 * v5 - 1;
    byte_6FAD8[v5 + 2552] = 0;
    do
    {
      *((_DWORD *)v35 + 1) = 0;
      v35 += 4;
      *++v37 = 0;
    }
    while ( v36 != v35 );
    sub_3C6D8((unsigned __int8)v5, a2, a3, 8);
    goto LABEL_71;
  }
  if ( a4 == 20 )
  {
LABEL_11:
    sub_3C6D8((unsigned __int8)v5, a2, a3, a4);
    if ( a4 == 32 )
    {
      sub_2A7F4();
      return;
    }
    if ( a4 <= 0x20 )
    {
      if ( a4 != 8 )
      {
        if ( a4 == 20 )
          return;
        if ( a4 )
          goto LABEL_80;
        goto LABEL_23;
      }
LABEL_71:
      v38 = 0;
      v39 = &byte_6FAD8[v5];
      LOBYTE(v40) = 0;
      do
      {
        v41 = v38;
        while ( 1 )
        {
          sub_2A7F4();
          v38 = (unsigned __int8)v39[2552];
          v12 = v38 == v41;
          v41 = v38;
          if ( v12 )
            break;
          LOBYTE(v40) = 0;
        }
        v40 = (unsigned __int8)(v40 + 1);
      }
      while ( v40 != 3 );
      return;
    }
    if ( a4 != 144 )
    {
      if ( a4 != 152 )
      {
        if ( a4 != 52 )
        {
LABEL_80:
          if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
          {
            snprintf(
              s,
              0x800u,
              "!!! %s: the input register is not correct, please check it. the input register is 0x%02x\n",
              "check_asic_reg",
              a4);
            sub_343C4(3, s, 0);
          }
          return;
        }
        goto LABEL_53;
      }
LABEL_62:
      v31 = 0;
      v32 = (char *)&unk_71CC8 + v5;
      LOBYTE(v5) = 0;
      do
      {
        v33 = v31;
        while ( 1 )
        {
          sub_2A7F4();
          v31 = (unsigned __int8)v32[1044];
          v12 = v31 == v33;
          v33 = v31;
          if ( v12 )
            break;
          LOBYTE(v5) = 0;
        }
        v5 = (unsigned __int8)(v5 + 1);
      }
      while ( v5 != 3 );
      return;
    }
LABEL_43:
    v20 = 0;
    v21 = (char *)&unk_70BD0 + v5;
    LOBYTE(v5) = 0;
    do
    {
      v22 = v20;
      while ( 1 )
      {
        sub_2A7F4();
        v20 = (unsigned __int8)v21[2824];
        v12 = v20 == v22;
        v22 = v20;
        if ( v12 )
          break;
        LOBYTE(v5) = 0;
      }
      v5 = (unsigned __int8)(v5 + 1);
    }
    while ( v5 != 3 );
    return;
  }
  if ( a4 )
  {
LABEL_6:
    if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      snprintf(
        s,
        0x800u,
        "!!! %s: the input register is not correct, please check it. the input register is 0x%02x",
        "check_asic_reg",
        a4);
      sub_343C4(7, s, 0);
    }
    goto LABEL_11;
  }
  if ( byte_6FAD8[a1 + 496] )
  {
    byte_6FAD8[a1 + 500] = 0;
    v8 = &byte_6FAD8[512 * a1 + 500];
    do
    {
      *((_DWORD *)v8 + 1) = a4;
      v8 += 4;
    }
    while ( (char *)&unk_6FDEC + 512 * a1 != v8 );
  }
  sub_3C6D8((unsigned __int8)a1, a2, a3, 0);
LABEL_23:
  v9 = 0;
  v10 = 0;
  do
  {
    v11 = v9;
    while ( 1 )
    {
      sub_2A7F4();
      v9 = (unsigned __int8)byte_6FAD8[v5 + 500];
      v12 = v9 == v11;
      v11 = v9;
      if ( v12 )
        break;
      v10 = 0;
    }
    ++v10;
    if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      snprintf(s, 0x800u, "%s: not receive CHIP_ADDR register value for %d time", "check_asic_reg", v10);
      sub_343C4(7, s, 0);
    }
  }
  while ( v10 != 3 );
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
  {
    snprintf(s, 0x800u, "%s: Chain%d has %d ASICs", "check_asic_reg", v5, (unsigned __int8)byte_6FAD8[v5 + 500]);
    sub_343C4(4, s, 0);
  }
  v13 = &byte_6FAD8[v5];
  if ( byte_6FAD8[v5 + 496] )
  {
    v14 = (unsigned __int8)v13[500];
    v15 = (unsigned __int8)byte_74763;
    *((_BYTE *)&unk_73ED8 + v5 + 2138) = v14;
    v13[496] = 0;
    if ( v15 < v14 )
      byte_74763 = v14;
  }
}
