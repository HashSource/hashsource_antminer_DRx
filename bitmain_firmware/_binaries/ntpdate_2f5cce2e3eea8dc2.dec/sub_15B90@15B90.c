int __fastcall sub_15B90(int *a1)
{
  unsigned int v2; // r4
  int result; // r0

  if ( !a1 )
    off_21DCC("./../lib/isc/random.c", 78, 0, "val != ((void *)0)");
  if ( !dword_24058 )
  {
    sub_15B34();
    dword_24058 = 1;
  }
  v2 = rand();
  result = (unsigned __int16)((unsigned int)rand() >> 4);
  *a1 = (unsigned __int16)(v2 >> 4) | (result << 16);
  return result;
}
