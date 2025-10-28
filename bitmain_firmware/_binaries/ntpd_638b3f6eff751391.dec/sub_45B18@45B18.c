int __fastcall sub_45B18(int a1, char **a2, char *a3, int a4)
{
  const char *v4; // r4
  int *v9; // r7
  signed int v10; // r9
  const unsigned __int16 **v11; // r0
  char *v12; // r12
  const unsigned __int16 *v13; // r1
  char *v14; // r2
  int v15; // t1
  char *endptr; // [sp+4h] [bp-4h] BYREF

  v4 = *a2;
  endptr = *a2;
  if ( a1 == -1 )
    return -1;
  v9 = _errno_location();
  *v9 = 0;
  v10 = strtoul(v4, &endptr, 10);
  if ( *v9 )
    return -1;
  v11 = _ctype_b_loc();
  v12 = endptr;
  v13 = *v11;
  while ( 1 )
  {
    v14 = v12;
    v15 = (unsigned __int8)*v12++;
    if ( (v13[v15] & 0x2000) == 0 )
      break;
    endptr = v12;
  }
  if ( v14 == a3 )
  {
    *a2 = a3;
    if ( v10 > sub_5A928(0x7FFFFFFF, a4) || a1 > 0x7FFFFFFF - a4 * v10 )
    {
      *v9 = 34;
      return -1;
    }
    else
    {
      return a1 + a4 * v10;
    }
  }
  else
  {
    *v9 = 22;
    return -1;
  }
}
