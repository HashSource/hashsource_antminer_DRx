int __fastcall sub_58C90(_DWORD *a1, int a2, int a3, int (__fastcall *a4)(__int16 *, int, int), int a5)
{
  int result; // r0
  __int64 v9; // r0
  int v10; // r1
  _BYTE *v11; // r0
  int v12; // r10
  int v13; // r8
  int v14; // r7
  int v15; // r0
  char *v16; // r2
  int v17; // r7
  int v18; // r0
  int v19; // r9
  int v20; // r10
  int v21; // r11
  int (*v22)(const void *, const void *); // r3
  unsigned int v23; // r10
  _BYTE *v24; // r7
  int v25; // r8
  int v26; // r8
  _BYTE *v27; // r0
  int v28; // r0
  char *v30; // [sp+Ch] [bp-88h]
  int nmemb; // [sp+10h] [bp-84h]
  int v32; // [sp+14h] [bp-80h]
  void *base; // [sp+18h] [bp-7Ch]
  int v34; // [sp+1Ch] [bp-78h]
  int v35; // [sp+20h] [bp-74h]
  __int16 s[52]; // [sp+2Ch] [bp-68h] BYREF

  if ( !a1 )
    return -1;
  switch ( *a1 )
  {
    case 0:
      if ( (a2 & 0x20) != 0 )
      {
        v32 = 1;
        v16 = ":";
      }
      else
      {
        v32 = 2;
        v16 = ": ";
      }
      v30 = v16;
      if ( a1[8] )
        goto LABEL_68;
      a1[8] = 1;
      v17 = sub_5BCD8(a1);
      if ( a4((__int16 *)"{", 1, a5) )
        goto LABEL_68;
      if ( !v17 )
        goto LABEL_35;
      v34 = a3 + 1;
      if ( sub_58970(a2, a3 + 1, 0, a4, a5) )
        goto LABEL_68;
      if ( (a2 & 0x180) == 0 )
      {
        while ( 1 )
        {
          v26 = sub_5BD44(a1, v17);
          v27 = (_BYTE *)sub_5BD88(v17);
          sub_58A54(v27, (int (__fastcall *)(char *, int, int))a4, a5, a2);
          if ( a4((__int16 *)v30, v32, a5) )
            goto LABEL_68;
          v28 = sub_5BDA4(v17);
          if ( sub_58C90(v28, a2, v34, a4, a5) )
            goto LABEL_68;
          if ( !v26 )
          {
            if ( !sub_58970(a2, a3, 0, a4, a5) )
              goto LABEL_35;
            goto LABEL_68;
          }
          if ( !a4((__int16 *)",", 1, a5) )
          {
            v17 = v26;
            if ( !sub_58970(a2, v34, 1, a4, a5) )
              continue;
          }
          goto LABEL_68;
        }
      }
      nmemb = sub_5BC08(a1);
      v18 = sub_5B2A8(8 * nmemb);
      base = (void *)v18;
      if ( !v18 )
        goto LABEL_68;
      v19 = 0;
      v20 = 0;
      v35 = a2;
      v21 = v18;
      do
      {
        *(_DWORD *)(v21 + v19) = sub_59AD8(v17);
        *(_DWORD *)(v21 + v19 + 4) = sub_5BD88(v17);
        ++v20;
        v19 += 8;
        v17 = sub_5BD44(a1, v17);
      }
      while ( v17 );
      if ( nmemb != v20 )
        _assert_fail("i == size", "dump.c", 0x141u, "do_dump");
      if ( (v35 & 0x80) != 0 )
        v22 = (int (*)(const void *, const void *))sub_59314;
      else
        v22 = (int (*)(const void *, const void *))sub_58A30;
      qsort(base, nmemb, 8u, v22);
      if ( nmemb )
      {
        v23 = 0;
        while ( 1 )
        {
          v24 = (_BYTE *)*((_DWORD *)base + 2 * v23 + 1);
          v25 = sub_5BC34(a1, v24);
          if ( !v25 )
            _assert_fail("value", "dump.c", 0x151u, "do_dump");
          sub_58A54(v24, (int (__fastcall *)(char *, int, int))a4, a5, v35);
          if ( a4((__int16 *)v30, v32, a5) || sub_58C90(v25, v35, v34, a4, a5) )
            break;
          if ( nmemb - 1 <= v23 )
          {
            if ( sub_58970(v35, a3, 0, a4, a5) )
              break;
          }
          else if ( a4((__int16 *)",", 1, a5) || sub_58970(v35, v34, 1, a4, a5) )
          {
            break;
          }
          if ( nmemb == ++v23 )
            goto LABEL_60;
        }
        sub_5B2D0(base);
LABEL_68:
        a1[8] = 0;
        return -1;
      }
LABEL_60:
      sub_5B2D0(base);
LABEL_35:
      a1[8] = 0;
      result = a4((__int16 *)"}", 1, a5);
      break;
    case 1:
      if ( a1[5] )
        goto LABEL_28;
      a1[5] = 1;
      v12 = sub_5BE8C(a1);
      if ( a4((__int16 *)"[", 1, a5) )
        goto LABEL_28;
      if ( !v12 )
        goto LABEL_16;
      v13 = a3 + 1;
      if ( sub_58970(a2, a3 + 1, 0, a4, a5) )
        goto LABEL_28;
      if ( v12 <= 0 )
      {
LABEL_16:
        a1[5] = 0;
        return a4(&word_642BC, 1, a5);
      }
      else
      {
        v14 = 0;
        while ( 1 )
        {
          v15 = sub_5BEB8(a1, v14);
          if ( sub_58C90(v15, a2, v13, a4, a5) )
            break;
          if ( v12 - 1 <= v14 )
          {
            if ( sub_58970(a2, a3, 0, a4, a5) )
              break;
          }
          else if ( a4((__int16 *)",", 1, a5) || sub_58970(a2, v13, 1, a4, a5) )
          {
            break;
          }
          if ( v12 == ++v14 )
            goto LABEL_16;
        }
LABEL_28:
        a1[5] = 0;
        return -1;
      }
    case 2:
      v11 = (_BYTE *)sub_5C084(a1);
      return sub_58A54(v11, (int (__fastcall *)(char *, int, int))a4, a5, a2);
    case 3:
      v9 = sub_5C19C(a1);
      v10 = snprintf((char *)s, 0x64u, "%lld", v9);
      if ( (unsigned int)v10 <= 0x63 )
        return a4(s, v10, a5);
      return -1;
    case 4:
      sub_5C270(a1);
      v10 = sub_5B5F0(s, 100);
      if ( v10 >= 0 )
        return a4(s, v10, a5);
      else
        return -1;
    case 5:
      return a4((__int16 *)"true", 4, a5);
    case 6:
      return a4((__int16 *)"false", 5, a5);
    case 7:
      return a4((__int16 *)"null", 4, a5);
    default:
      return -1;
  }
  return result;
}
