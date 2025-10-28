int sub_E714()
{
  int result; // r0
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  result = nice(10);
  if ( !result && byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    strcpy(v1, "Unable to set thread to low priority");
    return sub_3F178(7, v1, 0);
  }
  return result;
}
