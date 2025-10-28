void *frontend_runtime_eth()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_197560 = (int)stratum_connect;
  dword_197564 = (int)stratum_disconnect;
  dword_197568 = (int)stratum_recv_line;
  dword_19756C = (int)stratum_send_line;
  dword_197570 = (int)stratum_login_base;
  dword_197574 = (int)stratum_handle_method_eth;
  dword_197578 = (int)pre_stratum_handle_method_eth;
  dword_19757C = (int)stratum_handle_response_eth;
  dword_197580 = (int)sub_4333C;
  dword_197584 = (int)sub_43264;
  dword_197588 = (int)sub_42418;
  dword_19758C = (int)stratum_authorize_eth;
  dword_197590 = (int)sub_42D9C;
  LODWORD(v0) = diff_to_target_eth;
  HIDWORD(v0) = target_to_double_diff_eth;
  dword_197594 = (int)sub_42BB4;
  dword_197598 = (int)sub_429D4;
  *(_QWORD *)&dword_1975A0 = v0;
  dword_19759C = (int)target_to_diff_eth;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_197560, 0x54u);
}
