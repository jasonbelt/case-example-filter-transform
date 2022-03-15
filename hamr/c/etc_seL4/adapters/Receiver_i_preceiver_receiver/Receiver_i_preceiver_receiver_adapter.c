#include <Receiver_i_preceiver_receiver_adapter.h>

Unit t_AttestationGate_Receiver_i_preceiver_receiver_adapter_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Receiver_i_preceiver_receiver_adapter.c", "", "t_AttestationGate_Receiver_i_preceiver_receiver_adapter_initialiseArchitecture", 0);

  t_Receiver_i_preceiver_receiver_receiver_initialiseArchitecture(SF_LAST);
}

Unit t_AttestationGate_Receiver_i_preceiver_receiver_adapter_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Receiver_i_preceiver_receiver_adapter.c", "", "t_AttestationGate_Receiver_i_preceiver_receiver_adapter_initialiseEntryPoint", 0);

  t_Receiver_i_preceiver_receiver_receiver_initialiseEntryPoint(SF_LAST);
}

Unit t_AttestationGate_Receiver_i_preceiver_receiver_adapter_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Receiver_i_preceiver_receiver_adapter.c", "", "t_AttestationGate_Receiver_i_preceiver_receiver_adapter_computeEntryPoint", 0);

  t_Receiver_i_preceiver_receiver_receiver_computeEntryPoint(SF_LAST);
}

art_Bridge_EntryPoints t_AttestationGate_Receiver_i_preceiver_receiver_adapter_entryPoints(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Receiver_i_preceiver_receiver_adapter.c", "", "t_AttestationGate_Receiver_i_preceiver_receiver_adapter_entryPoints", 0);

  return t_Receiver_i_preceiver_receiver_receiver_entryPoints(SF_LAST);
}
