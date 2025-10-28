int __fastcall sub_182A0(_DWORD *a1, int a2, int a3)
{
  int v4; // r7
  int v5; // r3
  int v6; // r1
  int v7; // r2
  int v8; // r3
  char *v9; // r1
  const char *v11; // lr
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int *v16; // lr
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r1
  int v26; // r2
  int v27; // r3
  _BYTE v28[8]; // [sp+8h] [bp-810h] BYREF
  int v29; // [sp+10h] [bp-808h] BYREF
  _DWORD dest[512]; // [sp+18h] [bp-800h] BYREF

  v4 = a2;
  if ( *((_BYTE *)a1 + 704) )
  {
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      snprintf((char *)dest, 0x800u, "Retrieving block template from pool %s", a1[41]);
      goto LABEL_64;
    }
  }
  else if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf((char *)dest, 0x800u, "Testing pool %s", a1[41]);
LABEL_64:
    sub_38438(7, dest, 0);
  }
  if ( *((_BYTE *)a1 + 632) )
    goto LABEL_12;
  if ( !off_60078 )
  {
    if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
    {
      strcpy((char *)dest, "CURL initialisation failed");
      sub_38438(3, dest, 0);
      return 0;
    }
    return 0;
  }
  v5 = *((unsigned __int8 *)a1 + 99);
  if ( *((_BYTE *)a1 + 99) )
    goto LABEL_8;
  v5 = (unsigned __int8)byte_630C1;
  if ( !byte_630C1 )
  {
    *((_BYTE *)a1 + 99) = byte_630C1;
    goto LABEL_8;
  }
  if ( byte_632F0 || byte_630C0 || dword_60964 > 6 )
  {
    strcpy((char *)dest, "Probing for GBT support");
    sub_38438(7, dest, 0);
    a2 = *((unsigned __int8 *)a1 + 704);
    a3 = 0;
    v5 = (unsigned __int8)byte_630C1;
    *((_BYTE *)a1 + 99) = 0;
    if ( !a2 )
    {
      a3 = *((unsigned __int8 *)a1 + 868);
      if ( !*((_BYTE *)a1 + 868) )
      {
        if ( !v5 )
          goto LABEL_8;
        goto LABEL_46;
      }
      if ( !v5 )
        goto LABEL_8;
LABEL_42:
      if ( byte_632F0 || byte_630C0 || (v5 = dword_60964, dword_60964 > 6) )
      {
        strcpy((char *)dest, "GBT coinbase without append found, switching to GBT solo protocol");
        sub_38438(7, dest, 0);
      }
      goto LABEL_8;
    }
    if ( !v5 )
      goto LABEL_8;
LABEL_35:
    if ( !byte_632F0 && !byte_630C0 )
    {
      v5 = dword_60964;
      if ( dword_60964 <= 6 )
        goto LABEL_8;
    }
    v11 = "GBT coinbase + append support found, switching to GBT protocol";
    goto LABEL_39;
  }
  a3 = *((unsigned __int8 *)a1 + 704);
  *((_BYTE *)a1 + 99) = 0;
  if ( a3 )
    goto LABEL_35;
  if ( *((_BYTE *)a1 + 868) )
    goto LABEL_42;
LABEL_46:
  if ( byte_632F0 || byte_630C0 )
  {
    v11 = "No GBT coinbase + append support found, using getwork protocol";
LABEL_39:
    v12 = *(_DWORD *)v11;
    v13 = *((_DWORD *)v11 + 1);
    v14 = *((_DWORD *)v11 + 2);
    v15 = *((_DWORD *)v11 + 3);
    v16 = (int *)(v11 + 16);
    dest[0] = v12;
    dest[1] = v13;
    dest[2] = v14;
    dest[3] = v15;
    v17 = *v16;
    v18 = v16[1];
    v19 = v16[2];
    v20 = v16[3];
    v16 += 4;
    dest[4] = v17;
    dest[5] = v18;
    dest[6] = v19;
    dest[7] = v20;
    v21 = *v16;
    v22 = v16[1];
    v23 = v16[2];
    v24 = v16[3];
    v16 += 4;
    dest[8] = v21;
    dest[9] = v22;
    dest[10] = v23;
    dest[11] = v24;
    v25 = v16[1];
    v26 = v16[2];
    v27 = v16[3];
    dest[12] = *v16;
    dest[13] = v25;
    dest[14] = v26;
    LOWORD(dest[15]) = v27;
    BYTE2(dest[15]) = BYTE2(v27);
    sub_38438(7, dest, 0);
    goto LABEL_8;
  }
  v5 = dword_60964;
  if ( dword_60964 > 6 )
  {
    v11 = "No GBT coinbase + append support found, using getwork protocol";
    goto LABEL_39;
  }
LABEL_8:
  sub_2B13C(v28, a2, a3, v5);
  sub_2B13C(&v29, v6, v7, v8);
  v9 = (char *)a1[142];
  if ( v9 && !byte_612D8 )
  {
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      snprintf((char *)dest, 0x800u, "Testing pool %d stratum %s", *a1, (const char *)a1[142]);
      sub_38438(7, dest, 0);
      v9 = (char *)a1[142];
    }
    sub_2B358((int)a1, v9);
    if ( sub_2B43C(a1[142], a1 + 148, a1 + 144) )
    {
      if ( sub_2C29C(a1) )
      {
        if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
        {
          snprintf((char *)dest, 0x800u, "Switching pool %d %s to %s", *a1, (const char *)a1[41], (const char *)a1[142]);
          sub_38438(7, dest, 0);
        }
        if ( !a1[41] )
          a1[41] = _strdup((const char *)a1[142]);
        goto LABEL_11;
      }
    }
  }
  if ( !sub_2C29C(a1) )
  {
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      snprintf((char *)dest, 0x800u, "FAILED to retrieve work from pool %u %s", *a1, (const char *)a1[41]);
      sub_38438(7, dest, 0);
    }
    if ( !v4 && !*((_BYTE *)a1 + 97) && (byte_632F0 || byte_630C0 || dword_60964 > 3) )
    {
      snprintf((char *)dest, 0x800u, "Pool %u slow/down or URL or credentials invalid", *a1);
      sub_38438(4, dest, 0);
    }
    return 0;
  }
LABEL_11:
  *((_BYTE *)a1 + 632) = 1;
LABEL_12:
  if ( sub_17E64((int)a1, (_BYTE *)a1 + 634) )
    return *((unsigned __int8 *)a1 + 633);
  if ( sub_2C29C(a1) && sub_2E9B0(a1) )
  {
    sub_2C1C4(a1);
    byte_64219 = 1;
    if ( pthread_create(a1 + 166, 0, sub_21AB0, a1) )
    {
      strcpy((char *)dest, "Failed to create stratum sthread");
      sub_38438(3, dest, 1);
      sub_16724(1);
    }
    if ( pthread_create(a1 + 167, 0, sub_1FC10, a1) )
    {
      strcpy((char *)dest, "Failed to create stratum rthread");
      sub_38438(3, dest, 1);
      sub_16724(1);
    }
    return 1;
  }
  else
  {
    sub_2C1C4(a1);
    sub_1822C((int)a1, (_BYTE *)a1 + 634);
    return 0;
  }
}
