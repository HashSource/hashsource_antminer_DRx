int __fastcall sub_88A0(char *a1)
{
  int v2; // r3
  int v3; // r3
  _QWORD v6[2]; // [sp+8h] [bp-24h]
  int v7; // [sp+18h] [bp-14h]
  int v8; // [sp+1Ch] [bp-10h]
  int v9; // [sp+20h] [bp-Ch]
  char *v10; // [sp+24h] [bp-8h]

  if ( !dword_11540 )
  {
    do
    {
      v8 = sub_881C();
      if ( v8 )
        return v8;
    }
    while ( !qword_11548 && !qword_11550 );
    dword_11540 = 1;
  }
  v6[0] = sub_8754(&qword_11548);
  v6[1] = sub_8754(&qword_11548);
  v10 = off_11530;
  v9 = 0;
  while ( *v10 )
  {
    v7 = *((unsigned __int8 *)v6 + (v9 >> 1));
    if ( (v9 & 1) != 0 )
      v2 = v7 >> 4;
    else
      v2 = v7 & 0xF;
    v7 = v2;
    v3 = (unsigned __int8)*v10;
    if ( v3 == 120 )
    {
      *a1 = off_11534[v7];
      ++v9;
    }
    else if ( v3 == 121 )
    {
      *a1 = off_11534[(v7 & 3) + 8];
      ++v9;
    }
    else
    {
      *a1 = *v10;
    }
    ++a1;
    ++v10;
  }
  *a1 = 0;
  return 0;
}
