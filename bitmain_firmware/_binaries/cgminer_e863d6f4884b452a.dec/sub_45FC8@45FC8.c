int __fastcall sub_45FC8(_DWORD *a1, unsigned int a2, int a3, int (__fastcall *a4)(__int16 *, int, int), int a5)
{
  _DWORD *v6; // r4
  char *v10; // r11
  int v11; // r8
  int v12; // r7
  int v13; // r7
  int v14; // r0
  __int64 v15; // r0
  int v16; // r0
  int v17; // r1
  int v18; // r0
  _DWORD *v19; // r9
  int v20; // r6
  unsigned int i; // r11
  unsigned int v22; // r2
  __int16 *v23; // r11
  _DWORD *v24; // r7
  int (*v25)(const void *, const void *); // r3
  unsigned int v26; // r9
  int v27; // r8
  int v28; // r4
  int v29; // r10
  _DWORD *v30; // r10
  int v31; // r4
  int v32; // r0
  int v33; // r0
  int v34; // r9
  int v35; // r8
  int v36; // r0
  int v37; // [sp+Ch] [bp-ACh]
  _DWORD *v38; // [sp+Ch] [bp-ACh]
  size_t nmemb; // [sp+10h] [bp-A8h]
  size_t nmemba; // [sp+10h] [bp-A8h]
  char *v41; // [sp+14h] [bp-A4h]
  int v42; // [sp+14h] [bp-A4h]
  int v43; // [sp+18h] [bp-A0h]
  int v44; // [sp+18h] [bp-A0h]
  unsigned int v45; // [sp+1Ch] [bp-9Ch]
  unsigned int v46; // [sp+20h] [bp-98h]
  _DWORD *base; // [sp+24h] [bp-94h]
  __int16 s[70]; // [sp+2Ch] [bp-8Ch] BYREF

  if ( !a1 )
    return -1;
  v6 = a1;
  switch ( *a1 )
  {
    case 0:
      v10 = ":";
      if ( (a2 & 0x20) != 0 )
        v11 = 1;
      else
        v11 = 2;
      if ( (a2 & 0x20) == 0 )
        v10 = ": ";
      if ( a1[8] )
        goto LABEL_40;
      a1[8] = 1;
      v12 = sub_47F6C();
      if ( a4((__int16 *)"{", 1, a5) )
        goto LABEL_40;
      if ( !v12 )
        goto LABEL_12;
      v44 = a3 + 1;
      if ( sub_45DB8(a2, a3 + 1, 0, a4, a5) )
        goto LABEL_40;
      if ( (a2 & 0x180) != 0 )
      {
        v37 = sub_47F14(v6);
        v18 = sub_47850(8 * v37);
        base = (_DWORD *)v18;
        if ( v18 )
        {
          v41 = v10;
          v46 = a2;
          v19 = (_DWORD *)(v18 + 4);
          v20 = v12;
          for ( i = 0; ; ++i )
          {
            *(v19 - 1) = sub_468F8(v20);
            *v19 = sub_47FB0(v20);
            v19 += 2;
            v20 = sub_47F94(v6, v20);
            if ( !v20 )
              break;
          }
          v22 = i + 1;
          nmemb = i + 1;
          v45 = i;
          v23 = (__int16 *)v41;
          if ( v37 != v22 )
            _assert_fail("i == size", "dump.c", 0x141u, "do_dump");
          v24 = base;
          v25 = (int (*)(const void *, const void *))sub_45D74;
          v26 = 0;
          if ( (v46 & 0x80) != 0 )
            v25 = (int (*)(const void *, const void *))sub_45DB0;
          qsort(base, nmemb, 8u, v25);
          v42 = v11;
          v38 = v6;
          v27 = a3 + 1;
          v43 = a3;
          while ( 1 )
          {
            v28 = v24[1];
            v29 = sub_47F24(v38, v28);
            if ( !v29 )
              _assert_fail("value", "dump.c", 0x151u, "do_dump");
            sub_45E28(v28, (int (__fastcall *)(char *, int))a4, a5, v46);
            if ( a4(v23, v42, a5) || sub_45FC8(v29, v46, v27, a4, a5) )
              break;
            if ( v26 < v45 )
            {
              if ( a4((__int16 *)",", 1, a5) || sub_45DB8(v46, v27, 1, a4, a5) )
                break;
            }
            else if ( sub_45DB8(v46, v43, 0, a4, a5) )
            {
              break;
            }
            ++v26;
            v24 += 2;
            if ( v26 == nmemb )
            {
              v6 = v38;
              sub_47860(base);
LABEL_12:
              v6[8] = 0;
              return a4((__int16 *)"}", 1, a5);
            }
          }
          v6 = v38;
          sub_47860(base);
        }
      }
      else
      {
        nmemba = a3;
        v30 = v6;
        while ( 1 )
        {
          v31 = sub_47F94(v30, v12);
          v32 = sub_47FB0(v12);
          sub_45E28(v32, (int (__fastcall *)(char *, int))a4, a5, a2);
          if ( a4((__int16 *)v10, v11, a5) || (v33 = sub_47FB8(v12), sub_45FC8(v33, a2, v44, a4, a5)) )
          {
LABEL_49:
            v6 = v30;
            goto LABEL_40;
          }
          if ( !v31 )
            break;
          if ( !a4((__int16 *)",", 1, a5) )
          {
            v12 = v31;
            if ( !sub_45DB8(a2, v44, 1, a4, a5) )
              continue;
          }
          goto LABEL_49;
        }
        v6 = v30;
        if ( !sub_45DB8(a2, nmemba, 0, a4, a5) )
          goto LABEL_12;
      }
LABEL_40:
      v6[8] = 0;
      return -1;
    case 1:
      if ( a1[5] )
        goto LABEL_51;
      a1[5] = 1;
      v13 = sub_48034(a1);
      if ( a4((__int16 *)"[", 1, a5) )
        goto LABEL_51;
      if ( !v13 )
        goto LABEL_16;
      v34 = a3 + 1;
      v35 = sub_45DB8(a2, a3 + 1, 0, a4, a5);
      if ( v35 )
        goto LABEL_51;
      if ( v13 <= 0 )
        goto LABEL_16;
      break;
    case 2:
      v14 = sub_4813C(a1);
      return sub_45E28(v14, (int (__fastcall *)(char *, int))a4, a5, a2);
    case 3:
      v15 = sub_481D0(a1);
      v16 = snprintf((char *)s, 0x64u, "%lld", v15);
      return a4(s, v16, a5);
    case 4:
      sub_48240();
      v17 = sub_47A5C(s, 100);
      if ( v17 < 0 )
        return -1;
      return a4(s, v17, a5);
    case 5:
      return a4((__int16 *)"true", 4, a5);
    case 6:
      return a4((__int16 *)"false", 5, a5);
    case 7:
      return a4((__int16 *)"null", 4, a5);
    default:
      return -1;
  }
  while ( 1 )
  {
    v36 = sub_48048(v6, v35);
    if ( sub_45FC8(v36, a2, v34, a4, a5) )
      break;
    if ( v13 - 1 <= v35 )
    {
      if ( sub_45DB8(a2, a3, 0, a4, a5) )
        break;
    }
    else if ( a4((__int16 *)",", 1, a5) || sub_45DB8(a2, v34, 1, a4, a5) )
    {
      break;
    }
    if ( v13 == ++v35 )
    {
LABEL_16:
      v6[5] = 0;
      return a4(&word_4EAF0, 1, a5);
    }
  }
LABEL_51:
  v6[5] = 0;
  return -1;
}
