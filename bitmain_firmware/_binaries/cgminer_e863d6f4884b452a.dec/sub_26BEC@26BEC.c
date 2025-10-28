int __fastcall sub_26BEC(int result)
{
  if ( *(_DWORD *)(result + 12) )
  {
    if ( *(_DWORD *)(result + 16) )
      goto LABEL_3;
  }
  else
  {
    *(_DWORD *)(result + 12) = 87909;
    if ( *(_DWORD *)(result + 16) )
    {
LABEL_3:
      if ( *(_DWORD *)(result + 20) )
        goto LABEL_4;
      goto LABEL_23;
    }
  }
  *(_DWORD *)(result + 16) = 87885;
  if ( *(_DWORD *)(result + 20) )
  {
LABEL_4:
    if ( *(_DWORD *)(result + 24) )
      goto LABEL_5;
    goto LABEL_24;
  }
LABEL_23:
  *(_DWORD *)(result + 20) = 87889;
  if ( *(_DWORD *)(result + 24) )
  {
LABEL_5:
    if ( *(_DWORD *)(result + 32) )
      goto LABEL_6;
    goto LABEL_25;
  }
LABEL_24:
  *(_DWORD *)(result + 24) = 97141;
  if ( *(_DWORD *)(result + 32) )
  {
LABEL_6:
    if ( *(_DWORD *)(result + 44) )
      goto LABEL_7;
    goto LABEL_26;
  }
LABEL_25:
  *(_DWORD *)(result + 32) = 87893;
  if ( *(_DWORD *)(result + 44) )
  {
LABEL_7:
    if ( *(_DWORD *)(result + 48) )
      goto LABEL_8;
    goto LABEL_27;
  }
LABEL_26:
  *(_DWORD *)(result + 44) = 97149;
  if ( *(_DWORD *)(result + 48) )
  {
LABEL_8:
    if ( *(_DWORD *)(result + 52) )
      goto LABEL_9;
    goto LABEL_28;
  }
LABEL_27:
  *(_DWORD *)(result + 48) = 87897;
  if ( *(_DWORD *)(result + 52) )
  {
LABEL_9:
    if ( *(_DWORD *)(result + 56) )
      goto LABEL_10;
    goto LABEL_29;
  }
LABEL_28:
  *(_DWORD *)(result + 52) = 97153;
  if ( *(_DWORD *)(result + 56) )
  {
LABEL_10:
    if ( *(_DWORD *)(result + 84) )
      goto LABEL_11;
    goto LABEL_30;
  }
LABEL_29:
  *(_DWORD *)(result + 56) = 87905;
  if ( *(_DWORD *)(result + 84) )
  {
LABEL_11:
    if ( *(_DWORD *)(result + 88) )
      goto LABEL_12;
    goto LABEL_31;
  }
LABEL_30:
  *(_DWORD *)(result + 84) = 97157;
  if ( *(_DWORD *)(result + 88) )
  {
LABEL_12:
    if ( *(_DWORD *)(result + 92) )
      goto LABEL_13;
    goto LABEL_32;
  }
LABEL_31:
  *(_DWORD *)(result + 88) = 97161;
  if ( *(_DWORD *)(result + 92) )
  {
LABEL_13:
    if ( *(_DWORD *)(result + 60) )
      goto LABEL_14;
    goto LABEL_33;
  }
LABEL_32:
  *(_DWORD *)(result + 92) = 97165;
  if ( *(_DWORD *)(result + 60) )
  {
LABEL_14:
    if ( *(_DWORD *)(result + 76) )
      goto LABEL_15;
    goto LABEL_34;
  }
LABEL_33:
  *(_DWORD *)(result + 60) = 139477;
  if ( *(_DWORD *)(result + 76) )
  {
LABEL_15:
    if ( *(_DWORD *)(result + 80) )
      goto LABEL_16;
    goto LABEL_35;
  }
LABEL_34:
  *(_DWORD *)(result + 76) = 87885;
  if ( *(_DWORD *)(result + 80) )
  {
LABEL_16:
    if ( *(_DWORD *)(result + 72) )
      goto LABEL_17;
LABEL_36:
    *(_DWORD *)(result + 72) = 87893;
    if ( *(_DWORD *)(result + 96) )
      goto LABEL_18;
    goto LABEL_37;
  }
LABEL_35:
  *(_DWORD *)(result + 80) = 87885;
  if ( !*(_DWORD *)(result + 72) )
    goto LABEL_36;
LABEL_17:
  if ( *(_DWORD *)(result + 96) )
    goto LABEL_18;
LABEL_37:
  *(_DWORD *)(result + 96) = 87885;
LABEL_18:
  if ( *(double *)(result + 104) == 0.0 )
    *(_QWORD *)(result + 104) = 0x3FF0000000000000LL;
  return result;
}
