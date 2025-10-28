int __fastcall sub_1C088(_DWORD *a1, int a2)
{
  int v4; // r8
  int v5; // r2
  const char *v6; // r6
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int *v11; // r6
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r1
  int v21; // r2
  int v22; // r3
  char *v23; // r1
  int v25; // r3
  int v26; // r7
  int *v27; // r4
  int v28; // r0
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int *v32; // r4
  int v33; // r0
  int v34; // r1
  int v35; // r2
  int v36; // r3
  int v37; // r4
  _BYTE v38[8]; // [sp+8h] [bp-810h] BYREF
  _BYTE v39[8]; // [sp+10h] [bp-808h] BYREF
  char s[2048]; // [sp+18h] [bp-800h] BYREF

  if ( *((_BYTE *)a1 + 752) )
  {
    if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      snprintf(s, 0x800u, "Retrieving block template from pool %s", a1[43]);
      goto LABEL_62;
    }
  }
  else if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf(s, 0x800u, "Testing pool %s", a1[43]);
LABEL_62:
    sub_343C4(7, s, 0);
  }
  v4 = *((unsigned __int8 *)a1 + 640);
  if ( *((_BYTE *)a1 + 640) )
    goto LABEL_19;
  if ( !off_6CA80 )
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
    {
      strcpy(s, "CURL initialisation failed");
      sub_343C4(3, s, 0);
    }
    return v4;
  }
  if ( *((_BYTE *)a1 + 99) )
    goto LABEL_15;
  if ( !byte_6FA71 )
  {
    *((_BYTE *)a1 + 99) = v4;
    goto LABEL_15;
  }
  if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 6 )
  {
    v25 = *((unsigned __int8 *)a1 + 752);
    *((_BYTE *)a1 + 99) = v4;
    if ( !v25 )
    {
      if ( !*((_BYTE *)a1 + 916) )
      {
        if ( byte_73320 )
        {
LABEL_57:
          v6 = "No GBT coinbase + append support found, using getwork protocol";
          goto LABEL_14;
        }
        goto LABEL_55;
      }
LABEL_47:
      if ( byte_73320 || byte_6FA70 || dword_6D35C > 6 )
      {
        strcpy(s, "GBT coinbase without append found, switching to GBT solo protocol");
        sub_343C4(7, s, 0);
      }
      goto LABEL_15;
    }
LABEL_11:
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 6 )
    {
      v6 = "GBT coinbase + append support found, switching to GBT protocol";
LABEL_14:
      v7 = *(_DWORD *)v6;
      v8 = *((_DWORD *)v6 + 1);
      v9 = *((_DWORD *)v6 + 2);
      v10 = *((_DWORD *)v6 + 3);
      v11 = (int *)(v6 + 16);
      *(_DWORD *)s = v7;
      *(_DWORD *)&s[4] = v8;
      *(_DWORD *)&s[8] = v9;
      *(_DWORD *)&s[12] = v10;
      v12 = *v11;
      v13 = v11[1];
      v14 = v11[2];
      v15 = v11[3];
      v11 += 4;
      *(_DWORD *)&s[16] = v12;
      *(_DWORD *)&s[20] = v13;
      *(_DWORD *)&s[24] = v14;
      *(_DWORD *)&s[28] = v15;
      v16 = *v11;
      v17 = v11[1];
      v18 = v11[2];
      v19 = v11[3];
      v11 += 4;
      *(_DWORD *)&s[32] = v16;
      *(_DWORD *)&s[36] = v17;
      *(_DWORD *)&s[40] = v18;
      *(_DWORD *)&s[44] = v19;
      v20 = v11[1];
      v21 = v11[2];
      v22 = v11[3];
      *(_DWORD *)&s[48] = *v11;
      *(_DWORD *)&s[52] = v20;
      *(_DWORD *)&s[56] = v21;
      *(_WORD *)&s[60] = v22;
      s[62] = BYTE2(v22);
      sub_343C4(7, s, 0);
      goto LABEL_15;
    }
    goto LABEL_15;
  }
  strcpy(s, "Probing for GBT support");
  sub_343C4(7, s, 0);
  v5 = *((unsigned __int8 *)a1 + 752);
  *((_BYTE *)a1 + 99) = 0;
  if ( v5 )
  {
    if ( !byte_6FA71 )
      goto LABEL_15;
    goto LABEL_11;
  }
  if ( *((_BYTE *)a1 + 916) )
  {
    if ( !byte_6FA71 )
      goto LABEL_15;
    goto LABEL_47;
  }
  if ( !byte_6FA71 )
    goto LABEL_15;
  if ( byte_73320 )
    goto LABEL_57;
