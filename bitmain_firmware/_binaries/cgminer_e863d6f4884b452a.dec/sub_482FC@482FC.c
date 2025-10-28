void __fastcall sub_482FC(char *a1)
{
  char *v1; // r4
  char *v2; // r3
  __int64 v3; // kr00_8
  unsigned int v4; // r5
  int v5; // r0
  int v6; // r3
  bool v7; // zf
  int v8; // r3

  if ( !a1 )
    return;
  v1 = a1;
  v2 = *(char **)a1;
  if ( !*(_DWORD *)a1 )
  {
    sub_465A8((int)(a1 + 8));
    a1 = v1;
    goto LABEL_8;
  }
  if ( v2 == (char *)1 )
  {
    v3 = *(_QWORD *)(a1 + 12);
    if ( (_DWORD)v3 )
    {
      v4 = 0;
      do
      {
        v5 = *(_DWORD *)(HIDWORD(v3) + 4 * v4++);
        if ( v5 )
        {
          v6 = *(_DWORD *)(v5 + 4);
          v7 = v6 == -1;
          v8 = v6 - 1;
          if ( !v7 )
          {
            *(_DWORD *)(v5 + 4) = v8;
            if ( !v8 )
            {
              sub_482FC(v5);
              v3 = *(_QWORD *)(v1 + 12);
            }
          }
        }
      }
      while ( v4 < (unsigned int)v3 );
    }
    sub_47860((void *)HIDWORD(v3));
    sub_47860(v1);
    return;
  }
  if ( v2 == (char *)2 )
  {
    sub_47860(*((void **)a1 + 2));
    sub_47860(v1);
    return;
  }
  if ( (unsigned int)(v2 - 3) <= 1 )
LABEL_8:
    sub_47860(a1);
}
