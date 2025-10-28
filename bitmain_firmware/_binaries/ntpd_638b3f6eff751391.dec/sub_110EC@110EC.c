int __fastcall sub_110EC(int *a1)
{
  int *v1; // r3
  int *v3; // r2
  int *v4; // r3
  int result; // r0

  v1 = &dword_CA618;
  v3 = (int *)dword_CA618;
  if ( a1 == (int *)dword_CA618 )
  {
LABEL_9:
    *v1 = *v3;
    *v3 = 0;
    goto LABEL_10;
  }
  if ( dword_CA618 )
  {
    v4 = *(int **)dword_CA618;
    if ( *(_DWORD *)dword_CA618 )
    {
      while ( a1 != v4 )
      {
        v3 = v4;
        if ( v4 )
        {
          v4 = (int *)*v4;
          if ( v4 )
            continue;
        }
        goto LABEL_10;
      }
      v1 = v3;
      v3 = (int *)*v3;
      goto LABEL_9;
    }
  }
LABEL_10:
  result = a1[1];
  if ( result != -1 )
    result = sub_10F54(result);
  a1[1] = -1;
  return result;
}
