int __fastcall sub_429C8(int a1, void ***a2)
{
  void **v3; // r4
  unsigned int v5; // r3
  void (__fastcall *v6)(int, void **); // r8
  void **v7; // r2
  int v9; // r5
  bool v10; // zf
  int v11; // r3
  void **v12; // r5
  int v13; // r0
  unsigned __int16 v14; // r3
  void **v15; // r1
  int v16; // r1
  unsigned int v17; // r3
  unsigned int v18; // r2
  unsigned int v19; // r3
  char *v20; // r7
  int v21; // r1
  unsigned __int16 v22; // r2

  v3 = *a2;
  v5 = (unsigned int)(*a2)[4];
  v6 = (void (__fastcall *)(int, void **))(*a2)[10];
  if ( (v5 & 0x40) != 0 )
  {
    free(v3[6]);
    v5 = (unsigned int)v3[4];
  }
  v7 = a2[1];
  v3[6] = v7;
  if ( (*(_DWORD *)(a1 + 12) & 0x80000) != 0 && (v5 & 0x100) != 0 )
    return 1;
  v9 = *((unsigned __int16 *)v3 + 4);
  if ( v9 == 0x8000 )
  {
    v12 = v3;
    v22 = *(_WORD *)v3;
    v16 = (int)a2[2];
    *((_WORD *)v3 + 3) = *((_WORD *)v3 + 1);
    *((_WORD *)v3 + 2) = v22;
    goto LABEL_12;
  }
  v10 = (v5 & 4) == 0;
  v11 = *(_DWORD *)(a1 + 68);
  v12 = (void **)(v11 + (v9 << 6));
  if ( !v10 )
  {
    v21 = *((unsigned __int16 *)v12 + 2);
    if ( *(unsigned __int16 *)v3 != v21 )
    {
      fprintf((FILE *)stderr, off_7B944[0], v12[13], v3[13], *(_DWORD *)(v11 + (v21 << 6) + 52));
      return -1;
    }
    goto LABEL_22;
  }
  v13 = *(unsigned __int16 *)v3;
  *((_WORD *)v12 + 2) = 0x8000;
  if ( v13 == 0x8000 )
  {
LABEL_22:
    v16 = (int)a2[2];
    goto LABEL_11;
  }
  v14 = *((_WORD *)v3 + 1);
  v15 = a2[2];
  *((_WORD *)v12 + 2) = v13;
  *((_WORD *)v12 + 3) = v14;
  v16 = (unsigned int)v15 | 0x10;
  a2[2] = (void **)v16;
LABEL_11:
  v5 = (unsigned int)v12[4];
  v12[6] = v7;
LABEL_12:
  v17 = v16 & 0x7F | v5 & 0xFFFFFF80;
  v12[4] = (void *)v17;
  if ( (v17 & 4) != 0
    && (v18 = *((unsigned __int16 *)v12 + 6),
        v19 = (unsigned __int16)(*((_WORD *)v12 + 7) + 1),
        *((_WORD *)v12 + 7) = v19,
        v18 < v19) )
  {
    if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    {
      if ( *((unsigned __int16 *)v12 + 4) == 0x8000 )
        v20 = (char *)&unk_69C54;
      else
        v20 = off_7B8C8[0];
      fputs(off_7B8CC[0], (FILE *)stderr);
      if ( *((unsigned __int16 *)v12 + 6) <= 1u )
        fprintf((FILE *)stderr, off_7B9B0[0], v12[13], v20);
      else
        fprintf((FILE *)stderr, off_7B890[0]);
      return -1;
    }
    else
    {
      return -1;
    }
  }
  else
  {
    if ( v6 )
      v6(a1, v12);
    return 0;
  }
}
