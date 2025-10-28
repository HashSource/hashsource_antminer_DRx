ssize_t __fastcall sub_287D4(int a1)
{
  ssize_t result; // r0
  _BYTE buf[5]; // [sp+7h] [bp-5h] BYREF

  result = recv(a1, buf, 1u, 0);
  if ( result != -1 )
    return buf[0];
  return result;
}
