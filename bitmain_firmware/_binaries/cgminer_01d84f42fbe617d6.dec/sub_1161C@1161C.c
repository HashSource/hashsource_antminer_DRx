bool __fastcall sub_1161C(int a1, int a2, int a3)
{
  int v3; // r3
  struct tm *v4; // r0
  int v5; // r12
  int v7; // r2
  int tm_hour; // r1
  int v9; // r2
  time_t v10; // [sp+4h] [bp-Ch] BYREF
  time_t v11[2]; // [sp+8h] [bp-8h] BYREF

  v3 = (unsigned __int8)byte_63E14;
  if ( !byte_63E14 )
  {
    v3 = (unsigned __int8)byte_63B90;
    if ( !byte_63B90 )
      return 1;
  }
  sub_2B13C(v11, a2, a3, v3);
  v10 = v11[0];
  v4 = localtime(&v10);
  if ( !byte_63E14 )
  {
    tm_hour = v4->tm_hour;
    return tm_hour < dword_63B9C || tm_hour == dword_63B9C && v4->tm_min < dword_63B98;
  }
  if ( !byte_63B90 )
  {
    v5 = v4->tm_hour;
    if ( v5 >= dword_63E20 && (v5 != dword_63E20 || v4->tm_min >= dword_63E1C) )
    {
      byte_63E14 = 0;
      return 1;
    }
    return 0;
  }
  if ( dword_63E20 >= dword_63B9C && (dword_63E20 != dword_63B9C || dword_63E1C >= dword_63B98) )
  {
    v7 = v4->tm_hour;
    if ( dword_63E20 <= v7 )
    {
      if ( dword_63E20 != v7 || v4->tm_min >= dword_63E1C )
        return 1;
    }
    else if ( dword_63B9C > v7 )
    {
      return 1;
    }
    return dword_63B9C == v7 && v4->tm_min < dword_63B98;
  }
  v9 = v4->tm_hour;
  return (dword_63B9C > v9 || dword_63B9C == v9 && v4->tm_min < dword_63B98)
      && dword_63E20 <= v9
      && (dword_63E20 != v9 || v4->tm_min >= dword_63E1C);
}
