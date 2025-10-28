int __fastcall set_cur_block_num(unsigned __int64 a1)
{
  if ( *(_QWORD *)&dword_1978A0 < a1 )
    *(_QWORD *)&dword_1978A0 = a1;
  return a1;
}
