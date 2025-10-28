int __fastcall sub_439F0(_DWORD *a1, int a2, int a3, int (__fastcall *a4)(const char *, int, int), int a5)
{
  int (__fastcall *v7)(const char *, int, int); // r4
  int v8; // r5
  __int64 v9; // r0
  int v10; // r1
  int result; // r0
  const char *v12; // r2
  int v13; // r11
  int v14; // r8
  int v15; // r9
  int v16; // r10
  int v17; // r10
  const char *v18; // r0
  int v19; // r0
  int v20; // r9
  int v21; // r10
  int i; // r8
  int v23; // r0
  const char *v24; // r0
  int v25; // r0
  int v26; // r5
  unsigned int v27; // r11
  int v28; // r4
  int v29; // r6
  unsigned int v30; // r8
  int (*v31)(const void *, const void *); // r3
  const char *v32; // r11
  int v33; // r10
  const char *v35; // [sp+Ch] [bp-88h]
  int nmemb; // [sp+10h] [bp-84h]
  void *base; // [sp+14h] [bp-80h]
  int v38; // [sp+18h] [bp-7Ch]
  unsigned int v39; // [sp+1Ch] [bp-78h]
  int v40; // [sp+20h] [bp-74h]
  int (__fastcall *v41)(const char *, int, int); // [sp+24h] [bp-70h]
  char s[104]; // [sp+2Ch] [bp-68h] BYREF

  v7 = a4;
  v8 = a5;
  if ( !a1 )
    return -1;
  switch ( *a1 )
  {
    case 0:
      v12 = ":";
      if ( (a2 & 0x20) != 0 )
        v13 = 1;
      else
        v13 = 2;
      if ( (a2 & 0x20) == 0 )
        v12 = ": ";
      v35 = v12;
      if ( a1[8] )
        goto LABEL_22;
      a1[8] = 1;
      v14 = sub_46714(a1, ": ");
      if ( v7("{", 1, a5) )
        goto LABEL_22;
      if ( v14 )
      {
        v15 = a3 + 1;
        v16 = sub_4394C(a2, a3 + 1, 0, v7, a5);
        if ( !v16 )
        {
          if ( (a2 & 0x180) != 0 )
          {
            nmemb = sub_4667C(a1);
            v25 = sub_45DE4(8 * nmemb);
            base = (void *)v25;
            if ( v25 )
            {
              v38 = v13;
              v41 = v7;
              v26 = v14;
              v27 = 0;
              v40 = a2;
              v28 = v25;
              while ( 1 )
              {
                *(_DWORD *)(v28 + v16) = sub_447B4(v26);
                v29 = v28 + v16;
                v16 += 8;
                *(_DWORD *)(v29 + 4) = sub_4678C(v26);
                v26 = sub_46760(a1, v26);
                if ( !v26 )
                  break;
                ++v27;
              }
              v30 = 0;
              v8 = a5;
              v39 = v27;
              v7 = v41;
              if ( nmemb != v27 + 1 )
                _assert_fail("i == size", "dump.c", 0x141u, "do_dump");
              v31 = (int (*)(const void *, const void *))sub_43908;
              if ( (v40 & 0x80) == 0 )
                v31 = (int (*)(const void *, const void *))compar;
              qsort(base, nmemb, 8u, v31);
              if ( !nmemb )
              {
LABEL_65:
                sub_45E0C(base);
LABEL_43:
                a1[8] = 0;
                return v7("}", 1, v8);
              }
              while ( 1 )
              {
                v32 = (const char *)*((_DWORD *)base + 2 * v30 + 1);
                v33 = sub_46698(a1, v32);
                if ( !v33 )
                  _assert_fail("value", "dump.c", 0x151u, "do_dump");
                sub_436E4(v32, v41, a5, v40);
                if ( v41(v35, v38, a5) || sub_439F0(v33, v40, v15, v41, a5) )
                  break;
                if ( v39 > v30 )
                {
                  if ( v41(",", 1, a5) || sub_4394C(v40, v15, 1, v41, a5) )
                    break;
                }
                else if ( sub_4394C(v40, a3, 0, v41, a5) )
                {
                  break;
                }
                if ( nmemb == ++v30 )
                  goto LABEL_65;
              }
              sub_45E0C(base);
            }
          }
          else
          {
            while ( 1 )
            {
              v17 = sub_46760(a1, v14);
              v18 = (const char *)sub_4678C(v14);
              sub_436E4(v18, v7, a5, a2);
              if ( v7(v35, v13, a5) )
                goto LABEL_22;
              v19 = sub_46798(v14);
              if ( sub_439F0(v19, a2, v15, v7, a5) )
                goto LABEL_22;
              if ( !v17 )
                break;
              if ( !v7(",", 1, a5) )
              {
                v14 = v17;
                if ( !sub_4394C(a2, v15, 1, v7, a5) )
                  continue;
              }
              goto LABEL_22;
            }
            if ( !sub_4394C(a2, a3, 0, v7, a5) )
              goto LABEL_43;
          }
        }
LABEL_22:
        a1[8] = 0;
        return -1;
      }
      a1[8] = 0;
      result = v7("}", 1, a5);
      break;
    case 1:
      if ( a1[5] )
        goto LABEL_36;
      a1[5] = 1;
      v20 = sub_46864(a1);
      if ( v7("[", 1, a5) )
        goto LABEL_36;
      if ( !v20 )
        goto LABEL_44;
      v21 = a3 + 1;
      if ( sub_4394C(a2, a3 + 1, 0, v7, a5) )
        goto LABEL_36;
      if ( v20 <= 0 )
        goto LABEL_44;
      for ( i = 0; i != v20; ++i )
      {
        v23 = sub_46880(a1, i);
        if ( sub_439F0(v23, a2, v21, v7, a5) )
        {
LABEL_36:
          a1[5] = 0;
          return -1;
        }
        if ( v20 - 1 > i )
        {
          if ( v7(",", 1, a5) || sub_4394C(a2, v21, 1, v7, a5) )
            goto LABEL_36;
        }
        else if ( sub_4394C(a2, a3, 0, v7, a5) )
        {
          goto LABEL_36;
        }
      }
LABEL_44:
      a1[5] = 0;
      return v7(word_56150, 1, a5);
    case 2:
      v24 = (const char *)sub_469F0(a1);
      return sub_436E4(v24, v7, a5, a2);
    case 3:
      v9 = sub_46AC0(a1);
      v10 = snprintf(s, 0x64u, "%lld", v9);
      if ( (unsigned int)v10 > 0x63 )
        return -1;
      return v7(s, v10, a5);
    case 4:
      sub_46B70(a1);
      v10 = sub_46120(s, 100);
      if ( v10 < 0 )
        return -1;
      return v7(s, v10, a5);
    case 5:
      return a4("true", 4, a5);
    case 6:
      return a4("false", 5, a5);
    case 7:
      return a4("null", 4, a5);
    default:
      return -1;
  }
  return result;
}
