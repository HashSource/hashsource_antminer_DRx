int __fastcall sub_4BD84(size_t a1, int a2, char **a3)
{
  int v6; // r3
  int v7; // r2
  size_t v8; // r0
  int v9; // r3
  int v10; // r5
  int v11; // r1
  size_t v12; // r0
  unsigned int v13; // r3
  void (__fastcall *v14)(size_t); // r2
  int v15; // r5
  int v16; // r3
  int v18; // r10
  int v19; // r6
  int v20; // r5
  int *v21; // r11
  int *v22; // r9
  int v23; // r3
  int v24; // t1
  int v25; // r3
  int v26; // t1
  int v27; // r3
  int v28; // t1
  int v29; // r3
  int v30; // t1
  int v31; // r3
  int v32; // r3
  unsigned int v33; // r3
  int v34; // r2
  void *v35; // r8
  _DWORD *v36; // r7
  unsigned int v37; // r0
  int v38; // r10
  int v39; // r6
  unsigned int v40; // r3
  _BYTE *v41; // r5
  int v42; // r9
  int v43; // r1
  int v44; // r3
  int v45; // r0
  int v46; // r12
  unsigned int v47; // r2
  int v48; // r1
  int v49; // r1
  int v50; // r1
  char *v51; // r12
  int v52; // r5
  _BYTE *v53; // r2
  int v54; // r2
  int v55; // r1
  _BYTE *v56; // r5
  int v57; // t1
  _BYTE *v58; // r3
  unsigned int v59; // r3
  int v60; // [sp+0h] [bp-14h] BYREF
  int v61; // [sp+4h] [bp-10h]
  int v62; // [sp+8h] [bp-Ch]
  int v63; // [sp+Ch] [bp-8h]

  if ( sub_433D8((int *)a1, *a3) )
    exit(70);
  v6 = *(_DWORD *)(a1 + 12);
  if ( (v6 & 0x40) != 0 )
  {
    if ( !*(_DWORD *)(a1 + 16) )
    {
      *(_DWORD *)(a1 + 20) = 0;
      *(_DWORD *)(a1 + 16) = 1;
    }
    v15 = sub_432E0(a1);
    if ( !v15 )
      goto LABEL_20;
    return *(_DWORD *)(a1 + 4);
  }
  v7 = *(_DWORD *)a1;
  *(_DWORD *)(a1 + 12) = v6 | 0x40;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = a3;
  if ( v7 >= 139264 )
    off_7BB78 = *(char **)(a1 + 124);
  v8 = sub_45328(a1);
  if ( v8 )
    return 0;
  v9 = *(unsigned __int16 *)(a1 + 94);
  v10 = v9 & 0x7FFF;
  if ( (v9 & 0x7FFF) != 0 && (v10 = *(_DWORD *)(a1 + 68) + ((v9 + 1) << 6), (*(_DWORD *)(v10 + 16) & 0x20) != 0) )
  {
    v13 = *(_DWORD *)(a1 + 12);
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 52);
    v12 = a1;
    *(_DWORD *)(a1 + 12) |= 0x80000u;
    if ( v11 )
    {
      sub_4BBA4(a1, 1);
      if ( v10 && (*(_DWORD *)(v10 + 16) & 0x20) == 0 )
        sub_4B664(a1);
      v12 = a1;
      v11 = 2;
    }
    v8 = sub_4BBA4(v12, v11);
    v13 = *(_DWORD *)(a1 + 12) & 0xFFF7FFFF;
    *(_DWORD *)(a1 + 12) = v13;
  }
  if ( (v13 & 0x2000) != 0 )
  {
    v14 = *(void (__fastcall **)(size_t))(a1 + 88);
    if ( v14 )
    {
      if ( (v13 & 0x30000) == 0x10000 )
      {
        *(_DWORD *)(a1 + 12) = v13 & 0xFFFEFFFF;
        v14(v8);
        v13 = *(_DWORD *)(a1 + 12);
      }
    }
  }
  if ( (v13 & 0x800) == 0 )
    goto LABEL_19;
  v60 = 0;
  v61 = 0;
  v63 = 0;
  v62 = 4;
  if ( getenv("POSIXLY_CORRECT") || (*(_DWORD *)(a1 + 12) & 3) == 0 )
    goto LABEL_19;
  v35 = sub_44484(4 * *(_DWORD *)(a1 + 4));
  if ( !v35 )
  {
LABEL_94:
    *_errno_location() = 12;
    goto LABEL_19;
  }
  v36 = sub_44484(4 * *(_DWORD *)(a1 + 4));
  if ( !v36 )
  {
    free(v35);
    goto LABEL_94;
  }
  v37 = *(_DWORD *)(a1 + 4);
  v38 = 0;
  v39 = 0;
  v40 = 1;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  while ( v37 > v40 )
  {
    while ( 1 )
    {
      v41 = *(_BYTE **)(*(_DWORD *)(a1 + 8) + 4 * v40);
      if ( *v41 == 45 )
      {
        v43 = (unsigned __int8)v41[1];
        if ( v41[1] )
          break;
      }
      ++v40;
      v36[v39++] = v41;
      *(_DWORD *)(a1 + 16) = v40;
      if ( v37 <= v40 )
        goto LABEL_65;
    }
    if ( v43 == 45 )
    {
      if ( !v41[2] )
      {
        *((_DWORD *)v35 + v38) = v41;
        v42 = v38 + 1;
        *(_DWORD *)(a1 + 16) = v40 + 1;
        if ( v40 + 1 < v37 )
        {
          v50 = 4 * (v40 + 1);
          v51 = (char *)&v36[v39 - 1];
          do
          {
            v52 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + v50);
            v50 += 4;
            *((_DWORD *)v51 + 1) = v52;
            v51 += 4;
          }
          while ( v50 != 4 * v37 );
          v39 += 1 + v37 - 2 - v40;
          *(_DWORD *)(a1 + 16) = v37;
        }
        goto LABEL_99;
      }
      v45 = sub_42BB4(a1, v41 + 2, &v60);
    }
    else
    {
      v44 = *(_DWORD *)(a1 + 12);
      if ( (v44 & 2) != 0 )
        v45 = sub_41F8C(a1, v43, &v60, v44);
      else
        v45 = sub_42BB4(a1, v41 + 1, &v60);
    }
    if ( v45 < 0 )
      goto LABEL_115;
    v42 = v38 + 1;
    v46 = *(_DWORD *)(a1 + 16);
    v47 = v46 + 1;
    v40 = v46 + 1;
    *((_DWORD *)v35 + v38) = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v46);
    v48 = v60;
    *(_DWORD *)(a1 + 16) = v46 + 1;
    v49 = *(_DWORD *)(v48 + 16);
    if ( (v49 & 0xF000) != 0 )
    {
      if ( (v49 & 0x10000) != 0 )
      {
        if ( v63 == 1 )
        {
          if ( v41[2] )
            goto LABEL_80;
        }
        else
        {
          if ( v63 != 2 )
            goto LABEL_87;
          if ( v61 )
          {
LABEL_80:
            v37 = *(_DWORD *)(a1 + 4);
            goto LABEL_81;
          }
        }
        v37 = *(_DWORD *)(a1 + 4);
        if ( v40 >= v37 )
        {
          *_errno_location() = 0;
          goto LABEL_99;
        }
        v53 = *(_BYTE **)(*(_DWORD *)(a1 + 8) + 4 * v40);
        if ( *v53 != 45 )
        {
          *((_DWORD *)v35 + v42) = v53;
          v40 = v46 + 2;
          v42 = v38 + 2;
          *(_DWORD *)(a1 + 16) = v46 + 2;
        }
LABEL_81:
        v38 = v42;
      }
      else if ( v63 == 1 )
      {
        if ( v41[2] )
          goto LABEL_92;
LABEL_108:
        v37 = *(_DWORD *)(a1 + 4);
        if ( v40 >= v37 )
        {
LABEL_87:
          *_errno_location() = 5;
          goto LABEL_68;
        }
        v38 += 2;
        v54 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v40);
        v40 = v46 + 2;
        *((_DWORD *)v35 + v42) = v54;
        *(_DWORD *)(a1 + 16) = v46 + 2;
      }
      else
      {
        if ( v63 != 2 )
          goto LABEL_87;
        if ( !v61 )
          goto LABEL_108;
LABEL_92:
        ++v38;
        v37 = *(_DWORD *)(a1 + 4);
      }
    }
    else
    {
      if ( v63 != 1 )
        goto LABEL_80;
      v55 = (unsigned __int8)v41[2];
      v56 = v41 + 2;
      if ( !v55 )
        goto LABEL_124;
      while ( 1 )
      {
        if ( sub_41F8C(a1, v55, &v60, v40) < 0 )
          goto LABEL_115;
        v40 = *(_DWORD *)(v60 + 16);
        if ( (v40 & 0xF000) != 0 )
          break;
        v57 = (unsigned __int8)*++v56;
        v55 = v57;
        if ( !v57 )
          goto LABEL_118;
      }
      if ( (v40 & 0x10000) != 0 )
      {
        if ( v56[1] )
          goto LABEL_118;
        v47 = *(_DWORD *)(a1 + 16);
        v58 = *(_BYTE **)(*(_DWORD *)(a1 + 8) + 4 * v47);
        if ( *v58 != 45 )
        {
          *((_DWORD *)v35 + v42) = v58;
          ++v47;
          v37 = *(_DWORD *)(a1 + 4);
          v42 = v38 + 2;
          *(_DWORD *)(a1 + 16) = v47;
          goto LABEL_119;
        }
LABEL_124:
        v37 = *(_DWORD *)(a1 + 4);
        goto LABEL_119;
      }
      if ( v56[1] )
      {
LABEL_118:
        v37 = *(_DWORD *)(a1 + 4);
        v47 = *(_DWORD *)(a1 + 16);
        goto LABEL_119;
      }
      v59 = *(_DWORD *)(a1 + 16);
      v37 = *(_DWORD *)(a1 + 4);
      if ( v59 >= v37 )
      {
LABEL_115:
        *_errno_location() = 22;
        goto LABEL_68;
      }
      v47 = v59 + 1;
      *((_DWORD *)v35 + v42) = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v59);
      v42 = v38 + 2;
      *(_DWORD *)(a1 + 16) = v59 + 1;
