#include <Radio_i_pradio_radio_api.h>
#include <Radio_i_pradio_radio.h>

static bool apis_initialized = false;
static struct t_AttestationGate_Radio_i_Initialization_Api initialization_api;
static struct t_AttestationGate_Radio_i_Operational_Api operational_api;

static void initialize_apis(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Radio_i_pradio_radio.c", "", "initialize_apis", 0);

  // Option_2AF802 = Option[t.AttestationGate.Radio_i_Initialization_Api]
  Option_2AF802_get_(SF (t_AttestationGate_Radio_i_Initialization_Api) &initialization_api, t_AttestationGate_Radio_i_pradio_radio_Bridge_c_initialization_api(SF_LAST));
  // Option_89029A = Option[t.AttestationGate.Radio_i_Operational_Api]
  Option_89029A_get_(SF (t_AttestationGate_Radio_i_Operational_Api) &operational_api, t_AttestationGate_Radio_i_pradio_radio_Bridge_c_operational_api(SF_LAST));
  apis_initialized = true;
}

// This file was auto-generated.  Do not edit

void api_put_write_port__t_AttestationGate_Radio_i_pradio_radio(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "Radio_i_pradio_radio_api.c", "", "api_put_write_port__t_AttestationGate_Radio_i_pradio_radio", 0);

  sfAssert((Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].")
  sfAssert((Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].")

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  t_AttestationGate_Radio_i_Initialization_Api_put_write_port_(
    SF
    &initialization_api,
    &t_0);
}

void api_logInfo__t_AttestationGate_Radio_i_pradio_radio(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "Radio_i_pradio_radio_api.c", "", "api_logInfo__t_AttestationGate_Radio_i_pradio_radio", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  t_AttestationGate_Radio_i_Initialization_Api_logInfo_(
    SF
    &initialization_api,
    str);
}

void api_logDebug__t_AttestationGate_Radio_i_pradio_radio(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "Radio_i_pradio_radio_api.c", "", "api_logDebug__t_AttestationGate_Radio_i_pradio_radio", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  t_AttestationGate_Radio_i_Initialization_Api_logDebug_(
    SF
    &initialization_api,
    str);
}

void api_logError__t_AttestationGate_Radio_i_pradio_radio(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "Radio_i_pradio_radio_api.c", "", "api_logError__t_AttestationGate_Radio_i_pradio_radio", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  t_AttestationGate_Radio_i_Initialization_Api_logError_(
    SF
    &initialization_api,
    str);
}

Unit t_AttestationGate_Radio_i_pradio_radio_initialise(
  STACK_FRAME
  t_AttestationGate_Radio_i_Initialization_Api api) {
  DeclNewStackFrame(caller, "Radio_i_pradio_radio_api.c", "", "t_AttestationGate_Radio_i_pradio_radio_initialise", 0);

  t_AttestationGate_Radio_i_pradio_radio_initialise_(SF_LAST);
}

Unit t_AttestationGate_Radio_i_pradio_radio_finalise(
  STACK_FRAME
  t_AttestationGate_Radio_i_Operational_Api api) {
  DeclNewStackFrame(caller, "Radio_i_pradio_radio_api.c", "", "t_AttestationGate_Radio_i_pradio_radio_finalise", 0);

  t_AttestationGate_Radio_i_pradio_radio_finalise_(SF_LAST);
}

Unit t_AttestationGate_Radio_i_pradio_radio_timeTriggered(
  STACK_FRAME
  t_AttestationGate_Radio_i_Operational_Api api) {
  DeclNewStackFrame(caller, "Radio_i_pradio_radio_api.c", "", "t_AttestationGate_Radio_i_pradio_radio_timeTriggered", 0);

  t_AttestationGate_Radio_i_pradio_radio_timeTriggered_(SF_LAST);
}
