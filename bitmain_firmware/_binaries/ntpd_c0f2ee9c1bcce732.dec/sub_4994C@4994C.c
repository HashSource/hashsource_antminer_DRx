int __fastcall sub_4994C(_DWORD *a1)
{
  int v2; // r2
  _DWORD *v3; // r8
  int v4; // r3
  int v5; // r4
  _DWORD *v6; // r4
  const char *v7; // r2
  int v8; // r1
  int v9; // r12
  const char *v10; // r3
  int v11; // r12
  const char *v12; // r1
  int v13; // r2
  _DWORD *v14; // r5
  int v15; // r4
  const char **v16; // r10
  int v17; // r4
  const char *v18; // t1
  int v19; // r3
  const char *v21; // r3
  int v22; // r5
  int v23; // r7
  const char *v24; // r4
  int v25; // r3
  int v26; // t1
  _BYTE *v27; // r3
  void (__fastcall *v28)(int, _DWORD *); // r3
  _BYTE *v29; // r0
  _BYTE *v30; // r11
  unsigned int v31; // r5
  unsigned __int8 *v32; // r2
  unsigned int v33; // t1
  _BYTE *v34; // r4
  int v35; // r0
  _BYTE *v36; // r7
  int v37; // r2
  int v38; // r3
  const __int32_t **v39; // r0
  const char *v40; // r3
  int v41; // r4
  int v42; // [sp+0h] [bp-Ch]
  int v43; // [sp+4h] [bp-8h]

  v42 = 0;
  printf("OPTION_CT=%d\nexport OPTION_CT\n", a1[4] - 1);
  do
  {
    v2 = a1[17];
    v3 = (_DWORD *)(v2 + (v42 << 6));
    v4 = v3[4];
    if ( (v4 & 0x280000) != 0 || *((unsigned __int16 *)v3 + 4) != 0x8000 )
      goto LABEL_2;
    v5 = *((unsigned __int16 *)v3 + 2);
    if ( v5 != v42 )
    {
      v6 = (_DWORD *)(v2 + (v5 << 6));
      v7 = (const char *)v3[12];
      v8 = v6[4];
      v6[6] = v3[6];
      v8 &= 0xFFFFFF80;
      v6[4] = v8;
      v9 = v3[4];
      v3 = v6;
      v10 = (const char *)v6[12];
      v11 = v9 & 0x7F | v8;
      v12 = (const char *)a1[8];
      v6[4] = v11;
      printf("%1$s_%2$s_MODE='%3$s'\nexport %1$s_%2$s_MODE\n", v12, v7, v10);
      v4 = v6[4];
    }
    v13 = (unsigned __int16)v4 >> 12;
    if ( v13 != 4 )
    {
      if ( (v3[4] & 0x2F) != 0x20 )
      {
        if ( (v4 & 0x400) != 0 && (v14 = (_DWORD *)v3[7]) != 0 )
        {
          v15 = *v14;
          v16 = (const char **)(v14 + 2);
          printf("%1$s_%2$s_CT=%3$d\nexport %1$s_%2$s_CT\n", (const char *)a1[8], (const char *)v3[12], *v14);
          v17 = v15 - 1;
          if ( v17 >= 0 )
          {
            do
            {
              printf("%s_%s_%d=", (const char *)a1[8], (const char *)v3[12], *v14 - v17);
              v18 = *v16++;
              sub_44368(v18);
              v19 = *v14 - v17--;
              printf("\nexport %s_%s_%d\n", (const char *)a1[8], (const char *)v3[12], v19);
            }
            while ( v17 != -1 );
          }
        }
        else if ( (v4 & 0x20) != 0 )
        {
          v21 = (const char *)v3[15];
          if ( !v21 )
            v21 = "false";
          printf("%1$s_%2$s=%3$s\nexport %1$s_%2$s\n", a1[8], v3[12], v21, v42);
        }
        else
        {
          switch ( v13 )
          {
            case 5:
              printf("%1$s_%2$s=%3$d # 0x%3$X\nexport %1$s_%2$s\n", (const char *)a1[8], (const char *)v3[12], v3[6]);
              break;
            case 2:
              v41 = v3[6];
              printf("%s_%s=", (const char *)a1[8], (const char *)v3[12]);
              ((void (__fastcall *)(int, _DWORD *))v3[10])(3, v3);
              printf("'%s'", (const char *)v3[6]);
              if ( (v3[4] & 0x40) != 0 )
                free((void *)v3[6]);
              v3[6] = v41;
              printf("\nexport %s_%s\n", (const char *)a1[8], (const char *)v3[12]);
              break;
            case 3:
              v40 = "true";
              if ( !v3[6] )
                v40 = "false";
              printf("%1$s_%2$s='%3$s'\nexport %1$s_%2$s\n", (const char *)a1[8], (const char *)v3[12], v40);
              break;
            default:
              v27 = (_BYTE *)v3[6];
              if ( v27 && *v27 )
              {
                printf("%s_%s=", (const char *)a1[8], (const char *)v3[12]);
                sub_44368((const char *)v3[6]);
                printf("\nexport %s_%s\n", (const char *)a1[8], (const char *)v3[12]);
              }
              else
              {
                printf(
                  "%1$s_%2$s=%3$d # 0x%3$X\nexport %1$s_%2$s\n",
                  (const char *)a1[8],
                  (const char *)v3[12],
                  *((unsigned __int16 *)v3 + 7));
              }
              break;
          }
        }
      }
      goto LABEL_2;
    }
    printf("%1$s_%2$s=%3$d # 0x%3$X\nexport %1$s_%2$s\n", (const char *)a1[8], (const char *)v3[12], v3[7]);
    v28 = (void (__fastcall *)(int, _DWORD *))v3[10];
    v3[7] = -1;
    v28(3, v3);
    v29 = (_BYTE *)v3[6];
    v30 = v29 + 7;
    if ( !v29[7] )
      goto LABEL_56;
    v43 = 1;
    do
    {
      printf(aType, v3[12]);
      v31 = (unsigned __int8)*v30;
      if ( v31 <= 0x7F && (dword_69A0C[v31] & 0x4500) != 0 )
      {
        v32 = v30 + 1;
        do
        {
          v30 = v32;
          v33 = *v32++;
          v31 = v33;
        }
        while ( v33 <= 0x7F && (dword_69A0C[v31] & 0x4500) != 0 );
      }
      v34 = v30;
      while ( 1 )
      {
        v36 = v34++;
        v30 = v34;
        if ( v31 > 0x7F )
          goto LABEL_47;
        v37 = dword_69A0C[v31];
        if ( (v37 & 1) == 0 )
          break;
        v39 = _ctype_toupper_loc();
        fputc((*v39)[v31], (FILE *)stdout);
LABEL_49:
        v31 = (unsigned __int8)v36[1];
      }
      v35 = v31;
      if ( (v37 & 2) != 0 )
        goto LABEL_48;
      if ( (v37 & 0x4500) != 0 )
        goto LABEL_54;
LABEL_47:
      v35 = 95;
      if ( v31 )
      {
LABEL_48:
        fputc(v35, (FILE *)stdout);
        goto LABEL_49;
      }
      v30 = v36;
LABEL_54:
      printf("=%1$lu # 0x%1$lX\n", v43);
      v43 *= 2;
    }
    while ( *v30 );
    v29 = (_BYTE *)v3[6];
LABEL_56:
    free(v29);
    v38 = v3[4];
    v3[6] = 0;
    v3[4] = v38 & 0xFFFFFFBF;
LABEL_2:
    ++v42;
  }
  while ( v42 < a1[26] );
  if ( (a1[3] & 0x800) != 0 && a1[4] < a1[1] )
  {
    fwrite("set --", 1u, 6u, (FILE *)stdout);
    v22 = a1[4];
    if ( v22 < a1[1] )
    {
      v23 = 4 * v22;
      do
      {
        v24 = *(const char **)(a1[2] + v23);
        if ( strchr(v24, 39) )
        {
          fwrite(" '", 1u, 2u, (FILE *)stdout);
          while ( 1 )
          {
            v26 = *(unsigned __int8 *)v24++;
            v25 = v26;
            if ( !v26 )
              break;
            if ( v25 == 39 )
              fwrite("'\\''", 1u, 4u, (FILE *)stdout);
            else
              fputc(v25, (FILE *)stdout);
          }
          fputc(39, (FILE *)stdout);
        }
        else
        {
          printf(" '%s'", v24);
        }
        ++v22;
        v23 += 4;
      }
      while ( v22 < a1[1] );
    }
    fwrite("\nOPTION_CT=0\n", 1u, 0xDu, (FILE *)stdout);
  }
  return fflush((FILE *)stdout);
}
