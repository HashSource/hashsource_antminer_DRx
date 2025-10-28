int __fastcall sub_36A40(int a1, int a2, int a3, int a4)
{
  char *v4; // r1
  int result; // r0

  if ( a4 )
    v4 = "{\"STATUS\":\"RESTART\"";
  else
    v4 = "RESTART";
  result = sub_36A20(a1, v4);
  byte_7CB04 = 1;
  byte_7CB05 = 1;
  return result;
}
