int __fastcall sub_10BFC(int a1)
{
  FILE *v2; // r5

  v2 = fopen("/etc/config/auth_tmp.txt", "w+");
  if ( !v2 )
    return -1;
  if ( *(_BYTE *)a1 == 102 && *(_BYTE *)(a1 + 1) == 53 && !*(_BYTE *)(a1 + 2) )
    fputs((const char *)a1, v2);
  else
    fwrite("fx", 1u, 2u, v2);
  fclose(v2);
  return 1;
}
