// #Sireum

// This file was auto-generated.  Do not edit

package t.Radio_i_pradio_radio

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import t._
import t.AttestationGate.Radio_i_pradio_radio_seL4Nix

object radio extends App {

  val radioBridge : t.AttestationGate.Radio_i_pradio_radio_Bridge = {
    val write_port = Port[Base_Types.Bits] (id = 0, name = "s_impl_Instance_pradio_radio_write_port", mode = EventOut)

    t.AttestationGate.Radio_i_pradio_radio_Bridge(
      id = 0,
      name = "s_impl_Instance_pradio_radio",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      write_port = write_port
    )
  }

  val entryPoints: Bridge.EntryPoints = radioBridge.entryPoints
  val noData: Option[DataContent] = None()

  // write_port: Out EventDataPort Base_Types.Bits
  val write_port_id: Art.PortId = radioBridge.write_port.id
  var write_port_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    halt(s"Unexpected: radio.getValue called with: ${portId}")
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params


  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == write_port_id) {
      write_port_port = Some(data)
    } else {
      halt(s"Unexpected: radio.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(write_port_port.nonEmpty) {
      Radio_i_pradio_radio_seL4Nix.write_port_Send(write_port_port.get)
      write_port_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    // nothing to do - CAmkES is responsible for initialization
  }

  def initialiseEntryPoint(): Unit = { entryPoints.initialise() }

  def computeEntryPoint(): Unit = { entryPoints.compute() }

  def finaliseEntryPoint(): Unit = { entryPoints.finalise() }

  def main(args: ISZ[String]): Z = {

    // need to touch the following for transpiler
    initialiseArchitecture()
    initialiseEntryPoint()
    computeEntryPoint()
    finaliseEntryPoint()

    touch()

    return 0
  }

  def touch(): Unit = {
    if(F) {
      TranspilerToucher.touch()

      // add types used in Platform.receive and Platform.receiveAsync
      val mbox2Boolean_Payload: MBox2[Art.PortId, DataContent] = MBox2(0, Base_Types.Boolean_Payload(T))
      val mbox2OptionDataContent: MBox2[Art.PortId, Option[DataContent]] = MBox2(0, None())

      // touch each payload/type in case some are only used as a field in a record
      def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

      printDataContent(Base_Types.Bits_Payload(Base_Types.Bits_example()))
      printDataContent(art.Empty())

      t.AttestationGate.Radio_i_pradio_radio_Bridge.c_initialization_api.get.logInfo("")
      t.AttestationGate.Radio_i_pradio_radio_Bridge.c_initialization_api.get.logDebug("")
      t.AttestationGate.Radio_i_pradio_radio_Bridge.c_initialization_api.get.logError("")
      t.AttestationGate.Radio_i_pradio_radio_Bridge.c_operational_api.get.logInfo("")
      t.AttestationGate.Radio_i_pradio_radio_Bridge.c_operational_api.get.logDebug("")
      t.AttestationGate.Radio_i_pradio_radio_Bridge.c_operational_api.get.logError("")
      t.AttestationGate.Radio_i_pradio_radio_Bridge.c_initialization_api.get.put_write_port(Base_Types.Bits_example())
      t.AttestationGate.Radio_i_pradio_radio_Bridge.c_operational_api.get.put_write_port(Base_Types.Bits_example())
    }
  }

  def logInfo(title: String, msg: String): Unit = {
    print(radioBridge.name)
    print(": ")
    println(msg)
  }

  def logError(title: String, msg: String): Unit = {
    eprint(radioBridge.name)
    eprint(": ")
    eprintln(msg)
  }

  def logDebug(title: String, msg: String): Unit = {
    print(radioBridge.name)
    print(": ")
    println(msg)
  }

  def run(): Unit = {}

}
