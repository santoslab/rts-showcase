# SysML Model — Installation and Codegen

This page covers installation, codegen, and verification for the **SysML model** of
the RTS (Reactor Trip System).  The SysML model uses Sireum directly for codegen
(no OSATE required).  Generated code lives in [`hamr/slang/`](hamr/slang/) (JVM target).

## Installation

1. Clone this repo and cd into it

   ```sh
   git clone https://github.com/sireum/rts-showcase.git
   cd rts-showcase
   ```

1. Install Sireum by following the [official installation instructions](https://hamr.sireum.org/hamr-doc/installation/)

1. Clone the [SysMLv2 AADL Libraries](https://github.com/santoslab/sysml-aadl-libraries)

    Either clone the libraries directly into the RTS's `sysml` directory

    ```sh
    git clone https://github.com/santoslab/sysml-aadl-libraries.git sysmlv2/sysml/sysml-aadl-libraries
    ```

    Or, clone the libraries elsewhere and set the ``SYSML_AADL_LIBRARIES`` environment variable

    ```sh
    git clone https://github.com/santoslab/sysml-aadl-libraries.git
    export SYSML_AADL_LIBRARIES=$(pwd)/sysml-aadl-libraries
    ```

## Codegen

### JVM (Slang)

1. *OPTIONAL* Rerun codegen targeting the JVM

    **Requires:**
    - Sireum
    - SysMLv2 AADL Libraries

    Launch the Slash script [sysmlv2/sysml/bin/run-hamr.cmd](sysml/bin/run-hamr.cmd) from the command line targeting the JVM

    ```sh
    sysmlv2/sysml/bin/run-hamr.cmd --platform JVM
    ```

1. Compile the Proyek project

    **Requires:**
    - Sireum

    ```sh
    sireum proyek compile sysmlv2/hamr/slang
    ```

1. Run the unit tests

    **Requires:**
    - Sireum

    ```sh
    sireum proyek test sysmlv2/hamr/slang
    ```

1. Verify code-level contracts with Logika

    **Requires:**
    - Sireum

    ```sh
    sireum proyek logika --all sysmlv2/hamr/slang
    ```
