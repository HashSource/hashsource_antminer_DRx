int __fastcall sub_593B4(int result)
{
  if ( !result )
    off_7C9FC("./../lib/isc/unix/dir.c", 44, 0, "dir != ((void *)0)");
  *(_BYTE *)(result + 1028) = 0;
  *(_DWORD *)(result + 1284) = 0;
  *(_DWORD *)result = 1145655850;
  *(_DWORD *)(result + 1288) = 0;
  return result;
}
