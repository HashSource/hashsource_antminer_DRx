int sub_175A0()
{
  struct tm *v0; // r0
  int v1; // r4
  int v2; // lr
  __int64 v3; // kr00_8
  int tm_hour; // r4
  _BOOL4 v7; // lr
  _BOOL4 v8; // r1
  _BOOL4 v9; // r7
  _BOOL4 v10; // r2
  time_t v11; // [sp+4h] [bp-10h] BYREF
  time_t v12[2]; // [sp+8h] [bp-Ch] BYREF

  sub_2A69C(v12);
  v11 = v12[0];
  v0 = localtime(&v11);
  v1 = (unsigned __int8)byte_72EC0;
  if ( byte_72EC0 )
  {
    v2 = (unsigned __int8)byte_72C04;
    v3 = *(_QWORD *)&v0->tm_min;
    if ( byte_72C04 )
    {
      if ( dword_72C10 > dword_72ECC || (dword_72C0C > dword_72EC8 ? (v8 = dword_72C10 == dword_72ECC) : (v8 = 0), v8) )
      {
        if ( dword_72C10 > SHIDWORD(v3) || (dword_72C0C > (int)v3 ? (v2 = dword_72C10 == HIDWORD(v3)) : (v2 = 0), v2) )
        {
          if ( dword_72ECC <= SHIDWORD(v3) )
          {
            v10 = dword_72EC8 > (int)v3 && dword_72ECC == HIDWORD(v3);
            return !v10;
          }
          else
          {
            return 0;
          }
        }
      }
      else if ( dword_72ECC > SHIDWORD(v3) || (dword_72EC8 > (int)v3 ? (v9 = dword_72ECC == HIDWORD(v3)) : (v9 = 0), v9) )
      {
        if ( dword_72C10 <= SHIDWORD(v3) )
          return dword_72C0C > (int)v3 && dword_72C10 == HIDWORD(v3);
      }
    }
    else if ( dword_72ECC <= SHIDWORD(v3) && (dword_72EC8 <= (int)v3 || dword_72ECC != HIDWORD(v3)) )
    {
      byte_72EC0 = byte_72C04;
      return v1;
    }
    return v2;
  }
  tm_hour = v0->tm_hour;
  if ( tm_hour < dword_72C10 )
    return 1;
  v7 = v0->tm_min < dword_72C0C;
  if ( tm_hour != dword_72C10 )
    return 0;
  return v7;
}
