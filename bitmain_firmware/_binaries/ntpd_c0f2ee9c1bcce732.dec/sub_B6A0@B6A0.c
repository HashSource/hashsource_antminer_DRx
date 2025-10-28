char *__fastcall sub_B6A0(char *result)
{
  char *v1; // r6
  void *v2; // r3
  int v3; // r1
  int v4; // r1
  _DWORD *v5; // r8
  int v6; // r4
  const char **v7; // r8
  int v8; // t1
  const char *v9; // r5
  const char *v10; // t1
  _DWORD *v11; // r8
  int v12; // r4
  const char **v13; // r8
  int v14; // t1
  const char *v15; // t1
  size_t v16; // r0
  _DWORD *v17; // r8
  int v18; // r4
  const char **v19; // r8
  int v20; // t1
  const char *v21; // t1
  size_t v22; // r0
  int v23; // r3
  int v24; // r4
  int v25; // r0
  const char *v26; // r4
  double v27; // [sp+0h] [bp-Ch] BYREF

  v1 = result;
  if ( !dword_CB868 )
  {
    if ( !dword_CB864 )
    {
      sub_4FE78(3, "Neither IPv4 nor IPv6 networking detected, fatal.");
      exit(1);
    }
    v2 = off_7954C;
    if ( (*((_DWORD *)off_7954C + 4) & 0xF) != 0 )
    {
      result = (char *)sub_4FE78(4, "-4/--ipv4 ignored, IPv4 networking not found.");
      v2 = off_7954C;
      goto LABEL_5;
    }
    goto LABEL_60;
  }
  v2 = off_7954C;
  if ( !dword_CB864 )
  {
LABEL_60:
    if ( (*((_DWORD *)v2 + 20) & 0xF) != 0 && !dword_CB864 )
    {
      result = (char *)sub_4FE78(4, "-6/--ipv6 ignored, IPv6 networking not found.");
      v2 = off_7954C;
    }
LABEL_5:
    v3 = *((_DWORD *)v2 + 36) & 0xF;
    if ( !v3 )
      goto LABEL_6;
LABEL_58:
    result = (char *)sub_26A68(3, 1, 0);
    v2 = off_7954C;
    if ( (*((_DWORD *)off_7954C + 68) & 0xF) == 0 )
      goto LABEL_9;
    goto LABEL_59;
  }
  result = (char *)(*((_DWORD *)off_7954C + 4) & 0xF);
  if ( result )
  {
    dword_CB864 = 0;
    goto LABEL_5;
  }
  if ( (*((_DWORD *)off_7954C + 20) & 0xF) != 0 )
    dword_CB868 = 0;
  v3 = *((_DWORD *)off_7954C + 36) & 0xF;
  if ( v3 )
    goto LABEL_58;
LABEL_6:
  if ( (*((_DWORD *)v2 + 52) & 0xF) != 0 )
  {
    result = (char *)sub_26A68(3, v3, v3);
    v2 = off_7954C;
  }
  if ( (*((_DWORD *)v2 + 68) & 0xF) != 0 )
  {
LABEL_59:
    result = (char *)sub_26A68(1, 1, 0);
    v2 = off_7954C;
  }
LABEL_9:
  if ( (*((_DWORD *)v2 + 84) & 0xF) != 0 )
    dword_C9D68 = *((_DWORD *)v2 + 86);
  if ( (*((_DWORD *)v2 + 132) & 0xF) != 0 )
  {
    result = (char *)sub_2E368(1, *((char **)v2 + 134));
    v2 = off_7954C;
  }
  if ( (*((_DWORD *)v2 + 148) & 0xF) != 0 )
    dword_7D5E8 = 1;
  if ( (*((_DWORD *)v2 + 164) & 0xF) != 0 )
  {
    result = (char *)&dword_7CF58;
    v4 = *((_DWORD *)v2 + 166);
    dword_7CF58 = 1;
    dword_7CF64 = v4;
  }
  if ( (*((_DWORD *)v2 + 196) & 0xF) != 0 )
  {
    result = (char *)sub_2E1E8(*((_DWORD *)v2 + 198));
    v2 = off_7954C;
  }
  if ( (*((_DWORD *)v2 + 292) & 0xF) != 0 )
  {
    result = (char *)sub_2E368(3, *((char **)v2 + 294));
    v2 = off_7954C;
  }
  if ( (*((_DWORD *)v2 + 324) & 0xF) != 0 )
    dword_7D5EC = 1;
  if ( (*((_DWORD *)v2 + 340) & 0xF) != 0 )
  {
    v26 = (const char *)*((_DWORD *)v2 + 342);
    if ( sscanf(v26, "%lf", &v27) == 1 )
      result = (char *)sub_26A68(4, 0, 0);
    else
      result = (char *)sub_4FE78(3, "command line broadcast delay value %s undecodable", v26);
    v2 = off_7954C;
  }
  if ( (*((_DWORD *)v2 + 372) & 0xF) != 0 )
  {
    result = (char *)sub_2E368(2, *((char **)v2 + 374));
    v2 = off_7954C;
  }
  if ( (*((_DWORD *)v2 + 388) & 0xF) != 0 )
  {
    v5 = (_DWORD *)*((_DWORD *)v2 + 391);
    v8 = *v5;
    v7 = (const char **)(v5 + 2);
    v6 = v8;
    do
    {
      while ( 1 )
      {
        v10 = *v7++;
        v9 = v10;
        if ( (unsigned int)(strtol(v10, 0, 10) - 1) <= 0xFFFE )
          break;
        --v6;
        result = (char *)sub_4FE78(3, "command line trusted key %s is invalid", v9);
        if ( v6 <= 0 )
          goto LABEL_31;
      }
      --v6;
      result = (char *)sub_4DE88();
    }
    while ( v6 > 0 );
LABEL_31:
    v2 = off_7954C;
  }
  if ( (*((_DWORD *)v2 + 404) & 0xF) != 0 )
  {
    v25 = *((_DWORD *)v2 + 406);
    dword_7CF58 = 1;
    dword_7CF5C = sub_4F4E8(v25);
    result = rindex((const char *)dword_7CF5C, 58);
    dword_7CF60 = (int)result;
    v2 = result ? 0 : off_7954C;
    if ( result )
    {
      *result++ = (char)v2;
      v2 = off_7954C;
      dword_7CF60 = (int)result;
    }
  }
  if ( (*((_DWORD *)v2 + 436) & 0xF) != 0 )
  {
    v11 = (_DWORD *)*((_DWORD *)v2 + 439);
    v14 = *v11;
    v13 = (const char **)(v11 + 2);
    v12 = v14;
    do
    {
      v15 = *v13++;
      --v12;
      v16 = strlen(v15);
      result = (char *)sub_1CE68(v15, v16 + 1, 3);
    }
    while ( v12 > 0 );
    v2 = off_7954C;
  }
  if ( (*((_DWORD *)v2 + 452) & 0xF) != 0 )
  {
    v17 = (_DWORD *)*((_DWORD *)v2 + 455);
    v20 = *v17;
    v19 = (const char **)(v17 + 2);
    v18 = v20;
    do
    {
      v21 = *v19++;
      --v18;
      v22 = strlen(v21);
      result = (char *)sub_1CE68(v21, v22 + 1, 35);
    }
    while ( v18 > 0 );
    v2 = off_7954C;
  }
  if ( (*((_DWORD *)v2 + 468) & 0xF) != 0 )
  {
    result = (char *)&dbl_7A1A8;
    dword_7A198 = 0;
    dbl_7A1A8 = 600.0;
  }
  if ( (*((_DWORD *)v2 + 420) & 0xF) != 0 )
  {
    v24 = *((_DWORD *)v2 + 422);
    if ( v24 < 0 )
    {
      fprintf((FILE *)stderr, "command line interface update interval %ld must not be negative\n", v24);
      result = (char *)sub_4FE78(3, "command line interface update interval %ld must not be negative", v24);
      v23 = 1;
    }
    else
    {
      v23 = 0;
      dword_7A4E8 = v24;
    }
  }
  else
  {
    v23 = 0;
  }
  if ( v23 | (unsigned int)v1 )
  {
    if ( v1 )
      fprintf((FILE *)stderr, "argc after processing is <%d>\n", v1);
    sub_4C6C0(&unk_79508, 2);
  }
  return result;
}
