#ifndef SIREUM_TYPE_H_org_sireum_MBox2_43CC67
#define SIREUM_TYPE_H_org_sireum_MBox2_43CC67

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// MBox2[art.Art.PortId, art.DataContent]
#include <type-art_Art_PortId.h>
#include <type-art_DataContent.h>

typedef struct MBox2_43CC67 *MBox2_43CC67;
struct MBox2_43CC67 {
  TYPE type;
  union art_DataContent value2;
  art_Art_PortId value1;
};

#define DeclNewMBox2_43CC67(x) struct MBox2_43CC67 x = { .type = TMBox2_43CC67 }

#ifdef __cplusplus
}
#endif

#endif