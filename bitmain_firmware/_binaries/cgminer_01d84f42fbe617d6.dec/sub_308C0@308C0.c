int __fastcall sub_308C0(unsigned int *a1, int a2, int a3, int a4)
{
  char *v4; // r1
  int result; // r0

  if ( a4 )
    v4 = "{\"STATUS\":\"RESTART\"";
  else
    v4 = "RESTART";
  result = sub_308A8(a1, v4);
  byte_62F64 = 1;
  byte_62F65 = 1;
  return result;
}
