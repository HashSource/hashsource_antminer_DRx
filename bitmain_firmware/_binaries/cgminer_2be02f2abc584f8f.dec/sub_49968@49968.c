int __fastcall sub_49968(int a1)
{
  size_t v2; // r4
  _BYTE *v3; // r4
  int v4; // r5
  int v5; // r6
  int v6; // r5
  int v7; // r4
  int *v8; // r3
  int v9; // t1
  int v10; // r5
  signed int v11; // r6
  int *v12; // r3
  int *v13; // r6
  char v14; // r2
  int v15; // t1
  int v16; // r5
  int k; // r10
  char *v19; // [sp+Ch] [bp-AA0h]
  int i; // [sp+14h] [bp-A98h]
  int j; // [sp+14h] [bp-A98h]
  _BYTE *src; // [sp+18h] [bp-A94h]
  _BYTE *v23; // [sp+1Ch] [bp-A90h]
  char v24[2032]; // [sp+20h] [bp-A8Ch] BYREF
  int v25; // [sp+81Ch] [bp-290h] BYREF
  _DWORD dest[52]; // [sp+820h] [bp-28Ch] BYREF
  _BYTE v27[216]; // [sp+8F8h] [bp-1B4h] BYREF
  _DWORD s[55]; // [sp+9D0h] [bp-DCh] BYREF

  sub_47C40(a1, 1, 0, 144, 2048);
  sub_2FF48();
  v2 = 4 * *((unsigned __int8 *)&unk_93504 + a1 + 1868);
  memset(s, 0, v2);
  memset(v27, 1, v2);
  sub_47E04(a1, 1, 0, 0x90u);
  src = &byte_76DAC[512 * a1 + 2568];
  memcpy(s, src, *((unsigned __int8 *)&unk_93504 + a1 + 1868));
  v3 = &byte_77C08[128 * a1 + 940];
  for ( i = 0; i != 30; ++i )
  {
    if ( *((_BYTE *)&unk_93504 + a1 + 1868) )
    {
      v5 = 0;
      v4 = 0;
      do
      {
        if ( v3[v4] )
        {
          sub_47C40(a1, 0, word_93C7A * v4, 144, s[v5] & 0xFF00FFFF | (i << 16));
          sub_2FF48();
          sub_47C40(a1, 0, word_93C7A * v4, 152, *(_DWORD *)&v27[v5 * 4]);
          sub_2FF48();
        }
        else if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
        {
          snprintf(v24, 0x800u, "chain %d chip %d FREQUENCY_SWEEP_CONTROL reg_value not receive", a1, v4);
          sub_3F1C0(5, v24, 0);
        }
        ++v4;
        ++v5;
      }
      while ( *((unsigned __int8 *)&unk_93504 + a1 + 1868) > v4 );
    }
  }
  sub_47C40(a1, 1, 0, 144, 4128);
  sub_2FF48();
  sub_47C40(a1, 1, 0, 156, 0xFFFF);
  sub_2FF48();
  memset(s, 0, 4 * *((unsigned __int8 *)&unk_93504 + a1 + 1868));
  sub_47E04(a1, 1, 0, 0x90u);
  memcpy(s, src, *((unsigned __int8 *)&unk_93504 + a1 + 1868));
  sub_47C40(a1, 1, 0, 144, s[0] | 1);
  sub_2FF48();
  memset(s, 0, 4 * *((unsigned __int8 *)&unk_93504 + a1 + 1868));
  sub_47E04(a1, 1, 0, 0x90u);
  memcpy(s, src, *((unsigned __int8 *)&unk_93504 + a1 + 1868));
  for ( j = 0; j != 16; ++j )
  {
    if ( (byte_78D98 || byte_75C08 || dword_734EC > 4)
      && ((strcpy(v24, "------------------"), sub_3F1C0(5, v24, 0), byte_78D98) || byte_75C08)
      || dword_734EC > 4 )
    {
      snprintf(v24, 0x800u, "sweep_cnt = %d", j);
      sub_3F1C0(5, v24, 0);
    }
    memset(dest, 0, 4 * *((unsigned __int8 *)&unk_93504 + a1 + 1868));
    v19 = 0;
    v23 = v3;
    do
    {
      if ( (byte_78D98 || byte_75C08 || dword_734EC > 4)
        && ((strcpy(v24, "*****************"), sub_3F1C0(5, v24, 0), byte_78D98) || byte_75C08)
        || dword_734EC > 4 )
      {
        snprintf(v24, 0x800u, "pattern_cnt = %d", v19);
        sub_3F1C0(5, v24, 0);
      }
      sub_47C40(a1, 1, 0, 144, s[0] | 2);
      sub_2FF48();
      v6 = 0;
      v7 = 128;
      do
      {
        ++v6;
        sub_47E04(a1, 1, 0, 0x90u);
        memcpy(dest, src, *((unsigned __int8 *)&unk_93504 + a1 + 1868));
        if ( byte_78D98 || byte_75C08 || dword_734EC > 5 )
        {
          snprintf(v24, 0x800u, "core cmd resp: %08x", v7);
          sub_3F1C0(6, v24, 0);
        }
        if ( *((_BYTE *)&unk_93504 + a1 + 1868) )
        {
          v8 = &v25;
          do
          {
            v9 = v8[1];
            ++v8;
            v7 &= v9;
          }
          while ( v8 != &dest[*((unsigned __int8 *)&unk_93504 + a1 + 1868) - 1] );
        }
        if ( (v7 & 0x80) != 0 )
        {
          if ( byte_78D98 || byte_75C08 || dword_734EC > 5 )
          {
            snprintf(v24, 0x800u, "%s, =====one pattern done=====, %d", "sweep_frequency_chain", v6);
            sub_3F1C0(6, v24, 0);
          }
          goto LABEL_46;
        }
      }
      while ( v6 != 2001 );
      if ( byte_78D98 || byte_75C08 || dword_734EC > 5 )
      {
        snprintf(v24, 0x800u, "%s, =====one pattern timeout=====", "sweep_frequency_chain");
        sub_3F1C0(6, v24, 0);
      }
LABEL_46:
      ++v19;
    }
    while ( v19 != (char *)3 );
    v3 = v23;
    v10 = 0;
    while ( 1 )
    {
      memset(dest, 0, 4 * *((unsigned __int8 *)&unk_93504 + a1 + 1868));
      sub_47E04(a1, 1, 0, 0x90u);
      v11 = *((unsigned __int8 *)&unk_93504 + a1 + 1868);
      memcpy(dest, src, v11);
      if ( v11 <= 0 )
        break;
      v12 = &v25;
      v13 = &dest[v11 - 1];
      v14 = 8;
      do
      {
        v15 = v12[1];
        ++v12;
        v14 &= v15;
      }
      while ( v12 != v13 );
      ++v10;
      if ( (v14 & 8) != 0 )
        goto LABEL_52;
    }
    ++v10;
LABEL_52:
    if ( byte_78D98 || byte_75C08 || dword_734EC > 5 )
    {
      snprintf(v24, 0x800u, "retc===========poll all pattern done==============, %d", v10);
      sub_3F1C0(6, v24, 0);
    }
    memset(s, 0, 4 * *((unsigned __int8 *)&unk_93504 + a1 + 1868));
    sub_47E04(a1, 1, 0, 0x90u);
    memcpy(s, src, *((unsigned __int8 *)&unk_93504 + a1 + 1868));
    sub_47C40(a1, 1, 0, 144, s[0] | 8);
    sub_2FF48();
    if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
    {
      strcpy(v24, "[group pattern core status]:");
      sub_3F1C0(5, v24, 0);
    }
    for ( k = 0; k != 30; ++k )
    {
      sub_47C40(a1, 1, 0, 144, s[0] & 0xFF00FFF7 | (k << 16));
      sub_2FF48();
      memset(dest, 0, 4 * *((unsigned __int8 *)&unk_93504 + a1 + 1868));
      sub_47E04(a1, 1, 0, 0x98u);
      memcpy(dest, (char *)&unk_781B8 + 512 * a1, *((unsigned __int8 *)&unk_93504 + a1 + 1868));
      if ( *((_BYTE *)&unk_93504 + a1 + 1868) )
      {
        v16 = 0;
        do
        {
          if ( v23[v16] )
          {
            if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
            {
              snprintf(v24, 0x800u, "chip_addr:%d, group Id:%d, status:%08x", v16, k, dest[v16]);
              sub_3F1C0(5, v24, 0);
            }
          }
          else if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
          {
            snprintf(v24, 0x800u, "chip_addr:%d, group Id:%d, status not receive", v16, k);
            sub_3F1C0(5, v24, 0);
          }
          ++v16;
        }
        while ( *((unsigned __int8 *)&unk_93504 + a1 + 1868) > v16 );
      }
    }
  }
  if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
  {
    strcpy(v24, "have finish freq sweep");
    sub_3F1C0(5, v24, 0);
  }
  sub_47C40(a1, 1, 0, 144, 0);
  return sub_2FF48();
}
