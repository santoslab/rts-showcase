package RTS.Actuation

import org.sireum._
import RTS.Actuation._
import RTS._
import org.sireum.Random.Impl.Xoshiro256

// This file will not be overwritten so is safe to edit

class OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_GumboX_Tests extends OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_GumboX_TestHarness_ScalaTest_Generator {

  // set verbose to T to see pre/post state values and generated unit tests
  // that can be copied/pasted to replay a test
  override val verbose: B = F

  // set failOnUnsatPreconditions to T if the unit tests should fail when either
  // SlangCheck is never able to satisfy a datatype's filter or the generated
  // test vectors are never able to satisfy an entry point's assume pre-condition
  override val failOnUnsatPreconditions: B = F

  // profiles that will be used to generate the incoming port values
  override def getProfiles_P: MSZ[OrLogic_i_actuationSubsystem_actuationUnit2_tempPressureTripOut_orLogic_Profile_P] = {
    return MSZ(getDefaultProfile_P)
  }
}