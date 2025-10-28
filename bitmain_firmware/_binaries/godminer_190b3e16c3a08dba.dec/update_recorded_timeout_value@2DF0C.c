int __fastcall update_recorded_timeout_value(unsigned __int64 a1)
{
  int v1; // r3
  unsigned __int64 *v2; // r2
  int v3; // r12
  unsigned __int64 v4; // r6
  unsigned __int64 v5; // r4
  unsigned __int64 v6; // t1
  bool v7; // cf

  v1 = 0;
  v2 = max_timeout_value;
  v3 = 0;
  v4 = -1;
  do
  {
    v6 = *v2++;
    v5 = v6;
    v7 = v6 >= v4;
    if ( v6 < v4 )
      v3 = v1;
    ++v1;
    if ( !v7 )
      v4 = v5;
  }
  while ( v1 != 10 );
  if ( v4 < a1 )
    max_timeout_value[v3] = a1;
  return a1;
}
