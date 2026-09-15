/*
 * SPDX-FileCopyrightText: The LineageOS Project
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stddef.h>

#include "teecl.h"

void TEEC_AllocateSharedMemory(void** context, void* shared_memory) {
    (void)context;
    (void)shared_memory;
}

void TEEC_CloseSession(void** session) {
    (void)session;
}

void TEEC_FinalizeContext(void** context) {
    (void)context;
}

void TEEC_InitializeContext(void* name, void** context) {
    (void)name;
    (void)context;
}

void TEEC_InvokeCommand(void** session, int command, void* operation, int* return_origin) {
    (void)session;
    (void)command;
    (void)operation;
    (void)return_origin;
}

void TEEC_RegisterSharedMemory(void** context, void* shared_memory) {
    (void)context;
    (void)shared_memory;
}

void TEEC_ReleaseSharedMemory(void* shared_memory) {
    (void)shared_memory;
}

void TEECS_OpenSession(void** context, void** session, const char* destination, void* ta,
                       size_t ta_size, int connection_method, void* connection_data,
                       void* operation, int* return_origin) {
    (void)context;
    (void)session;
    (void)destination;
    (void)ta;
    (void)ta_size;
    (void)connection_method;
    (void)connection_data;
    (void)operation;
    (void)return_origin;
}
