size_t __fastcall sub_4AC8C(int a1, const char *a2, int a3)
{
  size_t result; // r0
  char *v6; // r4
  int v7; // r11
  int v8; // r8
  unsigned int v9; // r3
  int v10; // r2
  char *v11; // r1
  unsigned int v12; // t1
  char *v13; // r6
  char *v14; // r0
  char *v15; // r12
  unsigned int v16; // r3
  bool v17; // zf
  char *v18; // r6
  char *v19; // r3
  unsigned int v20; // r2
  char *v21; // lr
  char *v22; // r2
  int v23; // r2
  char *v24; // r1
  unsigned int v25; // t1
  char *v26; // r1
  unsigned int v27; // t1
  char *v28; // r2
  unsigned int v29; // r3
  char *v30; // r0
  const char *v31; // r6
  size_t v32; // r7
  unsigned int v33; // r3
  unsigned int v34; // r3
  char *v35; // r6
  char *v36; // r4
  unsigned int v37; // r3
  unsigned int v38; // r3
  char *v39; // r0
  char *v40; // r0
  const char *v41; // r6
  int v42; // r9
  size_t v43; // r0
  size_t v44; // r7
  unsigned int v45; // r2
  char *i; // r2
  unsigned int v47; // r3
  char *v48; // r0
  char *v49; // r0
  const char *v50; // r0
  int v51; // r3
  char *v52; // r7
  size_t v53; // r0
  size_t v54; // r9
  char *v55; // r4
  unsigned int j; // r3
  int v57; // r3
  const char *k; // r9
  int v59; // r3
  char *v60; // r4
  char v61; // r0
  int v62; // r3
  unsigned int v63; // r3
  int v64; // r6
  int v65; // r7
  const char *v66; // r8
  const char *v67; // r1
  size_t v68; // r4
  int v69; // r2
  unsigned int v70; // r0
  unsigned int v71; // r3
  char *v72; // r12
  char *v73; // [sp+Ch] [bp-A8h]
  char *s1; // [sp+10h] [bp-A4h]
  char *s1a; // [sp+10h] [bp-A4h]
  const char *v76; // [sp+14h] [bp-A0h]
  int v77; // [sp+18h] [bp-9Ch]
  char *v78; // [sp+18h] [bp-9Ch]
  const char *v79; // [sp+20h] [bp-94h]
  int v80; // [sp+24h] [bp-90h]
  int v81; // [sp+28h] [bp-8Ch] BYREF
  char *endptr; // [sp+2Ch] [bp-88h] BYREF
  int v83[3]; // [sp+30h] [bp-84h] BYREF
  void **v84[2]; // [sp+3Ch] [bp-78h] BYREF
  int v85; // [sp+44h] [bp-70h]
  int v86; // [sp+48h] [bp-6Ch]
  size_t v87[9]; // [sp+4Ch] [bp-68h] BYREF
  char s[68]; // [sp+70h] [bp-44h] BYREF

  v85 = 2;
  v84[0] = 0;
  v84[1] = 0;
  v86 = 0;
  result = sub_4A988(a2, 3, 2, v87);
  v6 = (char *)result;
  if ( result != -1 )
  {
    if ( a3 )
    {
      v7 = 2;
    }
    else
    {
      v7 = 4;
      a3 = 1;
    }
    v8 = a3;
    if ( (*(_DWORD *)(a1 + 12) & 0x80000) == 0 )
      v7 = 1;
    while ( 1 )
    {
      v85 = v7;
      v9 = (unsigned __int8)*v6;
      if ( v9 <= 0x7F )
      {
        v10 = dword_69A0C[v9];
        if ( (v10 & 0x500) != 0 )
        {
          v11 = v6 + 1;
          while ( 1 )
          {
            v6 = v11;
            v12 = (unsigned __int8)*v11++;
            v9 = v12;
            if ( v12 > 0x7F )
              break;
            v10 = dword_69A0C[v9];
            if ( (v10 & 0x500) == 0 )
              goto LABEL_17;
          }
        }
        else
        {
LABEL_17:
          if ( (v10 & 0x23) != 0 )
          {
            v13 = v6 + 1;
            v14 = strchr(v6 + 1, 10);
            v15 = v14;
            if ( !v14 )
            {
              v6 = &v13[strlen(v6 + 1)];
              goto LABEL_33;
            }
            v16 = (unsigned __int8)v6[1];
            if ( v16 > 0x7F )
              goto LABEL_20;
            v23 = dword_69A0C[v16];
            if ( (v23 & 0xEF) != 0 )
            {
              v24 = v6 + 2;
              while ( 1 )
              {
                v13 = v24;
                v25 = (unsigned __int8)*v24++;
                v16 = v25;
                if ( v25 > 0x7F )
                  break;
                v23 = dword_69A0C[v16];
                if ( (v23 & 0xEF) == 0 )
                  goto LABEL_39;
              }
LABEL_20:
              if ( v14 >= v13 )
              {
LABEL_21:
                v17 = v16 == 61;
                if ( v16 != 61 )
                  v17 = v16 == 58;
                if ( !v17 )
                {
                  v29 = (unsigned __int8)*(v13 - 1);
                  if ( v29 > 0x7F || (dword_69A0C[v29] & 0x500) == 0 )
                    return sub_4AB84((int)v87);
LABEL_29:
                  if ( *(v14 - 1) != 92 )
                  {
                    *v14 = 0;
                    v21 = v14 + 1;
                    goto LABEL_32;
                  }
                  for ( i = v14 - 1; ; ++i )
                  {
                    v21 = v15 + 1;
                    v47 = (unsigned __int8)*v15;
                    if ( v47 == 92 )
                    {
                      if ( v15[1] == 10 )
                      {
                        v21 = v15 + 2;
                        LOBYTE(v47) = 10;
                      }
                    }
                    else if ( v47 <= 0x5C )
                    {
                      if ( !*v15 )
                      {
                        v21 = 0;
LABEL_89:
                        *i = 0;
LABEL_32:
                        v22 = v6;
                        v6 = v21;
                        sub_44E30(a1, v84, v22, v8, 1);
                        goto LABEL_33;
                      }
                      if ( v47 == 10 )
                        goto LABEL_89;
                    }
                    *i = v47;
                    v15 = v21;
                  }
                }
                v18 = v13 + 1;
                do
                {
                  v19 = v18++;
                  v20 = (unsigned __int8)*v19;
                }
                while ( v20 <= 0x7F && (dword_69A0C[v20] & 0x500) != 0 );
                if ( v14 >= v19 )
                  goto LABEL_29;
              }
            }
            else
            {
LABEL_39:
              if ( (v23 & 0x500) == 0 )
                goto LABEL_20;
              v26 = v13 + 1;
              do
              {
                v13 = v26;
                v27 = (unsigned __int8)*v26++;
                v16 = v27;
                if ( v27 > 0x7F )
                  goto LABEL_20;
              }
              while ( (dword_69A0C[v16] & 0x500) != 0 );
              if ( v14 >= v13 )
                goto LABEL_21;
            }
            v28 = v6;
            *v14 = 0;
            v6 = v14 + 1;
            sub_44E30(a1, v84, v28, v8, 1);
            goto LABEL_33;
          }
        }
      }
      if ( v9 != 60 )
      {
        if ( v9 == 91 )
        {
          v31 = *(const char **)(a1 + 32);
          v32 = strlen(v31);
          if ( !strncmp(v6 + 1, v31, v32) && v6[v32 + 1] == 93 )
          {
            v6 = strchr(&v6[v32 + 2], 10);
            goto LABEL_33;
          }
          if ( v32 > 0x10 )
            return sub_4AB84((int)v87);
          sprintf(s, "[%s]", v31);
          v30 = strstr(v6, s);
          if ( !v30 )
            return sub_4AB84((int)v87);
        }
        else
        {
          if ( v9 != 35 )
            return sub_4AB84((int)v87);
          v30 = v6 + 1;
        }
        v6 = strchr(v30, 10);
        goto LABEL_33;
      }
      v33 = (unsigned __int8)v6[1];
      if ( v33 > 0x7F || (dword_69A0C[v33] & 0x23) == 0 )
      {
        switch ( v33 )
        {
          case '/':
            v48 = strchr(v6 + 2, 62);
            v6 = v48 + 1;
            if ( v48 )
              goto LABEL_33;
            break;
          case '?':
            v41 = (const char *)dword_C9ACC;
            if ( !dword_C9ACC )
            {
              v41 = off_7B8AC[0];
              dword_C9ACC = (int)off_7B8AC[0];
              dword_C9AD0 = (int)off_7B8A8[0];
            }
            v42 = 0;
            s1a = v6 + 2;
            while ( 1 )
            {
              v43 = strlen(v41);
              v44 = v43 + 2;
              if ( !strncmp(s1a, v41, v43) )
              {
                v45 = (unsigned __int8)v6[v44];
                if ( v45 > 0x7F || (dword_69A0C[v45] & 0xEF) == 0 )
                {
                  v6 = (*(char *(__fastcall **)(char *, int))&aGenshelloptIsF[4 * v42 - 280])((char *)a1, (int)&v6[v44]);
                  goto LABEL_33;
                }
              }
              v17 = v42 == 1;
              v42 = 1;
              if ( v17 )
                break;
              v41 = (const char *)dword_C9AD0;
            }
            v49 = strchr(s1a, 62);
            if ( v49 )
            {
              v6 = v49 + 1;
              goto LABEL_33;
            }
            break;
          case '!':
            v40 = strstr(v6, "-->");
            if ( v40 )
            {
              v6 = v40 + 3;
              goto LABEL_33;
            }
            break;
        }
        return sub_4AB84((int)v87);
      }
      s1 = v6 + 1;
      v81 = dword_7BB74;
      v34 = (unsigned __int8)v6[1];
      if ( v34 <= 0x7F )
      {
        if ( (dword_69A0C[v34] & 0xEF) != 0 )
        {
          v36 = v6 + 2;
          do
          {
            v35 = v36++;
            v37 = (unsigned __int8)*v35;
          }
          while ( v37 <= 0x7F && (dword_69A0C[v37] & 0xEF) != 0 );
        }
        else
        {
          v35 = v6 + 1;
        }
      }
      else
      {
        v35 = v6 + 1;
      }
      v83[0] = 1;
      v38 = (unsigned __int8)*v35;
      if ( v38 == 47 )
        goto LABEL_101;
      if ( v38 > 0x2F )
      {
        if ( v38 != 62 )
          goto LABEL_68;
        v76 = v35;
      }
      else
      {
        if ( v38 != 9 && v38 != 32 )
        {
LABEL_68:
          v39 = strchr(v35, 62);
          if ( v39 )
          {
            v6 = v39 + 1;
            goto LABEL_33;
          }
          return sub_4AB84((int)v87);
        }
        v50 = sub_46690(v35, &v81, v83);
        v51 = *(unsigned __int8 *)v50;
        v76 = v50;
        if ( v51 != 62 )
        {
          if ( v51 != 47 )
            return sub_4AB84((int)v87);
          v35 = (char *)v50;
LABEL_101:
          if ( v35[1] == 62 )
          {
            *v35 = 0;
            v6 = v35 + 2;
            sub_44E30(a1, v84, s1, v8, v81);
            goto LABEL_33;
          }
          return sub_4AB84((int)v87);
        }
      }
      *v35 = 0;
      v52 = (char *)(v76 + 1);
      v53 = strlen(s1);
      v77 = v81;
      v54 = v53 + 4;
      if ( v53 + 4 > 0x40 )
      {
        v73 = (char *)sub_44484(v53 + 4);
        sprintf(v73, "</%s>", s1);
        *((_BYTE *)v76 + 1) = 32;
        v55 = strstr(v52, v73);
        if ( v73 != s )
          free(v73);
      }
      else
      {
        sprintf(s, "</%s>", s1);
        *((_BYTE *)v76 + 1) = 32;
        v55 = strstr(v52, s);
      }
      if ( !v55 )
        return sub_4AB84((int)v87);
      if ( v77 != 1 )
      {
        for ( j = (unsigned __int8)*(v55 - 1); j <= 0x7F; j = (unsigned __int8)*(v55 - 1) )
        {
          if ( (dword_69A0C[j] & 0x500) == 0 )
            break;
          --v55;
          ++v54;
        }
      }
      *v55 = 0;
      v6 = &v55[v54 - 1];
      if ( !v6 )
        return sub_4AB84((int)v87);
      memset(v35, 32, v52 - v35);
      v57 = v81;
      if ( v83[0] != 1 || v81 )
        goto LABEL_112;
      s[2] = 0;
      v78 = v6;
      for ( k = v76 + 2; ; ++k )
      {
        v79 = k - 1;
        v60 = v52 + 1;
        v59 = (unsigned __int8)*v52;
        if ( v59 == 37 )
        {
          v17 = v52[1] == 0;
          s[0] = v52[1];
          v62 = (unsigned __int8)v52[2];
          v52 += 3;
          s[1] = v62;
          if ( v17 || !v62 )
            goto LABEL_141;
          v61 = strtoul(s, 0, 16);
          goto LABEL_127;
        }
        if ( v59 != 38 )
        {
          if ( !*v52 )
          {
            v6 = v78;
            *v79 = 0;
            goto LABEL_133;
          }
          v61 = *v52++;
LABEL_127:
          *((_BYTE *)k - 1) = v61;
          continue;
        }
        endptr = v52 + 1;
        v63 = (unsigned __int8)v52[1];
        if ( v63 == 35 )
        {
          v60 = v52 + 2;
          endptr = v52 + 2;
          v63 = (unsigned __int8)v52[2];
          goto LABEL_144;
        }
        if ( v63 <= 0x7F )
          break;
        v64 = 0;
        v80 = v8;
        v65 = 0;
        v66 = v60;
LABEL_138:
        while ( 1 )
        {
          v67 = (&off_6B718)[v64];
          v68 = LOWORD((&off_6B718)[v64 + 1]);
          v64 += 2;
          if ( !strncmp(v66, v67, v68) )
            break;
          if ( ++v65 == 12 )
          {
            v6 = v78;
            v8 = v80;
            goto LABEL_142;
          }
        }
        v72 = &aGenshelloptIsF[8 * v65 + 372];
        v52 = (char *)&v66[v68];
        v8 = v80;
        v71 = *((__int16 *)v72 - 371);
LABEL_152:
        *((_BYTE *)k - 1) = v71;
        if ( !v71 )
        {
          v6 = v78;
          goto LABEL_133;
        }
      }
      if ( (dword_69A0C[v63] & 0xC) == 0 )
      {
        v64 = 0;
        v80 = v8;
        v65 = 0;
        v66 = v60;
        goto LABEL_138;
      }
LABEL_144:
      if ( v63 == 88 || v63 == 120 )
      {
        ++v60;
        v69 = 16;
        endptr = v60;
      }
      else if ( v63 == 48 )
      {
        if ( v60[1] == 48 )
          v69 = 16;
        else
          v69 = 10;
      }
      else
      {
        v69 = 10;
      }
      v70 = strtoul(v60, &endptr, v69);
      if ( *endptr == 59 && v70 <= 0x7F )
      {
        v52 = endptr + 1;
        v71 = v70;
        goto LABEL_152;
      }
LABEL_141:
      v6 = v78;
LABEL_142:
      *v79 = 0;
LABEL_133:
      v57 = v81;
LABEL_112:
      sub_44E30(a1, v84, s1, v8, v57);
LABEL_33:
      if ( !v6 )
        return sub_4AB84((int)v87);
    }
  }
  return result;
}
