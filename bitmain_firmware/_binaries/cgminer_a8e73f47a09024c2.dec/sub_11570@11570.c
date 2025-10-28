_BYTE *__fastcall sub_11570(_BYTE *result, char *a2, int a3)
{
  int v3; // r6
  char *v4; // r7
  char *v5; // r8
  unsigned __int64 v6; // r2
  int v7; // r3
  char v8; // t1

  v3 = (int)result;
  if ( a3 )
  {
    v4 = a2;
    v5 = &a2[a3];
    do
    {
      if ( *(_DWORD *)(v3 + 208) == 128 )
      {
        v6 = *(_QWORD *)(v3 + 192) + 128LL;
        *(_QWORD *)(v3 + 192) = v6;
        if ( v6 <= 0x7F )
          ++*(_QWORD *)(v3 + 200);
        result = sub_B570(v3, 0);
        *(_DWORD *)(v3 + 208) = 0;
      }
      v7 = *(_DWORD *)(v3 + 208);
      v8 = *v4++;
      *(_BYTE *)(v3 + v7) = v8;
      *(_DWORD *)(v3 + 208) = v7 + 1;
    }
    while ( v4 != v5 );
  }
  return result;
}
