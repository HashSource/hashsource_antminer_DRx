int __fastcall sub_12344(const char *a1, unsigned __int16 *a2, char a3)
{
  const char *v6; // r6
  const char *v7; // r0
  _BOOL4 v8; // r0
  _BOOL4 v9; // r8
  int v10; // r4
  int v11; // r10
  int v13; // r11
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r2
  int v25; // r1
  const char *v26; // r0
  const char *v27; // r0
  const char *v28; // r0
  const char *v29; // r0
  const char *v30; // r0
  int v31; // r3
  int v32; // r3
  const char *v33; // r0
  const char *v34; // r0
  int v35; // [sp+0h] [bp-64h]
  _BYTE v36[24]; // [sp+8h] [bp-5Ch] BYREF
  _BYTE v37[24]; // [sp+20h] [bp-44h] BYREF
  int v38; // [sp+38h] [bp-2Ch] BYREF
  int v39; // [sp+3Ch] [bp-28h]
  int v40; // [sp+40h] [bp-24h]
  int v41; // [sp+44h] [bp-20h]
  int v42; // [sp+48h] [bp-1Ch]
  int v43; // [sp+4Ch] [bp-18h]
  int v44; // [sp+50h] [bp-14h]
  int v45; // [sp+54h] [bp-10h]
  int v46; // [sp+58h] [bp-Ch]
  int v47; // [sp+5Ch] [bp-8h]

  if ( dword_7CF4C > 3 )
  {
    v6 = "wildcard";
    if ( a1 )
      v6 = a1;
    v7 = (const char *)sub_50CD0(a2);
    printf("interface_action: %s %s ", v6, v7);
  }
  v8 = sub_11174(a2);
  v9 = v8;
  if ( (a3 & 4) != 0 )
  {
    if ( *a2 == 2 )
    {
      if ( dword_7CF4C > 3 )
        puts("IPv4 loopback - listen");
      return 0;
    }
    v35 = 1;
  }
  else
  {
    v35 = 0;
  }
  v10 = dword_CA624;
  if ( !dword_CA624 )
  {
LABEL_15:
    if ( v35 )
    {
      if ( dword_7CF4C > 3 )
      {
        puts("default loopback listen");
        return 0;
      }
      return 0;
    }
    if ( v9 )
    {
      if ( dword_7CF4C > 3 )
        puts("default wildcard drop");
      return 2;
    }
    if ( !dword_79500 && a1 && strchr(a1, 58) )
    {
      if ( dword_7CF4C > 3 )
      {
        puts("virtual ip - ignore");
        return 1;
      }
    }
    else
    {
      if ( !dword_CA624 )
      {
        if ( dword_7CF4C > 3 )
        {
          puts("default listen");
          return 0;
        }
        return 0;
      }
      if ( dword_7CF4C > 3 )
      {
        puts("implicit ignore");
        return 1;
      }
    }
    return 1;
  }
  v11 = v35 | v8;
  while ( 2 )
  {
    switch ( *(_DWORD *)(v10 + 8) )
    {
      case 0:
        if ( v11 )
          goto LABEL_14;
        if ( dword_7CF4C > 3 )
        {
          v30 = sub_122B0(*(_DWORD *)(v10 + 4));
          printf("nic all %s\n", v30);
        }
        return *(_DWORD *)(v10 + 4);
      case 1:
        if ( *a2 != 2 )
          goto LABEL_14;
        if ( dword_7CF4C > 3 )
        {
          v29 = sub_122B0(*(_DWORD *)(v10 + 4));
          printf("nic ipv4 %s\n", v29);
        }
        return *(_DWORD *)(v10 + 4);
      case 2:
        if ( *a2 != 10 )
          goto LABEL_14;
        if ( dword_7CF4C > 3 )
        {
          v28 = sub_122B0(*(_DWORD *)(v10 + 4));
          printf("nic ipv6 %s\n", v28);
        }
        return *(_DWORD *)(v10 + 4);
      case 3:
        if ( !v9 )
          goto LABEL_14;
        if ( dword_7CF4C > 3 )
        {
          v27 = sub_122B0(*(_DWORD *)(v10 + 4));
          printf("nic wildcard %s\n", v27);
        }
        return *(_DWORD *)(v10 + 4);
      case 4:
        if ( !a1 || strcasecmp(a1, *(const char **)(v10 + 12)) )
          goto LABEL_14;
        if ( dword_7CF4C > 3 )
        {
          v34 = sub_122B0(*(_DWORD *)(v10 + 4));
          printf("interface name match - %s\n", v34);
        }
        return *(_DWORD *)(v10 + 4);
      case 5:
        v13 = *(_DWORD *)(v10 + 44);
        if ( v13 != -1 )
        {
          v14 = *(_DWORD *)a2;
          v15 = *((_DWORD *)a2 + 1);
          v16 = *((_DWORD *)a2 + 2);
          v17 = *((_DWORD *)a2 + 3);
          v45 = 0;
          v46 = 0;
          v38 = v14;
          v39 = v15;
          v40 = v16;
          v41 = v17;
          v18 = *((_DWORD *)a2 + 4);
          v19 = *((_DWORD *)a2 + 5);
          v20 = *((_DWORD *)a2 + 6);
          v47 = 0;
          v42 = v18;
          v43 = v19;
          v44 = v20;
          sub_56944(v36, &v38);
          v39 = 0;
          v40 = 0;
          v41 = 0;
          v42 = 0;
          v43 = 0;
          v44 = 0;
          v38 = 0;
          v45 = 0;
          v46 = 0;
          v47 = 0;
          v21 = *(_DWORD *)(v10 + 20);
          v22 = *(_DWORD *)(v10 + 24);
          v23 = *(_DWORD *)(v10 + 28);
          v38 = *(_DWORD *)(v10 + 16);
          v39 = v21;
          v40 = v22;
          v41 = v23;
          v24 = *(_DWORD *)(v10 + 40);
          v25 = *(_DWORD *)(v10 + 36);
          v42 = *(_DWORD *)(v10 + 32);
          v43 = v25;
          v44 = v24;
          sub_56944(v37, &v38);
          if ( sub_563EC(v36, v37, v13) )
          {
            if ( dword_7CF4C > 3 )
            {
              v26 = sub_122B0(*(_DWORD *)(v10 + 4));
              printf("subnet address match - %s\n", v26);
            }
            return *(_DWORD *)(v10 + 4);
          }
          goto LABEL_14;
        }
        v31 = *(unsigned __int16 *)(v10 + 16);
        if ( v31 != *a2 )
          goto LABEL_14;
        if ( v31 != 2 )
        {
          if ( !memcmp(a2 + 4, (const void *)(v10 + 24), 0x10u) )
          {
            v32 = *((_DWORD *)a2 + 6)
                - *(_DWORD *)(v10 + 40)
                + (*((_DWORD *)a2 + 6) == *(_DWORD *)(v10 + 40))
                + *(_DWORD *)(v10 + 40)
                - *((_DWORD *)a2 + 6);
            goto LABEL_39;
          }
LABEL_14:
          v10 = *(_DWORD *)v10;
          if ( !v10 )
            goto LABEL_15;
          continue;
        }
        v32 = *((_DWORD *)a2 + 1) == *(_DWORD *)(v10 + 20);
LABEL_39:
        if ( !v32 )
          goto LABEL_14;
        if ( dword_7CF4C > 3 )
        {
          v33 = sub_122B0(*(_DWORD *)(v10 + 4));
          printf("address match - %s\n", v33);
        }
        return *(_DWORD *)(v10 + 4);
      default:
        goto LABEL_14;
    }
  }
}
