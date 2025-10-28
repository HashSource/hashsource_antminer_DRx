_QWORD *__fastcall sub_20854(_QWORD *result)
{
  double v1; // d0
  _QWORD *v2; // r4
  double v3; // d8
  __int64 v4; // r2
  _QWORD *v5; // r1

  v2 = result;
  v3 = v1;
  if ( dword_7CF4C > 1 )
    result = (_QWORD *)printf("loop_config: item %d freq %f\n", result, v1);
  switch ( (unsigned int)v2 )
  {
    case 1u:
      if ( !dword_7D5EC )
      {
        dword_CABD8 = 1;
        memset(&tntx, 0, sizeof(tntx));
        tntx.status = 1;
        tntx.constant = (unsigned __int8)byte_CABC8;
        dword_7D690 = 0;
        tntx.modes = 61;
        dword_7D60C = (int)sub_1F9C0;
        tntx.maxerror = 16;
        tntx.esterror = 16;
        if ( sigaction(31, (const struct sigaction *)&dword_7D60C, &stru_7D698) )
        {
          sub_4FE78(3, "sigaction() fails to save SIGSYS trap: %m");
          dword_CABD8 = 0;
        }
        if ( !_sigsetjmp(env, 1) )
          ntp_adjtime(&tntx);
        result = (_QWORD *)sigaction(31, &stru_7D698, 0);
        if ( result )
        {
          sub_4FE78(3, "sigaction() fails to restore SIGSYS trap: %m");
          dword_CABC0 = tntx.status;
          dword_CABD8 = 0;
          result = (_QWORD *)tntx.status;
        }
        else
        {
          dword_CABC0 = tntx.status;
          if ( dword_CABD8 )
          {
            if ( (tntx.status & 0x8000) != 0 )
              dword_CAB98 = 1;
            result = (_QWORD *)sub_1D3D8(13, 0, "kernel time sync enabled");
          }
        }
      }
      break;
    case 2u:
      if ( v1 <= 0.0005 && v1 >= -0.0005 )
        goto LABEL_27;
      sub_1F9E4();
      result = (_QWORD *)sub_1F8F0(1);
      break;
    case 3u:
      dbl_7A1A8 = v1;
      if ( v1 == 0.0 || v1 > 0.5 )
        dword_7A198 = 0;
      break;
    case 4u:
      dbl_7A1A0 = v1;
      break;
    case 5u:
      dbl_7A1C0 = v1 / 1000000.0;
      break;
    case 6u:
      dbl_7A1B0 = v1;
      break;
    case 8u:
      byte_7A1B8 = (unsigned int)v1;
      break;
    case 9u:
      if ( v1 < 900.0 )
        v3 = 900.0;
      dword_7D600 = (int)(v3 / 900.0);
      result = (_QWORD *)sub_4F524(8 * dword_7D600);
      if ( dword_7D600 > 0 )
      {
        WORD2(v4) = -12955;
        LODWORD(v4) = 0;
      }
      dword_7D5F0 = (int)result;
      if ( dword_7D600 > 0 )
      {
        v5 = &result[dword_7D600];
        HIWORD(v4) = 16845;
        do
          *result++ = v4;
        while ( result != v5 );
      }
      dbl_7D5F8 = 1000000000.0;
      break;
    case 0xAu:
LABEL_27:
      sub_1F9E4();
      result = (_QWORD *)sub_1F8F0(2);
      break;
    case 0xBu:
      if ( dword_CABD8 && dword_7A198 )
      {
        memset(&tntx, 0, sizeof(tntx));
        tntx.modes = 16;
        tntx.status = 64;
        ntp_adjtime(&tntx);
        result = (_QWORD *)sub_1D3D8(13, 0, "kernel time sync disabledx");
      }
      break;
    case 0xCu:
      dbl_CAB90 = v1 / 1000000.0;
      break;
    default:
      result = (_QWORD *)sub_4FE78(5, "loop_config: unsupported option %d", v2);
      break;
  }
  return result;
}
