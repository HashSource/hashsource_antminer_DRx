void __fastcall sub_4A280(int a1)
{
  char *v2; // r0
  char *v3; // r4
  FILE *v4; // r6
  unsigned __int8 *v5; // r4
  int v6; // t1
  char *v7; // r0
  int v8; // r5
  int v9; // r4
  int v10; // r3
  unsigned __int16 *v11; // r7
  int v12; // r2
  int v13; // r3
  _DWORD *v14; // r9
  int v15; // r3
  _DWORD **v16; // r9
  int v17; // t1
  int v18; // r11
  _DWORD *v19; // r10
  _DWORD *v20; // t1
  _DWORD *v21; // r4
  const char *v22; // r2
  int v23; // r2
  int v24; // r3
  _DWORD *v25; // r9
  const char **v26; // r9
  int v27; // r10
  int v28; // t1
  int v29; // r10
  const char *v30; // t1
  int v31; // r10
  const char *v32; // r12
  int v33; // r10
  void *v34; // r0
  FILE *v35; // r6
  const char *v36; // r7
  int v37; // r5
  char *v38; // r0
  bool v39; // cc
  int v40; // [sp+Ch] [bp-10h]
  int v41; // [sp+10h] [bp-Ch] BYREF
  time_t v42; // [sp+14h] [bp-8h] BYREF

  v41 = 0;
  v2 = sub_44588(a1, &v41);
  v3 = v2;
  if ( v2 )
  {
    v4 = fopen(v2, "w");
    if ( v4 )
    {
      if ( v41 )
        free(v3);
      v5 = *(unsigned __int8 **)(a1 + 56);
      fwrite("#  ", 1u, 3u, v4);
      do
      {
        fputc(*v5, v4);
        v6 = *v5++;
      }
      while ( v6 != 10 );
      v42 = time(0);
      v7 = ctime(&v42);
      fprintf(v4, off_7B9C8[0], v7);
      v8 = *(_DWORD *)(a1 + 104);
      v9 = *(_DWORD *)(a1 + 68) + 64;
      while ( 1 )
      {
        v10 = *(_DWORD *)(v9 - 48);
        v11 = (unsigned __int16 *)(v9 - 64);
        if ( (v10 & 0xF) == 0 )
          goto LABEL_12;
        if ( (v10 & 0x280100) != 0 )
          goto LABEL_12;
        v12 = *(unsigned __int16 *)(v9 - 56);
        if ( v12 != 0x8000 && *(unsigned __int16 *)(v9 - 64) != v12 )
          goto LABEL_12;
        v13 = (unsigned __int16)v10 >> 12;
        if ( (*(_DWORD *)(v9 - 48) & 0x10) != 0 )
          v11 = (unsigned __int16 *)(*(_DWORD *)(a1 + 68) + (*(unsigned __int16 *)(v9 - 60) << 6));
        switch ( v13 )
        {
          case 0:
            if ( (*((_DWORD *)v11 + 4) & 0x20) != 0 )
              v23 = *(_DWORD *)(v9 - 8);
            else
              v23 = *(_DWORD *)(v9 - 12);
            if ( !v23 )
              v23 = *(_DWORD *)(v9 - 12);
            fprintf(v4, "%s\n", v23);
            goto LABEL_12;
          case 1:
            v24 = *((_DWORD *)v11 + 4);
            if ( (v24 & 0x400) == 0 )
              goto LABEL_18;
            v25 = (_DWORD *)*((_DWORD *)v11 + 7);
            v28 = *v25;
            v26 = (const char **)(v25 + 2);
            v27 = v28;
            if ( v28 > 1 )
            {
              v29 = v27 - 1;
              *((_DWORD *)v11 + 4) = v24 & 0xFFFFFFDF;
              do
              {
LABEL_39:
                --v29;
                v30 = *v26++;
                sub_425B4(v4, (int)v11, v30);
              }
              while ( v29 != -1 );
              goto LABEL_12;
            }
            v39 = v27 <= 0;
            v29 = v27 - 1;
            if ( !v39 )
              goto LABEL_39;
LABEL_12:
            --v8;
            v9 += 64;
            if ( v8 <= 0 )
            {
              fclose(v4);
              return;
            }
            break;
          case 2:
            v31 = *((_DWORD *)v11 + 6);
            (*((void (__fastcall **)(int, unsigned __int16 *))v11 + 10))(3, v11);
            sub_425B4(v4, (int)v11, *((const char **)v11 + 6));
            *((_DWORD *)v11 + 6) = v31;
            goto LABEL_12;
          case 3:
            v32 = "false";
            if ( *((_DWORD *)v11 + 6) )
              v32 = "true";
            sub_425B4(v4, (int)v11, v32);
            goto LABEL_12;
          case 4:
            v33 = *((_DWORD *)v11 + 6);
            (*((void (__fastcall **)(int, unsigned __int16 *))v11 + 10))(3, v11);
            sub_425B4(v4, (int)v11, *((const char **)v11 + 6));
            v34 = (void *)*((_DWORD *)v11 + 6);
            if ( v34 )
            {
              free(v34);
              *((_DWORD *)v11 + 4) &= ~0x40u;
            }
            *((_DWORD *)v11 + 6) = v33;
            goto LABEL_12;
          case 5:
LABEL_18:
            sub_425B4(v4, (int)v11, *((const char **)v11 + 6));
            goto LABEL_12;
          case 6:
            v14 = (_DWORD *)*((_DWORD *)v11 + 7);
            if ( v14 )
            {
              v17 = *v14;
              v16 = (_DWORD **)(v14 + 2);
              v15 = v17;
              if ( v17 > 0 )
              {
                v18 = v15;
                v40 = v9;
                do
                {
                  v20 = *v16++;
                  v19 = v20;
                  v21 = (_DWORD *)sub_46F84(v20, 0);
                  if ( v21 )
                  {
                    fprintf(v4, "<%s type=nested>\n", *((const char **)v11 + 13));
                    do
                    {
                      sub_43530(v4, 1, (int)v11, v21);
                      v21 = (_DWORD *)sub_470F4(v19, (int)v21);
                    }
                    while ( v21 );
                    fprintf(v4, "</%s>\n", *((const char **)v11 + 13));
                  }
                  --v18;
                }
                while ( v18 );
                v9 = v40;
              }
            }
            goto LABEL_12;
          case 7:
            v22 = (const char *)*((_DWORD *)v11 + 7);
            if ( v22
              || *(_DWORD *)a1 > (int)&loc_1FFFC + 3
              && (v22 = (const char *)*((_DWORD *)v11 + 6), *(const char **)(*(_DWORD *)(a1 + 116) + 4 * *v11) != v22) )
            {
              sub_425B4(v4, (int)v11, v22);
            }
            goto LABEL_12;
          default:
            goto LABEL_12;
        }
      }
    }
    fprintf((FILE *)stderr, "%s WARNING:  cannot save options - ", *(const char **)(a1 + 28));
    v35 = (FILE *)stderr;
    v36 = off_7B95C[0];
    v37 = *_errno_location();
    v38 = strerror(v37);
    fprintf(v35, v36, v37, v38, v3);
    if ( v41 )
      free(v3);
  }
}
