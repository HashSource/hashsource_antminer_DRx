ssize_t __fastcall sub_35F24(int a1, int a2)
{
  ssize_t result; // r0

  result = write(a1, "$PMOTG,RMC,0000*1D\r\n", 0x14u);
  if ( result == -1 )
    return sub_27040(a2, 3);
  return result;
}
