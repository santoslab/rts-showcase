<table><tr><td> 
<a href="https://github.com/santoslab/rts-showcase/actions/workflows/CI-macOS.yml"><img src="https://github.com/santoslab/rts-showcase/actions/workflows/CI-macOS.yml/badge.svg" alt="macOS"> </a>
<a href="https://github.com/santoslab/rts-showcase/actions/workflows/CI_linux.yml"><img src="https://github.com/santoslab/rts-showcase/actions/workflows/CI_linux.yml/badge.svg" alt="Linux"></a>
<a href="https://github.com/santoslab/rts-showcase/actions/workflows/CI-windows.yml"><img src="https://github.com/santoslab/rts-showcase/actions/workflows/CI-windows.yml/badge.svg" alt="Windows"></a>
<a href="https://github.com/santoslab/rts-showcase/actions/workflows/CI-camkes.yml"><img src="https://github.com/santoslab/rts-showcase/actions/workflows/CI-camkes.yml/badge.svg" alt="CAmkES"></a>
</td></tr></table>


This repository provides artifacts developed by the Kansas State University (KSU) SAnToS research group that illustrate how the KSU HAMR tool can support formal-methods-integrated model-based development for nuclear reactor trip systems.  This work was inspired by the Galois HARDENS project.

The Galois HARDENS project (https://galois.com/project/high-assurance-rigorous-digital-engineering-for-nuclear-safety-hardens/), funded by the Nuclear Regulatory Commission (NRC), built a collection of demonstration artifacts to illustrate how rigourous digital engineering (RDE), i.e., rigorous, formal-methods-based, model-driven development practices could produce a nuclear reactor protection system (Reactor Trip System - RTS) with high levels of assurance.  A distinguishing feature of the HARDENS efforts is that it produced *end-to-end* and *open source* artifacts to illustrate its advocated approach.  Part of the end-to-end development process illustrate how formal architecture models (in SysMLv2) could be used to define system architecture and then how system implementation artifacts (in Galois's Cryptol framework) could be constructed to provide an implementation aligned with the models.

Due to resource limitations on the HARDENS project, Galois engineers did not automatically generate Cryptol system implementation artifacts from SysMLv2 models.  Instead, in a best effort approach, Galois engineers illustrated how it might be possible to auto-generate implementation artifacts from models.

To illustrate one approach for how the automated "models to implementation" capability might be achieved, KSU SAnToS worked with Galois in an informal collaboration to apply the KSU HAMR (https://hamr.sireum.org) model-driven development environment to generate software-based implementations of the *Actuation* (trip signal voting logic) of the HARDENS demonstrator.   The following HAMR-related artifacts were produced by KSU engineers:

* HAMR-compatible AADL versions of the original HARDENS SysMLv2 for the Actuation Subsystem
* HAMR-compatible SysMLv2 versions of the the original HARDENS SysMLv2 for the Actuation Subsystem
* Formal specifications of the voting/trip logic in the actuation system using KSU/Galois' GUMBO AADL component contract language
* Component implementation skeletons for the Actuation Subsystem in KSU's Slang high-assurance programming language (an engineer implements the
functionality of the components in Slang, using the widely-used IntelliJ IDE)
* Executable versions of the GUMBO contracts and scalable, server-based automated property-based unit testing for Slang components (used to support a continuous integration environment for the system)
* Code-level Slang logical contract versions of the GUMBO contracts
* SMT-based verification showing that Slang code conforms to code-level Slang contracts and model-level GUMBO contracts using KSU's Logika integrated verification
* Automated server-based system testing for the Actuation subsystem (supporting integration and system testing in a continuous integration environment)
* A deployment of the Actuation Subsystem on the JVM and Javascript for simulation and visualization of system functionality
* By transpiling Slang to C, a deployment of the subsystem on Linux
* By transpiling Slang to C, a deployment of the subsystem on the verified seL4 microkernel.  The C code in both of these cases was compiled using the verified CompCert C compiler

Note: On a newly initiated DARPA PROVERS project led by Collins Aerospace, KSU will be extending HAMR to support Rust, which will enable an easy addition of Rust-based implementations to the items above.

Overall, this effort demonstrates how HAMR's model-driven development and integrated formal methods capabilities can be applied to help realize the RDE vision championed within the HARDENS project.

Below, we provide a links to several of the key artifacts derived on the original HARDENS artifacts (https://github.com/GaloisInc/HARDENS)

AADL Models and GUMBO Contracts
==================================

[Here](aadl/aadl/packages/Actuation.aadl) are the AADL models for the HARDENS Actuation Subsystem.  The models include GUMBO Annex formal specifications (see [here](aadl/aadl/packages/Actuation.aadl#L40-L55) for an example) of the functional behavior of subsystem components.   From these models, HAMR will generate artifacts for verification, automated testing, and deployment on multiple platforms as indicated above.

SysMLv2 Models
===============

[Here](sysmlv2/sysml/Actuation.sysml) are the SysMLv2 models for the HARDENS Actuation Subsystem.  These models were derived from the original Galois HARDENS SysMLv2 models with only minimal modifications need to align with how HAMR recognizes AADL-like features embedded in SysMLv2.   Unlike the AADL models, these models DO NOT include GUMBO contracts since we have not yet implemented contract features in SysMLv2 (we aim to do that in upcoming DARPA-funded work).

Slang Component Implementations and Logika Contracts
=====================================================

[Here](aadl/hamr/slang/src/main/component/RTS/Actuation/CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic.scala) is an example of a Slang component implementation of the pressure logic component of the Actuation subsystem.  HAMR generates the code template for the component, and the developer completes the implementation by coding the 'initialise' and 'timeTriggered' methods.   HAMR also automatically translates the GUMBO model-level contracts (e.g., [here](aadl/aadl/packages/Actuation.aadl#L40-L55)) into Logika code-level contracts (e.g., [here](aadl/hamr/slang/src/main/component/RTS/Actuation/CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic.scala#L30-#L51)) for the component.  The Logika SMT-based verifier automatically verifies that the developer supplied code conforms to the code-level contract (and then transitively, to the GUMBO model-level contract), thus provide strong traceability to the model-level contracts derived from system requirements. 

<!-- (XXX eventually, insert a screen shot of Logika verification). -->

HAMR generation of Executable Contracts and Unit Testing Infrastructure from AADL and GUMBO contracts
======================================================================================================

HAMR generates code-level executable versions of GUMBO contracts and side-effect free boolean functions/methods.  These methods are used to support automated unit testing, system testing, and run-time monitoring.   [Here](aadl/hamr/slang/src/main/bridge/RTS/Actuation/CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_GumboX.scala) is an example of the executable contracts for the pressure logic component.  [Here](aadl/hamr/slang/src/test/bridge/RTS/Actuation/CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic_GumboX_UnitTests.scala) is an example of the automatically-generated property-based using testing test runner.   
HAMR's unit testing facility produces a variety of coverage reports. 

<!-- (XXXX eventually include a screen shot of the code coverage for a selected component).   HAMR also auto-generates a server-based test runners, allowing the unit testing to deployed on a Jenkins-based server. -->

HAMR / Sireum translation of Slang Component Implementations to C
===================================================================

Using Sireum's Slang to C transpiler, HAMR generates C implementations of the system components.  An example of the C code for the pressure logic component can be found [here](aadl/hamr/c/nix/library/RTS/Actuation/RTS_Actuation_CoincidenceLogic_i_actuationSubsystem_actuationUnit1_pressureLogic_coincidenceLogic.c).

HAMR Automated Deployments to JVM, Linux and seL4
===================================================================

HAMR also generates system infrastructure and platform artifacts to create system deployments.  The readme for the AADL version of RTS [here](aadl/readme.md) details how to build and deploy the project on the JVM, Linux, and seL4 platforms.