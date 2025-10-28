void *frontend_runtime_eth_2282()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_1975B4 = (int)stratum_connect;
  dword_1975B8 = (int)stratum_disconnect;
  dword_1975BC = (int)stratum_recv_line;
  dword_1975C0 = (int)stratum_send_line;
  dword_1975C4 = (int)stratum_login_base;
  dword_1975C8 = (int)stratum_handle_method_eth_2282;
  dword_1975CC = (int)pre_stratum_handle_method_eth_2282;
  dword_1975D0 = (int)stratum_handle_response_eth_2282;
  dword_1975D4 = (int)sub_45328;
  dword_1975D8 = (int)sub_45250;
  dword_1975DC = (int)sub_44484;
  dword_1975E0 = (int)stratum_authorize_eth_2282;
  dword_1975E4 = (int)sub_44D88;
  LODWORD(v0) = diff_to_target_eth_2282;
  HIDWORD(v0) = target_to_double_diff_eth_2282;
  dword_1975E8 = (int)sub_44BA0;
  dword_1975EC = (int)sub_449C0;
  *(_QWORD *)&dword_1975F4 = v0;
  dword_1975F0 = (int)target_to_diff_eth_2282;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_1975B4, 0x54u);
}
