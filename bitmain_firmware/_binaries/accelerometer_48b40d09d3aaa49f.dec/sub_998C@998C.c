int __fastcall sub_998C(int a1, unsigned int a2)
{
  unsigned int optval; // [sp+8h] [bp-Ch] BYREF
  socklen_t optlen[2]; // [sp+Ch] [bp-8h] BYREF

  optlen[0] = 4;
  if ( getsockopt(a1, 1, 7, &optval, optlen) >= 0 && optlen[0] == 4 && optval >= 2 * a2 )
    return 0;
  optval = a2;
  if ( setsockopt(a1, 1, 7, &optval, 4u) < 0 )
    return -*_errno_location();
  else
    return 1;
}
