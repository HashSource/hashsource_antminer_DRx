int __fastcall sub_5A788(int *a1)
{
  unsigned int v2; // r4
  int result; // r0

  if ( !a1 )
    off_7C9FC("./../lib/isc/random.c", 78, 0, "val != ((void *)0)");
  if ( !dword_C9C94 )
  {
    sub_5A72C();
    dword_C9C94 = 1;
  }
  v2 = rand();
  result = (unsigned __int16)((unsigned int)rand() >> 4);
  *a1 = (unsigned __int16)(v2 >> 4) | (result << 16);
  return result;
}
