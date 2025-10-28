int __fastcall sub_9468(const char *a1)
{
  int result; // r0
  char *endptr; // [sp+4h] [bp-4h] BYREF

  result = strtol(a1, &endptr, 0);
  if ( *endptr || !*a1 )
  {
    fwrite("Error: Chip address is not a number!\n", 1u, 0x25u, (FILE *)stderr);
    return -1;
  }
  else if ( (unsigned int)(result - 3) > 0x74 )
  {
    fwrite("Error: Chip address out of range (0x03-0x77)!\n", 1u, 0x2Eu, (FILE *)stderr);
    return -2;
  }
  return result;
}