LABEL_119:
      v40 = v47;
      v38 = v42;
    }
  }
LABEL_65:
  v42 = v38;
  *_errno_location() = 0;
  if ( !v38 )
    goto LABEL_66;
LABEL_99:
  memcpy((void *)(*(_DWORD *)(a1 + 8) + 4), v35, 4 * v42);
LABEL_66:
  if ( v39 )
    memcpy((void *)(*(_DWORD *)(a1 + 8) + 4 * (v42 + 1)), v36, 4 * v39);
LABEL_68:
  free(v35);
  free(v36);
LABEL_19:
  *(_DWORD *)(a1 + 16) = 1;
  *(_DWORD *)(a1 + 20) = 0;
  v15 = sub_432E0(a1);
  if ( !v15 )
  {
LABEL_20:
    v16 = *(unsigned __int16 *)(a1 + 94);
    if ( (v16 & 0x7FFF) != 0 && (*(_DWORD *)(*(_DWORD *)(a1 + 68) + (v16 << 6) + 16) & 5) != 0 )
    {
      sub_4A280(a1);
      exit(v15);
    }
    if ( (*(_DWORD *)(a1 + 12) & 4) == 0 )
      return *(_DWORD *)(a1 + 16);
    v18 = 0;
    v19 = *(_DWORD *)(a1 + 104);
    v20 = *(_DWORD *)(a1 + 68) + 64;
    do
    {
      v21 = *(int **)(v20 - 32);
      v22 = *(int **)(v20 - 28);
      if ( (*(_DWORD *)(v20 - 48) & 5) != 0 )
      {
        if ( v21 )
        {
          v23 = *v21;
          do
          {
            while ( 1 )
            {
              v25 = *(_DWORD *)(a1 + 68) + (v23 << 6);
              if ( (*(_DWORD *)(v25 + 16) & 0xF) == 0 )
                break;
              v24 = v21[1];
              ++v21;
              v23 = v24;
              if ( v24 == 0x8000 )
                goto LABEL_36;
            }
            ++v18;
            fprintf((FILE *)stderr, off_7BA00[0], *(_DWORD *)(v20 - 12), *(_DWORD *)(v25 + 52));
            v26 = v21[1];
            ++v21;
            v23 = v26;
          }
          while ( v26 != 0x8000 );
        }
LABEL_36:
        if ( v22 )
        {
          v27 = *v22;
          do
          {
            while ( 1 )
            {
              v29 = *(_DWORD *)(a1 + 68) + (v27 << 6);
              if ( (*(_DWORD *)(v29 + 16) & 5) != 0 )
                break;
              v28 = v22[1];
              ++v22;
              v27 = v28;
              if ( v28 == 0x8000 )
                goto LABEL_41;
            }
            ++v18;
            fprintf((FILE *)stderr, off_7B8A0[0], *(_DWORD *)(v20 - 12), *(_DWORD *)(v29 + 52));
            v30 = v22[1];
            ++v22;
            v27 = v30;
          }
          while ( v30 != 0x8000 );
        }
      }
LABEL_41:
      v31 = *(unsigned __int16 *)(v20 - 56);
      if ( v31 == 0x8000 || *(unsigned __int16 *)(v20 - 64) == v31 )
      {
        v33 = *(unsigned __int16 *)(v20 - 54);
        if ( *(unsigned __int16 *)(v20 - 50) < v33 )
        {
          v34 = *(_DWORD *)(v20 - 48);
          if ( (v34 & 0x100000) == 0 || (v34 & 3) == 0 )
          {
            ++v18;
            if ( v33 <= 1 )
              fprintf((FILE *)stderr, off_7B94C[0], *(_DWORD *)(v20 - 12));
            else
              fprintf((FILE *)stderr, off_7B990[0], *(_DWORD *)(v20 - 12));
          }
        }
      }
      --v19;
      v20 += 64;
    }
    while ( v19 > 0 );
    v32 = *(_DWORD *)(a1 + 12);
    if ( (v32 & 4) != 0 )
    {
      if ( (v32 & 0x200) != 0 )
      {
        if ( *(_DWORD *)(a1 + 4) > *(_DWORD *)(a1 + 16) )
        {
          fprintf((FILE *)stderr, off_7B958[0], *(_DWORD *)(a1 + 28));
          goto LABEL_49;
        }
      }
      else if ( (v32 & 0x400) != 0 && *(_DWORD *)(a1 + 4) <= *(_DWORD *)(a1 + 16) )
      {
        fprintf((FILE *)stderr, off_7B88C[0], *(_DWORD *)(a1 + 28));
        goto LABEL_49;
      }
    }
    if ( !v18 )
      return *(_DWORD *)(a1 + 16);
LABEL_49:
    (*(void (__fastcall **)(size_t, int))(a1 + 84))(a1, 1);
    return *(_DWORD *)(a1 + 16);
  }
  return *(_DWORD *)(a1 + 4);
}
