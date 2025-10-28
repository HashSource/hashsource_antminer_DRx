int __fastcall json_dump_file(_DWORD *a1, int a2, int a3)
{
  FILE *v5; // r4
  int (__fastcall *v6)(__int16 *, int, int); // r1
  int v7; // r5

  v5 = (FILE *)fopen64(a2, 1487072);
  if ( !v5 )
    return -1;
  LOWORD(v6) = 29920;
  HIWORD(v6) = (unsigned int)&loc_32FF0 >> 16;
  v7 = json_dump_callback(a1, v6, (int)v5, a3);
  if ( fclose(v5) )
    return -1;
  return v7;
}
