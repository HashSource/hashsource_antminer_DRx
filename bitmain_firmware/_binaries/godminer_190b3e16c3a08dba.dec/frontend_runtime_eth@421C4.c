void *frontend_runtime_eth()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_17AB80 = (int)stratum_connect;
  dword_17AB84 = (int)stratum_disconnect;
  dword_17AB88 = (int)stratum_recv_line;
  dword_17AB8C = (int)stratum_send_line;
  dword_17AB90 = (int)stratum_login_base;
  dword_17AB94 = (int)stratum_handle_method_eth;
  dword_17AB98 = (int)pre_stratum_handle_method_eth;
  dword_17AB9C = (int)stratum_handle_response_eth;
  dword_17ABA0 = (int)sub_41178;
  dword_17ABA4 = (int)sub_410A0;
  dword_17ABA8 = (int)sub_40234;
  dword_17ABAC = (int)stratum_authorize_eth;
  dword_17ABB0 = (int)sub_40BD8;
  LODWORD(v0) = diff_to_target_eth;
  HIDWORD(v0) = target_to_double_diff_eth;
  dword_17ABB4 = (int)sub_409F0;
  dword_17ABB8 = (int)sub_40810;
  *(_QWORD *)&dword_17ABC0 = v0;
  dword_17ABBC = (int)target_to_diff_eth;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_17AB80, 0x54u);
}
