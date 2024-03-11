# This file will not be overwritten so is safe to edit

cmake_minimum_required(VERSION 3.8.2)

set(KernelDomainSchedule "${CMAKE_CURRENT_LIST_DIR}/kernel/domain_schedule.c" CACHE INTERNAL "")
set(KernelNumDomains 17 CACHE STRING "" FORCE)

# the default camkes stack size causes most of the components to
# crash.  204800 = 50*(4*1024) which was large enough to prevent
# instrumentation mock thread from crashing ... actual stack size 
# is likely smaller than that
set(CAmkESDefaultStackSize 204800 CACHE STRING "" FORCE)