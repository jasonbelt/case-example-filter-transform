#include <Receiver_i_preceiver_receiver_api.h>
#include <Receiver_i_preceiver_receiver.h>

static bool apis_initialized = false;
static struct t_AttestationGate_Receiver_i_Initialization_Api initialization_api;
static struct t_AttestationGate_Receiver_i_Operational_Api operational_api;

static void initialize_apis(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Receiver_i_preceiver_receiver.c", "", "initialize_apis", 0);

  // Option_4CF7E8 = Option[t.AttestationGate.Receiver_i_Initialization_Api]
  Option_4CF7E8_get_(SF (t_AttestationGate_Receiver_i_Initialization_Api) &initialization_api, t_AttestationGate_Receiver_i_preceiver_receiver_Bridge_c_initialization_api(SF_LAST));
  // Option_591C89 = Option[t.AttestationGate.Receiver_i_Operational_Api]
  Option_591C89_get_(SF (t_AttestationGate_Receiver_i_Operational_Api) &operational_api, t_AttestationGate_Receiver_i_preceiver_receiver_Bridge_c_operational_api(SF_LAST));
  apis_initialized = true;
}

// This file was auto-generated.  Do not edit

bool api_get_read_port__t_AttestationGate_Receiver_i_preceiver_receiver(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "Receiver_i_preceiver_receiver_api.c", "", "api_get_read_port__t_AttestationGate_Receiver_i_preceiver_receiver", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  t_AttestationGate_Receiver_i_Operational_Api_get_read_port_(
    SF
    (Option_30119F) &t_0,
    &operational_api);

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    if(*numBits > 0) {
      size_t numBytes = (*numBits - 1) / 8 + 1;
      memcpy(byteArray, &t_0.Some_8D03B1.value.value, numBytes);
    }
    return true;
  } else {
    return false;
  }
}

void api_logInfo__t_AttestationGate_Receiver_i_preceiver_receiver(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "Receiver_i_preceiver_receiver_api.c", "", "api_logInfo__t_AttestationGate_Receiver_i_preceiver_receiver", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  t_AttestationGate_Receiver_i_Initialization_Api_logInfo_(
    SF
    &initialization_api,
    str);
}

void api_logDebug__t_AttestationGate_Receiver_i_preceiver_receiver(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "Receiver_i_preceiver_receiver_api.c", "", "api_logDebug__t_AttestationGate_Receiver_i_preceiver_receiver", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  t_AttestationGate_Receiver_i_Initialization_Api_logDebug_(
    SF
    &initialization_api,
    str);
}

void api_logError__t_AttestationGate_Receiver_i_preceiver_receiver(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "Receiver_i_preceiver_receiver_api.c", "", "api_logError__t_AttestationGate_Receiver_i_preceiver_receiver", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  t_AttestationGate_Receiver_i_Initialization_Api_logError_(
    SF
    &initialization_api,
    str);
}

Unit t_AttestationGate_Receiver_i_preceiver_receiver_initialise(
  STACK_FRAME
  t_AttestationGate_Receiver_i_Initialization_Api api) {
  DeclNewStackFrame(caller, "Receiver_i_preceiver_receiver_api.c", "", "t_AttestationGate_Receiver_i_preceiver_receiver_initialise", 0);

  t_AttestationGate_Receiver_i_preceiver_receiver_initialise_(SF_LAST);
}

Unit t_AttestationGate_Receiver_i_preceiver_receiver_finalise(
  STACK_FRAME
  t_AttestationGate_Receiver_i_Operational_Api api) {
  DeclNewStackFrame(caller, "Receiver_i_preceiver_receiver_api.c", "", "t_AttestationGate_Receiver_i_preceiver_receiver_finalise", 0);

  t_AttestationGate_Receiver_i_preceiver_receiver_finalise_(SF_LAST);
}

Unit t_AttestationGate_Receiver_i_preceiver_receiver_handle_read_port(
  STACK_FRAME
  t_AttestationGate_Receiver_i_Operational_Api api,
  IS_C4F575 value) {
  DeclNewStackFrame(caller, "Receiver_i_preceiver_receiver_api.c", "", "t_AttestationGate_Receiver_i_preceiver_receiver_handle_read_port", 0);

  t_AttestationGate_Receiver_i_preceiver_receiver_handle_read_port_(SF value);
}
