char *__fastcall sub_46490(char *a1, _DWORD *a2)
{
  char *v2; // r4
  int v3; // r5
  int v5; // r0
  int v6; // r6
  int v8; // [sp+4h] [bp-8h] BYREF

  v2 = a1;
  v3 = (unsigned __int8)*a1;
  if ( !*a1 )
    return v2;
  v5 = sub_4633C((unsigned __int8)*a1);
  v6 = v5;
  if ( v5 <= 0 )
    return 0;
  if ( v5 == 1 )
  {
    v8 = v3;
    goto LABEL_6;
  }
  if ( !sub_463B8(v2, v5, &v8) )
    return 0;
LABEL_6:
  v2 += v6;
  if ( a2 )
    *a2 = v8;
  return v2;
}
