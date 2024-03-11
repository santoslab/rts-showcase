// #Sireum

package art

import org.sireum._
import art.scheduling.Scheduler

@ext object ArtNative {

  def shouldDispatch(bridgeId: Art.BridgeId): B = $

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = $


  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = $

  def putValue(portId: Art.PortId, data: DataContent): Unit = $

  def getValue(portId: Art.PortId): Option[DataContent] = $

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = $


  def logInfo(title: String, msg: String): Unit = $

  def logError(title: String, msg: String): Unit = $

  def logDebug(title: String, msg: String): Unit = $


  def tearDownSystemState(): Unit = $

  def setUpSystemState(): Unit = $

  // JH: Refactor
  def initializePhase(): Unit = $

  // JH: Refactor
  def computePhase(): Unit = $

  // JH: Refactor
  def finalizePhase(): Unit = $

  def time(): Art.Time = $

  /////////////
  // TESTING //
  /////////////

  /**
   * Calls the initialize entry points on all registered bridges.
   *
   * An analogue to this method does not show up in developer-written unit tests because
   * the it's invoked behind the scenes by the automatically generated unit test infrastructure
   * as a prelude to each test.
   *
   */
  def initTest(bridge: Bridge): Unit = $

  /**
   * Executes the application code in the Initialize Entry Point for the component (identified
   * by given bridge) for the purposes of testing.
   *
   * Precondition: testInit() has been called prior.
   *
   * Unlike [[Art.run()]], this method does NOT wrap compute calls in a try-catch block.
   * This is to ensure no exceptions are overlooked during testing.
  */
  def testInitialise(bridge: Bridge): Unit = $

  /**
   * Executes the application code in the Compute Entry Point for the component (identified
   * by given bridge) for the purposes of testing.
   *
   * Precondition: initTest() has been called prior.
   *
   * Unlike [[Art.run()]], this method does NOT wrap compute calls in a try-catch block.
   * This is to ensure no exceptions are overlooked during testing.
   */
  def testCompute(bridge: Bridge): Unit = $

  /**
   * Calls the finalize entry points on all registered bridges.
   *
   * An analogue to this method does not show up in developer-written unit tests because
   * the it's invoked behind the scenes by the automatically generated unit test infrastructure
   * as a postlude to each test.
   */
  def finalizeTest(bridge: Bridge): Unit = $

  // JH: Refactored
  //   add system test capability
  def initSystemTest(scheduler: Scheduler): Unit = $

  //  def executeSystemTest(): Unit = $

  // JH: Refactored
  //   add system test capability
  def finalizeSystemTest(): Unit = $

  /**
   * A method that replaces bridge.compute()'s calls to [[Art.sendOutput()]] in its equivalent testCompute() method.
   *
   * This method is currently a NO-OP, but may gain functionality later.
   *
   * @param eventPortIds the event ports to be "copied and cleared" (but currently nothing happens)
   * @param dataPortIds the data ports to be "copied and cleared" (but currently nothing happens)
   */
  def releaseOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = $

  /**
   * Because a bridge's testCompute() doesn't clear outputs, this method can be used by users to manually
   * clear the output if desired. This is useful for tests involving multiple dispatches.
   */
  def manuallyClearOutput(): Unit = $

  /**
   * Inserts a value into an "infrastructure in" port. For testing only, normally this is handled by Art.
   *
   * @param dstPortId the portId to place the passed [[DataContent]] into
   * @param data the [[DataContent]] which will be placed in the dstPort
   */
  def insertInInfrastructurePort(dstPortId: Art.PortId, data: DataContent): Unit = $

  /**
   * Returns the value of an infrastructure in port.
   *
   * @param portId the id of the INPUT infrastructure port to return a value from
   * @return If the port is non-empty, a [[Some]] of [[DataContent]]. Otherwise [[None]].
   */
  def observeInInfrastructurePort(portId: Art.PortId): Option[DataContent] = $

  /**
   * Returns the value of an infrastructure out port.
   *
   * @param portId the id of the OUTPUT port to return a value from
   * @return If the port is non-empty, a [[Some]] of [[DataContent]]. Otherwise [[None]].
   */
  def observeOutInfrastructurePort(portId: Art.PortId): Option[DataContent] = $

  /**
     * Returns the value of an application in port.
     *
     * @param portId the id of the INPUT port to return a value from
     * @return If the port is non-empty, a [[Some]] of [[DataContent]]. Otherwise [[None]].
     */
  def observeInPortVariable(portId: Art.PortId): Option[DataContent] = $

  /**
     * Returns the value of an application out port.
     *
     * @param portId the id of the OUTPUT port to return a value from
     * @return If the port is non-empty, a [[Some]] of [[DataContent]]. Otherwise [[None]].
     */
  def observeOutPortVariable(portId: Art.PortId): Option[DataContent] = $
}
