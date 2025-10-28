int __fastcall sub_454C8(int a1, int a2, int a3)
{
  int v3; // r6
  int v5; // r11
  int v6; // r4
  _DWORD *v7; // r6
  int v8; // r5
  unsigned int v9; // r2
  int v10; // r3
  int v11; // r3
  int v12; // r0
  int v13; // r3
  int *v14; // r9
  int v15; // r3
  int v16; // t1
  int *v17; // r9
  int v18; // r3
  int v19; // t1
  int v20; // r3
  int v21; // r2
  int v22; // r3
  int v23; // r3
  int v24; // r2
  int v25; // r3
  char *v26; // r9
  int result; // r0
  _BOOL4 v28; // r3
  void (__fastcall *v29)(int, int); // r2
  int v31; // [sp+18h] [bp-5Ch]
  char s[84]; // [sp+20h] [bp-54h] BYREF

  v3 = *(_DWORD *)(a1 + 68);
  v31 = 0;
  v5 = v3 + 64;
  v6 = *(_DWORD *)(a1 + 100);
  v7 = (_DWORD *)(v3 - 48);
  v8 = 0;
  do
  {
    v9 = *(_DWORD *)(v5 - 48);
    if ( (v9 & 0x6080000) != 0 )
    {
      if ( (_UNKNOWN *)v9 == &unk_80100 && *(_DWORD *)(v5 - 12) && !a2 )
      {
        v26 = *(char **)(v5 - 20);
        if ( !v26 )
          v26 = off_7B8C0[0];
        sub_453F4(a1, v5 - 64);
        fprintf((FILE *)dword_C9A98, off_7B8BC[0], *(_DWORD *)(v5 - 12), v26);
      }
    }
    else
    {
      if ( (v9 & 0x200000) != 0 )
      {
        if ( !a2 )
        {
          ++v31;
          fprintf((FILE *)dword_C9A98, (const char *)dword_C9A84, *(_DWORD *)(v5 - 20), a3);
        }
        goto LABEL_3;
      }
      if ( *(_DWORD *)(a1 + 104) == v8 )
      {
        v28 = v31 > 0;
        if ( a2 )
          v28 = 0;
        if ( v28 && (*v7 & 0x200000) == 0 )
          fprintf((FILE *)dword_C9A98, (const char *)dword_C9A84, off_7B894[0], a3);
      }
      sub_453F4(a1, v5 - 64);
      v10 = *(_DWORD *)(v5 - 48);
      if ( (v10 & 0x10000) != 0 )
      {
        v11 = dword_C9A7C;
      }
      else
      {
        switch ( (unsigned __int16)v10 >> 12 )
        {
          case 0:
            v11 = dword_C9A80;
            break;
          case 1:
            v11 = dword_C9A5C;
            break;
          case 2:
            v11 = dword_C9A6C;
            break;
          case 3:
            v11 = dword_C9A74;
            break;
          case 4:
            v11 = dword_C9A70;
            break;
          case 5:
            v11 = dword_C9A64;
            break;
          case 6:
            v11 = dword_C9A78;
            break;
          case 7:
            v11 = dword_C9A68;
            break;
          case 8:
            v11 = dword_C9A94;
            break;
          default:
            fprintf((FILE *)stderr, off_7B934[0], *(_DWORD *)(v5 - 12));
            exit(70);
            return result;
        }
      }
      if ( *(_WORD *)(v5 - 54) )
        v12 = dword_C9A60;
      else
        v12 = dword_C9A7C;
      snprintf(s, 0x50u, (const char *)dword_C9A90, v11, *(_DWORD *)(v5 - 12), v12);
      fprintf((FILE *)dword_C9A98, byte_C9AA8, s, *(_DWORD *)(v5 - 20));
      v13 = (unsigned __int16)*(_DWORD *)(v5 - 48) >> 12;
      if ( v13 == 2 || v13 == 4 )
      {
        if ( *(_DWORD *)(v5 - 24) )
          v25 = 1;
        else
          v25 = dword_C9AB8;
        dword_C9AB8 = v25;
      }
      if ( !a2 )
      {
        if ( !*(_DWORD *)(v5 - 32) && !*(_DWORD *)(v5 - 28) )
          goto LABEL_26;
        fputs(off_7BA54[0], (FILE *)dword_C9A98);
        if ( *(_DWORD *)(v5 - 32) )
        {
          v14 = *(int **)(v5 - 32);
          fputs(off_7BA08[0], (FILE *)dword_C9A98);
          v15 = *v14;
          do
          {
            fprintf((FILE *)dword_C9A98, off_7BA5C[0], *(_DWORD *)(*(_DWORD *)(a1 + 68) + (v15 << 6) + 52));
            v16 = v14[1];
            ++v14;
            v15 = v16;
          }
          while ( v16 != 0x8000 );
          if ( !*(_DWORD *)(v5 - 28) )
          {
LABEL_26:
            if ( *(_DWORD *)(v5 - 8) )
              fprintf((FILE *)dword_C9A98, off_7B8B4[0]);
            v20 = *(_DWORD *)(v5 - 48);
            v21 = (unsigned __int16)v20 >> 12;
            if ( v21 == 5 )
            {
              v29 = *(void (__fastcall **)(int, int))(v5 - 24);
              if ( v29 && v29 != sub_43D78 )
              {
                v29(1, v5 - 64);
                v20 = *(_DWORD *)(v5 - 48);
              }
            }
            else if ( v21 == 7 )
            {
              (*(void (__fastcall **)(int, int))(v5 - 24))(1, v5 - 64);
              v20 = *(_DWORD *)(v5 - 48);
            }
            if ( (v20 & 0x800) != 0 )
              fputs(off_7B8C4[0], (FILE *)dword_C9A98);
            v22 = *(unsigned __int16 *)(v5 - 56);
            if ( v22 == 0x8000 || *(unsigned __int16 *)(v5 - 60) == v22 )
            {
              v23 = *(_DWORD *)(v5 - 48);
              if ( (v23 & 0x100) != 0
                && (*(_DWORD *)(a1 + 52) || *(_DWORD *)(a1 + 32))
                && *(unsigned __int16 *)(v5 - 64) < *(int *)(a1 + 104) )
              {
                fputs(off_7B96C[0], (FILE *)dword_C9A98);
                v23 = *(_DWORD *)(v5 - 48);
              }
              if ( (unsigned __int16)v23 >> 12 == 4 )
              {
                fputs(off_7B93C[0], (FILE *)dword_C9A98);
              }
              else if ( *(unsigned __int16 *)(v5 - 54) > 1u )
              {
                fprintf((FILE *)dword_C9A98, off_7B948[0]);
              }
              else
              {
                v24 = *(unsigned __int16 *)(v5 - 52);
                if ( v24 != 1 )
                {
                  if ( *(_WORD *)(v5 - 52) )
                  {
                    if ( v24 == 0xFFFF )
                      fputs(off_7B968[0], (FILE *)dword_C9A98);
                    else
                      fprintf((FILE *)dword_C9A98, off_7BA68[0]);
                  }
                  else
                  {
                    fputs(off_7B9C4[0], (FILE *)dword_C9A98);
                  }
                }
              }
              if ( (*(_DWORD *)(a1 + 12) & 3) == 0 && *(unsigned __int16 *)(a1 + 98) == *(unsigned __int16 *)(v5 - 64) )
                fputs(off_7B8B0[0], (FILE *)dword_C9A98);
            }
            else
            {
              fprintf((FILE *)dword_C9A98, off_7B880[0], *(_DWORD *)(*(_DWORD *)(a1 + 68) + (v22 << 6) + 52));
            }
            goto LABEL_3;
          }
          fputs(off_7BA58[0], (FILE *)dword_C9A98);
        }
        if ( *(_DWORD *)(v5 - 28) )
        {
          v17 = *(int **)(v5 - 28);
          fputs(off_7B9D0[0], (FILE *)dword_C9A98);
          v18 = *v17;
          do
          {
            fprintf((FILE *)dword_C9A98, off_7BA5C[0], *(_DWORD *)(*(_DWORD *)(a1 + 68) + (v18 << 6) + 52));
            v19 = v17[1];
            ++v17;
            v18 = v19;
          }
          while ( v19 != 0x8000 );
        }
        goto LABEL_26;
      }
    }
LABEL_3:
    --v6;
    ++v8;
    v5 += 64;
    v7 += 16;
  }
  while ( v6 > 0 );
  return fputc(10, (FILE *)dword_C9A98);
}
