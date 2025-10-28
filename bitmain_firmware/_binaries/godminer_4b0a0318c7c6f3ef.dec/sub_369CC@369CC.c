int __fastcall sub_369CC(int a1, int a2, char *a3, const char **a4, int *a5, char a6)
{
  char v6; // r7
  int v9; // r0
  int v10; // r3
  int v11; // r3
  int v12; // r2
  int v13; // r2
  char *v14; // r5
  int v15; // r1
  int v16; // r6
  int v17; // r5
  char *v18; // r3
  int v19; // r6
  void *v20; // r7
  int v21; // r5
  char *v22; // r0
  int v23; // r1
  _BOOL4 v24; // r2
  int v25; // r3
  char *v26; // r0
  int v27; // r8
  int v28; // r0
  int v29; // r5
  int v30; // r6
  int v32; // r3
  int v33; // r2
  int v34; // r1
  int v35; // r5
  int v36; // r2
  char *s; // [sp+8h] [bp-14h]
  char *v38; // [sp+Ch] [bp-10h]
  int v39; // [sp+Ch] [bp-10h]

  s = a3;
  v6 = a6;
  if ( !a3 )
    return -1;
  v9 = dword_193430;
  if ( dword_193430 == -1 )
  {
    v9 = getenv("POSIXLY_CORRECT") != 0;
    dword_193430 = v9;
  }
  v10 = (unsigned __int8)*s;
  if ( v9 )
  {
    v6 = a6 & 0xFE;
    if ( (((_BYTE)v10 - 43) & 0xFD) != 0 )
      goto LABEL_6;
LABEL_37:
    ++s;
    goto LABEL_38;
  }
  if ( v10 != 43 )
  {
    if ( v10 != 45 )
    {
LABEL_6:
      v11 = optind;
      if ( optind )
        goto LABEL_7;
      goto LABEL_39;
    }
    v6 = a6 | 2;
    goto LABEL_37;
  }
  v6 = a6 & 0xFE;
  ++s;
LABEL_38:
  v11 = optind;
  if ( optind )
  {
LABEL_7:
    v12 = optreset;
    optarg = 0;
    if ( !optreset )
      goto LABEL_8;
    goto LABEL_40;
  }
LABEL_39:
  v12 = 1;
  optreset = 1;
  optind = 1;
  optarg = v11;
LABEL_40:
  dword_193434 = -1;
  dword_193438 = -1;
LABEL_8:
  if ( !v12 )
    goto LABEL_18;
  while ( 1 )
  {
    v13 = optind;
    optreset = 0;
    if ( optind >= a1 )
    {
      v29 = dword_193434;
      v30 = dword_193438;
      off_193424 = "";
      if ( dword_193434 == -1 )
      {
        if ( dword_193438 != -1 )
          optind = dword_193438;
      }
      else
      {
        sub_366EC(dword_193438, dword_193434, optind, a2);
        optind -= v29 - v30;
      }
      goto LABEL_57;
    }
    v14 = *(char **)(a2 + 4 * optind);
    v15 = (unsigned __int8)*v14;
    off_193424 = v14;
    if ( v15 == 45 )
      break;
LABEL_11:
    off_193424 = "";
    if ( (v6 & 2) != 0 )
    {
      optind = v13 + 1;
      optarg = (int)v14;
      return 1;
    }
    if ( (v6 & 1) == 0 )
      return -1;
    v16 = dword_193438;
    if ( dword_193438 == -1 )
    {
      dword_193438 = v13;
      optind = v13 + 1;
LABEL_18:
      v18 = (char *)off_193424;
      v19 = *(unsigned __int8 *)off_193424;
      if ( *(_BYTE *)off_193424 )
        goto LABEL_19;
    }
    else
    {
      v17 = dword_193434;
      if ( dword_193434 == -1 )
      {
        optind = v13 + 1;
        goto LABEL_18;
      }
      sub_366EC(dword_193438, dword_193434, v13, a2);
      dword_193434 = -1;
      dword_193438 = optind - (v17 - v16);
      ++optind;
      if ( !optreset )
        goto LABEL_18;
    }
  }
  v19 = (unsigned __int8)v14[1];
  if ( v14[1] )
  {
    v27 = dword_193438;
    if ( dword_193438 != -1 )
    {
LABEL_44:
      if ( dword_193434 == -1 )
        dword_193434 = v13;
      if ( !v19 )
        goto LABEL_65;
    }
    v18 = v14 + 1;
    off_193424 = v14 + 1;
    if ( v19 != 45 )
    {
LABEL_19:
      if ( !a4 || v18 == *(char **)(a2 + 4 * optind) )
        goto LABEL_23;
      if ( v19 != 45 )
      {
        if ( (v6 & 4) == 0 )
          goto LABEL_23;
        v28 = v19 != 58 && strchr(s, v19) != 0;
        goto LABEL_52;
      }
LABEL_51:
      v28 = 0;
      off_193424 = v18 + 1;
LABEL_52:
      v21 = sub_367B4(a2, s, a4, a5, v28);
      if ( v21 != -1 )
      {
LABEL_53:
        off_193424 = "";
        return v21;
      }
      v18 = (char *)off_193424;
      v19 = *(unsigned __int8 *)off_193424;
LABEL_23:
      v20 = v18 + 1;
      off_193424 = v18 + 1;
      v21 = v19;
      if ( v19 == 58 )
        goto LABEL_99;
      if ( v19 == 45 )
      {
        v14 = v18;
        goto LABEL_66;
      }
      v38 = v18;
      v22 = strchr(s, v19);
      v18 = v38;
      if ( !v22 )
      {
LABEL_99:
        if ( !v18[1] )
          ++optind;
LABEL_78:
        optopt = v21;
        return 63;
      }
      v23 = (unsigned __int8)v22[1];
      v24 = v19 == 87;
      if ( !a4 )
        v24 = 0;
      if ( v24 && v23 == 59 )
      {
        if ( !v38[1] )
        {
          v25 = optind + 1;
          optind = v25;
          if ( v25 >= a1 )
          {
            optopt = 87;
            off_193424 = "";
            if ( *s != 58 )
              return 63;
            return 58;
          }
          off_193424 = *(_UNKNOWN **)(a2 + 4 * v25);
        }
        v21 = sub_367B4(a2, s, a4, a5, 0);
        goto LABEL_53;
      }
LABEL_69:
      if ( v23 != 58 )
      {
        if ( !*(_BYTE *)v20 )
          ++optind;
        return v21;
      }
      v32 = optind;
      optarg = 0;
      v33 = optind + 1;
      if ( *(_BYTE *)v20 )
      {
        optarg = (int)v20;
      }
      else if ( v22[2] != 58 )
      {
        ++optind;
        if ( a1 <= v33 )
        {
          optopt = v21;
          off_193424 = "";
          if ( *s != 58 )
            return 63;
          return 58;
        }
        v34 = *(_DWORD *)(a2 + 4 * v33);
        v33 = v32 + 2;
        optarg = v34;
      }
      optind = v33;
      off_193424 = "";
      return v21;
    }
    if ( v14[2] )
    {
      if ( !a4 )
      {
        v20 = v14 + 2;
        ++v14;
        off_193424 = v20;
        goto LABEL_66;
      }
      if ( v18 == *(char **)(a2 + 4 * optind) )
        goto LABEL_23;
      goto LABEL_51;
    }
    v35 = dword_193434;
    v36 = v13 + 1;
    optind = v36;
    off_193424 = "";
    if ( dword_193434 != -1 )
    {
      sub_366EC(v27, dword_193434, v36, a2);
      optind -= v35 - v27;
    }
LABEL_57:
    dword_193434 = -1;
    dword_193438 = -1;
    return -1;
  }
  v39 = optind;
  v26 = strchr(s, 45);
  v13 = v39;
  if ( !v26 )
    goto LABEL_11;
  v27 = dword_193438;
  if ( dword_193438 != -1 )
    goto LABEL_44;
LABEL_65:
  v20 = v14 + 1;
  off_193424 = v14 + 1;
LABEL_66:
  if ( !v14[1] )
  {
    v22 = strchr(s, 45);
    if ( v22 )
    {
      v23 = (unsigned __int8)v22[1];
      v21 = 45;
      goto LABEL_69;
    }
  }
  if ( *(_BYTE *)v20 )
  {
    v21 = 45;
    goto LABEL_78;
  }
  return -1;
}
