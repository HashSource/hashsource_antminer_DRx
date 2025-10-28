void *frontend_runtime_dcr()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_1964FC = (int)stratum_connect;
  dword_196500 = (int)stratum_disconnect;
  dword_196504 = (int)stratum_recv_line;
  dword_196508 = (int)stratum_send_line;
  dword_19650C = (int)stratum_login_base;
  dword_196510 = (int)stratum_handle_method_base;
  dword_196514 = (int)pre_stratum_handle_method_base;
  dword_196518 = (int)stratum_handle_response_base;
  dword_19651C = (int)sub_41D80;
  dword_196520 = (int)sub_41D18;
  dword_196524 = (int)stratum_subscribe_base;
  dword_196528 = (int)stratum_authorize_base;
  dword_19652C = (int)sub_4122C;
  LODWORD(v0) = diff_to_target_dcr;
  HIDWORD(v0) = target_to_double_diff_dcr;
  dword_196530 = (int)sub_40EF0;
  dword_196534 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_19653C = v0;
  dword_196538 = (int)target_to_diff_dcr;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_1964FC, 0x54u);
}
