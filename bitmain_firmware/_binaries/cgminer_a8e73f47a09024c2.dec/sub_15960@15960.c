int __fastcall sub_15960(_DWORD *a1, int a2)
{
  int v4; // r6
  char s[2040]; // [sp+8h] [bp-810h] BYREF
  int v7; // [sp+808h] [bp-10h] BYREF
  _BYTE v8[8]; // [sp+810h] [bp-8h] BYREF

  if ( *((_BYTE *)a1 + 752) )
  {
    if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
    {
      snprintf(s, 0x800u, "Retrieving block template from pool %s", (const char *)a1[43]);
      sub_3F178(7, s, 0);
    }
  }
  else if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    snprintf(s, 0x800u, "Testing pool %s", (const char *)a1[43]);
    sub_3F178(7, s, 0);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *((_BYTE *)a1 + 640) )
      {
        if ( sub_149B0((int)a1, (_BYTE *)a1 + 642) )
          return *((unsigned __int8 *)a1 + 641);
        if ( sub_311E4(a1) )
        {
          v4 = sub_34030(a1);
          sub_31110(a1);
          if ( v4 )
          {
            byte_80EA9 = 1;
            if ( pthread_create(a1 + 178, 0, (void *(*)(void *))sub_1C07C, a1) )
            {
              strcpy(s, "Failed to create stratum sthread");
              sub_3F178(3, s, 1);
              sub_134A4(1);
            }
            if ( pthread_create(a1 + 179, 0, (void *(*)(void *))sub_23754, a1) )
            {
              strcpy(s, "Failed to create stratum rthread");
              sub_3F178(3, s, 1);
              sub_134A4(1);
            }
            return 1;
          }
        }
        else
        {
          sub_31110(a1);
        }
        sub_14764((int)a1, (_BYTE *)a1 + 642);
        return 0;
      }
      if ( !off_79C44 )
      {
        if ( !byte_7FE78 && !byte_7CC60 && dword_7A52C <= 2 )
          return 0;
        strcpy(s, "CURL initialisation failed");
        sub_3F178(3, s, 0);
        return 0;
      }
      if ( !*((_BYTE *)a1 + 99) )
      {
        if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
        {
          strcpy(s, "Probing for GBT support");
          sub_3F178(7, s, 0);
        }
        *((_BYTE *)a1 + 99) = 0;
        if ( *((_BYTE *)a1 + 752) )
        {
          if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
          {
            strcpy(s, "GBT coinbase + append support found, switching to GBT protocol");
            sub_3F178(7, s, 0);
          }
        }
        else if ( *((_BYTE *)a1 + 916) )
        {
          if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
          {
            strcpy(s, "GBT coinbase without append found, switching to GBT solo protocol");
            sub_3F178(7, s, 0);
          }
        }
        else if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
        {
          strcpy(s, "No GBT coinbase + append support found, using getwork protocol");
          sub_3F178(7, s, 0);
        }
      }
      sub_30050(v8);
      sub_30050(&v7);
      if ( !a1[144] || byte_7AEF4 )
        break;
      if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
      {
        snprintf(s, 0x800u, "Testing pool %d stratum %s", *a1, (const char *)a1[144]);
        sub_3F178(7, s, 0);
      }
      sub_30270((int)a1, (char *)a1[144]);
      if ( !sub_30358(a1[144], a1 + 150, a1 + 146) || !sub_311E4(a1) )
        break;
      if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
      {
        snprintf(s, 0x800u, "Switching pool %d %s to %s", *a1, (const char *)a1[43], (const char *)a1[144]);
        sub_3F178(7, s, 0);
      }
      if ( !a1[43] )
        a1[43] = _strdup((const char *)a1[144]);
      *((_BYTE *)a1 + 640) = 1;
    }
    if ( !sub_311E4(a1) )
      break;
    *((_BYTE *)a1 + 640) = 1;
  }
  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    snprintf(s, 0x800u, "FAILED to retrieve work from pool %u %s", *a1, (const char *)a1[43]);
    sub_3F178(7, s, 0);
  }
  if ( a2 )
    return 0;
  if ( *((_BYTE *)a1 + 97) )
    return 0;
  if ( !byte_7FE78 && !byte_7CC60 && dword_7A52C <= 3 )
    return 0;
  snprintf(s, 0x800u, "Pool %u slow/down or URL or credentials invalid", *a1);
  sub_3F178(4, s, 0);
  return 0;
}
