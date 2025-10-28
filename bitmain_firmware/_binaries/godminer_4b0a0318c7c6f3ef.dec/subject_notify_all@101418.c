int __fastcall subject_notify_all(int result, int a2)
{
  int v3; // r6
  int v4; // r5
  int v5; // r4
  int (__fastcall *v6)(int); // t1

  if ( *(int *)(result + 1024) > 0 )
  {
    v3 = result;
    v4 = result - 4;
    v5 = 0;
    do
    {
      v6 = *(int (__fastcall **)(int))(v4 + 4);
      v4 += 4;
      result = v6(a2);
      ++v5;
    }
    while ( *(_DWORD *)(v3 + 1024) > v5 );
  }
  return result;
}