LABEL_55:
  if ( byte_6FA70 || dword_6D35C > 6 )
    goto LABEL_57;
LABEL_15:
  sub_2A69C(v38);
  sub_2A69C(v39);
  v23 = (char *)a1[144];
  if ( !v23 || byte_6DC98 )
    goto LABEL_17;
  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf(s, 0x800u, "Testing pool %d stratum %s", *a1, (const char *)a1[144]);
    sub_343C4(7, s, 0);
    v23 = (char *)a1[144];
  }
  sub_2A8E0((int)a1, v23);
  if ( sub_2A97C(a1[144], a1 + 150, a1 + 146) && sub_2B3F0(a1) )
  {
    if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      snprintf(s, 0x800u, "Switching pool %d %s to %s", *a1, (const char *)a1[43], (const char *)a1[144]);
      sub_343C4(7, s, 0);
    }
    if ( !a1[43] )
      a1[43] = _strdup((const char *)a1[144]);
  }
  else
  {
LABEL_17:
    if ( !sub_2B3F0(a1) )
    {
      if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
      {
        snprintf(s, 0x800u, "FAILED to retrieve work from pool %u %s", *a1, (const char *)a1[43]);
        sub_343C4(7, s, 0);
      }
      if ( !a2 && !*((_BYTE *)a1 + 97) && (byte_73320 || byte_6FA70 || dword_6D35C > 3) )
      {
        snprintf(s, 0x800u, "Pool %u slow/down or URL or credentials invalid", *a1);
        v4 = 0;
        sub_343C4(4, s, 0);
      }
      return v4;
    }
  }
  *((_BYTE *)a1 + 640) = 1;
LABEL_19:
  v4 = sub_1C040((int)a1, (_BYTE *)a1 + 642);
  if ( v4 )
    return *((unsigned __int8 *)a1 + 641);
  if ( sub_2B3F0(a1) && (v26 = sub_2D32C(a1)) != 0 )
  {
    sub_2B3E4(a1);
    byte_73322 = 1;
    if ( pthread_create(a1 + 178, 0, (void *(*)(void *))sub_22C84, a1) )
    {
      v27 = (int *)&unk_4DD04;
LABEL_88:
      v28 = *v27;
      v29 = v27[1];
      v30 = v27[2];
      v31 = v27[3];
      v32 = v27 + 4;
      *(_DWORD *)s = v28;
      *(_DWORD *)&s[4] = v29;
      *(_DWORD *)&s[8] = v30;
      *(_DWORD *)&s[12] = v31;
      v33 = *v32;
      v34 = v32[1];
      v35 = v32[2];
      v36 = v32[3];
      v37 = v32[4];
      *(_DWORD *)&s[16] = v33;
      *(_DWORD *)&s[20] = v34;
      *(_DWORD *)&s[24] = v35;
      *(_DWORD *)&s[28] = v36;
      s[32] = v37;
      sub_343C4(3, s, 1);
      sub_1B070(1, 1);
    }
    v4 = v26;
    if ( pthread_create(a1 + 179, 0, (void *(*)(void *))sub_252D0, a1) )
    {
      v27 = (int *)&unk_4DD28;
      goto LABEL_88;
    }
  }
  else
  {
    sub_2B3E4(a1);
    sub_1BFF8((int)a1, (_BYTE *)a1 + 642);
  }
  return v4;
}
