int sub_E54C()
{
  int result; // r0
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  result = nice(10);
  if ( !result && byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
  {
    strcpy(v1, "Unable to set thread to low priority");
    return sub_3F1C0(7, v1, 0);
  }
  return result;
}
