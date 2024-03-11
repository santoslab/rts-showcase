# RTS

## Build Sireum

Follow the normal Sireum installation instructions: [https://github.com/sireum/kekinian#setup](https://github.com/sireum/kekinian#setup).  For example, on Linux/Mac you would do the following

```bash
git clone --recursive https://github.com/sireum/kekinian
kekinian/bin/build.cmd setup  # for non-POSIX shell, prefix with sh
```

The rest of these instructions assumes you've done the following after the build completes:

```
export SIREUM_HOME=<clone-dir>/kekinian
export PATH=$SIREUM_HOME/bin:$PATH
```

## Install FMIDE 

This creates a version of OSATE called FMIDE (Formal Methods IDE) that includes the CASE plugins

```bash
$SIREUM_HOME/bin/install/fmide.cmd --verbose
```

##  Clone This Repository

```bash
git clone https://github.com/santoslab/rts-showcase.git

cd rts-showcase/aadl
```

## Regenerate Code (Optional)

Refer to the run script [run-hamr.cmd](aadl/bin/run-hamr.cmd)
to see what options were passed to codegen if you want to generate code from inside FMIDE.  

If targeting the JVM then from the command line you'd do:

```bash
./aadl/bin/run-hamr.cmd JVM
```

## Opening in IVE

The run-hamr.sh script sets up the IVE project.  If you didn't run the script then you can run the following to set up the IVE project.


```bash
sireum proyek ive hamr/slang/
```

## Running on JVM

Execute the following to run the system from the command line 

```
sireum proyek run ./hamr/slang RTS.Demo
```

Refer to the comments in [hamr/slang/bin/project.cmd](hamr/slang/bin/project.cmd#L38) 
for IVE based instructions

## Running Under Linux

The results of running the following script have already been checked into the repo.  It adds additional Slang code to your project along with the necessary C infrastructure code.  You would need to rerun this if you make changes to the AADL model that you want reflected in the generated code.

```bash
./aadl/bin/run-hamr.cmd Linux
```

Any Slang code reachable from the JVM Demo's main method will be transpiled down to C. This includes component behavior code since 
the `exclude-component-impl` option was not used.
The behavior code uses sequences so run this customized version of the 
transpiler script to ensure enough space is allocated for them (see changes at line [69](hamr/slang/bin/transpile-cust.cmd#L79))

```
./hamr/slang/bin/transpile-cust.cmd
```

Now compile and run the code (you'll of course need a C compiler like gcc and CMake)

```bash
./hamr/c/bin/compile.cmd
./hamr/c/bin/run.sh
```


# Running Under SeL4 with Slang Integration

1. Generate code for seL4 (the results of running this script were checked into the repo)

    ```bash
    ./aadl/bin/run-hamr.cmd seL4
    ```

1. The behavior code uses sequences so run this customized version of the seL4 
transpiler script to ensure enough space is allocated for them (see changes at line [34](hamr/slang/bin/transpile-sel4-cust.cmd#L34) and [55](hamr/slang/bin/transpile-sel4-cust.cmd#L55))

    ```
    ./hamr/slang/bin/transpile-sel4-cust.cmd
    ```

1. Install [Docker](https://docs.docker.com/get-docker/)

1. Pull/run the 2022_08_18 CAmkES Docker container (simulation fails using latest). 
Remove the ``--rm`` option if you want to reuse the container

    ```
    mkdir ~/temp
    docker run --rm -it -w /home -v ~/temp:/home/temp -v $(pwd):/home/rts trustworthysystems/camkes:2022_08_18 bash
    ````

1. Inside the container do the following

    ```
    git config --global user.email ""
    git config --global user.name ""

    mkdir temp/camkes
    cd temp/camkes
    repo init -u https://github.com/seL4/camkes-manifest.git
    repo sync

    cd ../../    
    ```

1. Now build the image and simulate it under QEMU

    ```
    ./hamr/camkes/bin/run-camkes.sh -c /home/temp/camkes -s
    ```

1. Type ``^a x`` to exit QEMU

