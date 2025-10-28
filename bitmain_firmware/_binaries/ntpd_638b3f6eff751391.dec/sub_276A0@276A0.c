size_t __fastcall sub_276A0(size_t result)
{
  int v1; // r4
  int v2; // r5
  int v3; // r3
  int v4; // r2
  int v5; // r3
  int v6; // r1
  __int64 v7; // r2
  int v8; // r0
  int v9; // r1
  int v10; // r5
  const char *v11; // r0

  v1 = result;
  if ( dword_7CF4C )
  {
    v10 = dword_CB548;
    v11 = (const char *)sub_50CD0(result + 12);
    result = printf("refclock_receive: at %lu %s\n", v10, v11);
  }
  v2 = *(_DWORD *)(v1 + 60);
  v3 = *(unsigned __int8 *)(v2 + 32);
  *(_BYTE *)(v1 + 67) = v3;
  if ( v3 != 3 )
  {
    v4 = *(unsigned __int8 *)(v1 + 106);
    v5 = dword_CB548;
    ++*(_DWORD *)(v1 + 548);
    *(_DWORD *)(v1 + 536) = v5;
    if ( !v4 )
    {
      sub_1D3D8(132, v1, 0);
      LOBYTE(v4) = *(_BYTE *)(v1 + 106);
      *(_DWORD *)(v1 + 540) = dword_CB548;
    }
    *(_BYTE *)(v1 + 106) = v4 | 1;
    v6 = *(_DWORD *)(v2 + 212);
    v7 = *(_QWORD *)(v2 + 232);
    *(_DWORD *)(v1 + 92) = *(_DWORD *)(v2 + 208);
    *(_DWORD *)(v1 + 96) = v6;
    v8 = *(_DWORD *)(v2 + 216);
    v9 = *(_DWORD *)(v2 + 220);
    *(_QWORD *)(v1 + 80) = v7;
    *(_DWORD *)(v1 + 392) = v8;
    *(_DWORD *)(v1 + 396) = v9;
    sub_4CBA8(v1 + 384);
    result = sub_26DC8(v2);
    if ( result )
    {
      result = (size_t)sub_246A0(v1);
      if ( dword_CB508 )
      {
        if ( fabs(dbl_CABD0) < dbl_7A298
          && dword_CB470
          && *(_BYTE *)(dword_CB470 + 64) == 22
          && *(_BYTE *)(v1 + 64) != 22 )
        {
          *(double *)(v2 + 728) = *(double *)(v2 + 728) - *(double *)(v2 + 224) * 0.1;
        }
      }
    }
  }
  return result;
}
