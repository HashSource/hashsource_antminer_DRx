unsigned __int16 *__fastcall sub_2A388(unsigned __int16 *a1, int a2, int a3, int a4)
{
  unsigned int v5; // r5
  unsigned __int16 **sa_family; // lr
  char *v7; // r12
  unsigned __int16 *v9; // r6
  unsigned __int16 *v10; // r2
  int v11; // r7
  int *v12; // r3
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int *v17; // r3
  int v18; // r10
  bool v19; // zf
  __int16 v20; // r3
  int v21; // r0
  int v22; // r12
  struct sockaddr v24; // [sp+Ch] [bp-20h] BYREF
  int v25; // [sp+1Ch] [bp-10h]
  int v26; // [sp+20h] [bp-Ch]
  int v27; // [sp+24h] [bp-8h]

  v5 = *(unsigned __int16 *)(a3 + 4);
  sa_family = (unsigned __int16 **)*a1;
  v7 = 0;
  v9 = a1;
  v10 = (unsigned __int16 *)(v5 << 8);
  v11 = a2;
  memset(&v24.sa_data[2], 0, 12);
  v24.sa_family = (unsigned __int16)sa_family;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  *(_WORD *)v24.sa_data = 31488;
  if ( (((unsigned __int16)((_WORD)v5 << 8) | (unsigned __int16)(v5 >> 8)) & 0xFFFu) > 1 )
  {
    sub_4FE78(3, "do_setclr_trap: err_nitems > 1");
    return sub_286DC(v9, v11, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  }
  else
  {
    v12 = *(int **)(a3 + 8);
    if ( v12 )
    {
      if ( sa_family == (unsigned __int16 **)2 )
      {
        *(_DWORD *)&v24.sa_data[2] = *(_DWORD *)(a3 + 8);
      }
      else
      {
        v12 = (int *)(a3 + 24);
        v7 = &v24.sa_data[6];
      }
      if ( sa_family != (unsigned __int16 **)2 )
      {
        v13 = *v12;
        v14 = v12[1];
        v15 = v12[2];
        v16 = v12[3];
        *(_DWORD *)v7 = v13;
        *((_DWORD *)v7 + 1) = v14;
        *((_DWORD *)v7 + 2) = v15;
        *((_DWORD *)v7 + 3) = v16;
      }
      a1 = (unsigned __int16 *)sub_15BD4(&v24);
      v18 = (int)a1;
      if ( !a1 )
        return sub_286DC(v9, v11, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
      sa_family = (unsigned __int16 **)v24.sa_family;
    }
    else
    {
      v17 = &dword_CA608;
      v18 = dword_CA608;
    }
    v19 = sa_family == (unsigned __int16 **)2;
    if ( sa_family == (unsigned __int16 **)2 )
    {
      v17 = *(int **)(a3 + 12);
    }
    else
    {
      sa_family = (unsigned __int16 **)(a3 + 40);
      v7 = &v24.sa_data[6];
    }
    if ( v19 )
    {
      *(_DWORD *)&v24.sa_data[2] = v17;
    }
    else
    {
      a1 = *sa_family;
      a2 = (int)sa_family[1];
      v10 = sa_family[2];
      v17 = (int *)sa_family[3];
    }
    if ( !v19 )
    {
      *(_DWORD *)v7 = a1;
      *((_DWORD *)v7 + 1) = a2;
      *((_DWORD *)v7 + 2) = v10;
      *((_DWORD *)v7 + 3) = v17;
    }
    v20 = *(_WORD *)(a3 + 16);
    if ( !v20 )
      v20 = 3912;
    *(_WORD *)v24.sa_data = v20;
    if ( a4 )
      v21 = sub_1C824((int)&v24, v18, 0, (*(_BYTE *)a3 >> 3) & 7);
    else
      v21 = sub_1CA7C(&v24.sa_family, v18, 0);
    if ( v21 )
      v22 = 0;
    else
      v22 = 4;
    return sub_286DC(v9, v11, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), v22);
  }
}
