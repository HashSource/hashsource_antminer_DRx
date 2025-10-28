size_t __fastcall sub_47BD4(int a1, int a2, char a3, char a4)
{
  char v6; // [sp+0h] [bp-8h] BYREF
  char v7; // [sp+1h] [bp-7h]
  char v8; // [sp+2h] [bp-6h]
  char v9; // [sp+3h] [bp-5h]
  char v10; // [sp+4h] [bp-4h]

  v8 = 0;
  v10 = 0;
  if ( a2 )
  {
    v6 = 82;
    v7 = 5;
  }
  else
  {
    v6 = 66;
    v7 = 5;
    v8 = a3;
  }
  v9 = a4;
  v10 = sub_41784(&v6, 32);
  return sub_429E0(a1, &v6, 5u);
}
