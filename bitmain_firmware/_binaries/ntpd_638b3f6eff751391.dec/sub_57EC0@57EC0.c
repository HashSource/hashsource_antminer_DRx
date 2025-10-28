int __fastcall sub_57EC0(int a1)
{
  int *v1; // r3
  int v2; // r2
  int *v4; // r1

  if ( dword_7CB5C == -1 )
    return 0;
  if ( dword_7CB5C != a1 )
  {
    v1 = (int *)&unk_7CB68;
    while ( 1 )
    {
      v2 = *v1;
      v4 = v1;
      v1 += 3;
      if ( v2 == -1 )
        break;
      if ( v2 == a1 )
        return v4[2];
    }
    return 0;
  }
  v4 = &dword_7CB5C;
  return v4[2];
}
