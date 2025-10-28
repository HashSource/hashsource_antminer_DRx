unsigned int __fastcall sub_4F6B8(int a1, int a2, int a3, int a4)
{
  bool v4; // zf
  bool v5; // cc
  int v6; // r1
  unsigned int result; // r0

  if ( a3 >= a4 )
  {
    dword_194478 = 0;
    return 0;
  }
  if ( dword_194478 > 120 )
  {
    dword_194478 = 0;
    return 0;
  }
  if ( !dword_194478 )
    return 0;
  v4 = a2 == 0;
  v5 = a2 <= 0;
  v6 = dword_194478 + 1;
  if ( v4 )
  {
LABEL_9:
    dword_194478 = v6;
    return 20;
  }
  ++dword_194478;
  result = 10 * ((a4 - a3) / 5u);
  if ( v5 && v6 )
  {
    ++v6;
    goto LABEL_9;
  }
  return result;
}
