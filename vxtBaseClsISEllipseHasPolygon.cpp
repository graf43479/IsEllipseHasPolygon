//=============================================================================
//
// Code generated by [VAPS XT 4.0.1]
//
//=============================================================================

//=============================================================================
//                        I N C L U D E   F I L E S
//=============================================================================

#include "vxtBaseClsISEllipseHasPolygon.h"
#include "vxtRTMathUtils.h"


#if VXT_CFG_INTROSPECTION_SUPPORT
vxtRTProperty vxtBaseClsISEllipseHasPolygon::S_PROPS[]  = {
   vxtRTProperty("Point1", POINT1_PROP, VXT_TYPE_INFO(vxtTypCoord)), 
   vxtRTProperty("Point2", POINT2_PROP, VXT_TYPE_INFO(vxtTypCoord)), 
   vxtRTProperty("Point3", POINT3_PROP, VXT_TYPE_INFO(vxtTypCoord)), 
   vxtRTProperty("Point4", POINT4_PROP, VXT_TYPE_INFO(vxtTypCoord)), 
   vxtRTProperty("EllipseCenter", ELLIPSECENTER_PROP, VXT_TYPE_INFO(vxtTypCoord)), 
   vxtRTProperty("ARadius", ARADIUS_PROP, VXT_TYPE_INFO(vxtFloat)), 
   vxtRTProperty("BRadius", BRADIUS_PROP, VXT_TYPE_INFO(vxtFloat)), 
   vxtRTProperty("IsConsist", ISCONSIST_PROP, VXT_TYPE_INFO(vxtBool)), 
   vxtRTProperty("Angle", ANGLE_PROP, VXT_TYPE_INFO(vxtFloat))
};
#endif

#if VXT_EDITOR_MODE
const vxtChar* vxtBaseClsISEllipseHasPolygon::s_pDependentTypesDescriptor = "Coord=Struct(X:Float,Y:Float)";
#endif

#if VXT_CFG_DBG_ERROR_MESSAGE_SUPPORT || VXT_CFG_INTROSPECTION_SUPPORT
const vxtChar* const vxtBaseClsISEllipseHasPolygon::CLASS_NAME = "ISEllipseHasPolygon";
#endif

//=======<vxtBaseClsISEllipseHasPolygon::vxtBaseClsISEllipseHasPolygon>========
// 
//  Summary: Constructor of the 'vxtBaseClsISEllipseHasPolygon' class.
// 
//  Return Value: None.
// 
//=============================================================================
vxtBaseClsISEllipseHasPolygon::vxtBaseClsISEllipseHasPolygon(const InitData &a_rInitData)
: vxtRTCodedCalculator()
, mp_Point1(a_rInitData.mp_Point1)
, mp_Point2(a_rInitData.mp_Point2)
, mp_Point3(a_rInitData.mp_Point3)
, mp_Point4(a_rInitData.mp_Point4)
, mp_EllipseCenter(a_rInitData.mp_EllipseCenter)
, mp_ARadius(a_rInitData.mp_ARadius)
, mp_BRadius(a_rInitData.mp_BRadius)
, mp_IsConsist(a_rInitData.mp_IsConsist)
, mp_Angle(a_rInitData.mp_Angle)
{
}

//=======<vxtBaseClsISEllipseHasPolygon::~vxtBaseClsISEllipseHasPolygon>=======
// 
//  Summary: Destructor of the 'vxtBaseClsISEllipseHasPolygon' class.
// 
//  Return Value: None.
// 
//=============================================================================
vxtBaseClsISEllipseHasPolygon::~vxtBaseClsISEllipseHasPolygon()
{
}

#if VXT_CFG_DBG_ERROR_MESSAGE_SUPPORT || VXT_CFG_INTROSPECTION_SUPPORT
//===============<vxtBaseClsISEllipseHasPolygon::pGetClassName>================
// 
//  Summary: Gets the class name.
// 
//  Return Value: The class name.
// 
//=============================================================================
const vxtChar* vxtBaseClsISEllipseHasPolygon::pGetClassName() const
{
   return CLASS_NAME;
}
#endif

#if VXT_CFG_INTROSPECTION_SUPPORT
//================<vxtBaseClsISEllipseHasPolygon::GetNumProps>=================
// 
//  Summary: Get the number of properties.
// 
//  Return Value: Number of properties.
// 
//=============================================================================
vxtUShort vxtBaseClsISEllipseHasPolygon::GetNumProps() const
{
   return VXT_USHORT_ARRAY_SIZE(S_PROPS);
}
#endif

#if VXT_CFG_SET_PROPERTY_SUPPORT
//================<vxtBaseClsISEllipseHasPolygon::vSetProperty>================
// 
//  Summary: Set part or all of the value of a property.
// 
//  Return Value: None.
// 
//=============================================================================
void vxtBaseClsISEllipseHasPolygon::vSetProperty(const vxtRTTopContext &a_rTopContext, const vxtRTPropIdPath &a_rIds, const vxtRTValue &a_rValue)
{
   switch(a_rIds.GetFirstPropId())
   {
      case POINT1_PROP :
      {
         vSetPoint1Prop(a_rTopContext, a_rIds.rGetRestPath(), a_rValue);
      }
      break;
      case POINT2_PROP :
      {
         vSetPoint2Prop(a_rTopContext, a_rIds.rGetRestPath(), a_rValue);
      }
      break;
      case POINT3_PROP :
      {
         vSetPoint3Prop(a_rTopContext, a_rIds.rGetRestPath(), a_rValue);
      }
      break;
      case POINT4_PROP :
      {
         vSetPoint4Prop(a_rTopContext, a_rIds.rGetRestPath(), a_rValue);
      }
      break;
      case ELLIPSECENTER_PROP :
      {
         vSetEllipseCenterProp(a_rTopContext, a_rIds.rGetRestPath(), a_rValue);
      }
      break;
      case ARADIUS_PROP :
      {
         vSetARadiusProp(a_rTopContext, a_rValue.GetFloat());
      }
      break;
      case BRADIUS_PROP :
      {
         vSetBRadiusProp(a_rTopContext, a_rValue.GetFloat());
      }
      break;
      case ISCONSIST_PROP :
      {
         vSetIsConsistProp(a_rTopContext, a_rValue.GetBool());
      }
      break;
      case ANGLE_PROP :
      {
         vSetAngleProp(a_rTopContext, a_rValue.GetFloat());
      }
      break;
      default :
      {
         // Error: invalid prop id
      }
   }
}
#endif

#if VXT_CFG_OBJECT_GET_PROPERTY_SUPPORT
//================<vxtBaseClsISEllipseHasPolygon::GetProperty>=================
// 
//  Summary: Get part or all of the value of a property.
// 
//  Return Value: Part or all of the value of a property.
// 
//=============================================================================
vxtRTValue vxtBaseClsISEllipseHasPolygon::GetProperty(const vxtRTPropIdPath &a_rIds)
{
   vxtRTValue Ret;

   switch(a_rIds.GetFirstPropId())
   {
      case POINT1_PROP :
      {
         Ret = mp_Point1.GetRTValue(a_rIds.rGetRestPath());
      }
      break;
      case POINT2_PROP :
      {
         Ret = mp_Point2.GetRTValue(a_rIds.rGetRestPath());
      }
      break;
      case POINT3_PROP :
      {
         Ret = mp_Point3.GetRTValue(a_rIds.rGetRestPath());
      }
      break;
      case POINT4_PROP :
      {
         Ret = mp_Point4.GetRTValue(a_rIds.rGetRestPath());
      }
      break;
      case ELLIPSECENTER_PROP :
      {
         Ret = mp_EllipseCenter.GetRTValue(a_rIds.rGetRestPath());
      }
      break;
      case ARADIUS_PROP :
      {
         Ret = vxtRTValue(mp_ARadius);
      }
      break;
      case BRADIUS_PROP :
      {
         Ret = vxtRTValue(mp_BRadius);
      }
      break;
      case ISCONSIST_PROP :
      {
         Ret = vxtRTValue(mp_IsConsist, vxtRTValue::IS_BOOL);
      }
      break;
      case ANGLE_PROP :
      {
         Ret = vxtRTValue(mp_Angle);
      }
      break;
      default :
      {
         // The default Ret is invalid (pGetData() returns VXT_NULL)
      }
   }
   return Ret;
}
#endif

//=============<vxtBaseClsISEllipseHasPolygon::HasUpdateFunction>==============
// 
//  Summary: This function must exist if vUpdate member function has a body.
// 
//  Return Value: VXT_TRUE.
// 
//=============================================================================
vxtBool vxtBaseClsISEllipseHasPolygon::HasUpdateFunction()
{
   return VXT_TRUE;
}

//===============<vxtBaseClsISEllipseHasPolygon::vSetPoint1Prop>===============
// 
//  Summary: Set the value of the 'Point1' property.
// 
//  Return Value: None.
// 
//=============================================================================
void vxtBaseClsISEllipseHasPolygon::vSetPoint1Prop(const vxtRTTopContext &, const vxtTypCoord &a_rPoint1)
{
   vxtBool Changed = VXT_FALSE;
   mp_Point1.vAssign(a_rPoint1, Changed);

   if (Changed)
   {
      vRequireUpdate();
   }
}

//===============<vxtBaseClsISEllipseHasPolygon::vSetPoint1Prop>===============
// 
//  Summary: Set the value of the 'Point1' property.
// 
//  Return Value: None.
// 
//=============================================================================
void vxtBaseClsISEllipseHasPolygon::vSetPoint1Prop(const vxtRTTopContext &, const vxtRTPropIdPath &a_rIds, const vxtRTValue &a_rValue)
{
   vxtBool Changed = VXT_FALSE;
   mp_Point1.vAssign(a_rIds, a_rValue, Changed);

   if (Changed)
   {
      vRequireUpdate();
   }
}

//===============<vxtBaseClsISEllipseHasPolygon::vSetPoint2Prop>===============
// 
//  Summary: Set the value of the 'Point2' property.
// 
//  Return Value: None.
// 
//=============================================================================
void vxtBaseClsISEllipseHasPolygon::vSetPoint2Prop(const vxtRTTopContext &, const vxtTypCoord &a_rPoint2)
{
   vxtBool Changed = VXT_FALSE;
   mp_Point2.vAssign(a_rPoint2, Changed);

   if (Changed)
   {
      vRequireUpdate();
   }
}

//===============<vxtBaseClsISEllipseHasPolygon::vSetPoint2Prop>===============
// 
//  Summary: Set the value of the 'Point2' property.
// 
//  Return Value: None.
// 
//=============================================================================
void vxtBaseClsISEllipseHasPolygon::vSetPoint2Prop(const vxtRTTopContext &, const vxtRTPropIdPath &a_rIds, const vxtRTValue &a_rValue)
{
   vxtBool Changed = VXT_FALSE;
   mp_Point2.vAssign(a_rIds, a_rValue, Changed);

   if (Changed)
   {
      vRequireUpdate();
   }
}

//===============<vxtBaseClsISEllipseHasPolygon::vSetPoint3Prop>===============
// 
//  Summary: Set the value of the 'Point3' property.
// 
//  Return Value: None.
// 
//=============================================================================
void vxtBaseClsISEllipseHasPolygon::vSetPoint3Prop(const vxtRTTopContext &, const vxtTypCoord &a_rPoint3)
{
   vxtBool Changed = VXT_FALSE;
   mp_Point3.vAssign(a_rPoint3, Changed);

   if (Changed)
   {
      vRequireUpdate();
   }
}

//===============<vxtBaseClsISEllipseHasPolygon::vSetPoint3Prop>===============
// 
//  Summary: Set the value of the 'Point3' property.
// 
//  Return Value: None.
// 
//=============================================================================
void vxtBaseClsISEllipseHasPolygon::vSetPoint3Prop(const vxtRTTopContext &, const vxtRTPropIdPath &a_rIds, const vxtRTValue &a_rValue)
{
   vxtBool Changed = VXT_FALSE;
   mp_Point3.vAssign(a_rIds, a_rValue, Changed);

   if (Changed)
   {
      vRequireUpdate();
   }
}

//===============<vxtBaseClsISEllipseHasPolygon::vSetPoint4Prop>===============
// 
//  Summary: Set the value of the 'Point4' property.
// 
//  Return Value: None.
// 
//=============================================================================
void vxtBaseClsISEllipseHasPolygon::vSetPoint4Prop(const vxtRTTopContext &, const vxtTypCoord &a_rPoint4)
{
   vxtBool Changed = VXT_FALSE;
   mp_Point4.vAssign(a_rPoint4, Changed);

   if (Changed)
   {
      vRequireUpdate();
   }
}

//===============<vxtBaseClsISEllipseHasPolygon::vSetPoint4Prop>===============
// 
//  Summary: Set the value of the 'Point4' property.
// 
//  Return Value: None.
// 
//=============================================================================
void vxtBaseClsISEllipseHasPolygon::vSetPoint4Prop(const vxtRTTopContext &, const vxtRTPropIdPath &a_rIds, const vxtRTValue &a_rValue)
{
   vxtBool Changed = VXT_FALSE;
   mp_Point4.vAssign(a_rIds, a_rValue, Changed);

   if (Changed)
   {
      vRequireUpdate();
   }
}

//===========<vxtBaseClsISEllipseHasPolygon::vSetEllipseCenterProp>============
// 
//  Summary: Set the value of the 'EllipseCenter' property.
// 
//  Return Value: None.
// 
//=============================================================================
void vxtBaseClsISEllipseHasPolygon::vSetEllipseCenterProp(const vxtRTTopContext &, const vxtTypCoord &a_rEllipseCenter)
{
   vxtBool Changed = VXT_FALSE;
   mp_EllipseCenter.vAssign(a_rEllipseCenter, Changed);

   if (Changed)
   {
      vRequireUpdate();
   }
}

//===========<vxtBaseClsISEllipseHasPolygon::vSetEllipseCenterProp>============
// 
//  Summary: Set the value of the 'EllipseCenter' property.
// 
//  Return Value: None.
// 
//=============================================================================
void vxtBaseClsISEllipseHasPolygon::vSetEllipseCenterProp(const vxtRTTopContext &, const vxtRTPropIdPath &a_rIds, const vxtRTValue &a_rValue)
{
   vxtBool Changed = VXT_FALSE;
   mp_EllipseCenter.vAssign(a_rIds, a_rValue, Changed);

   if (Changed)
   {
      vRequireUpdate();
   }
}

//==============<vxtBaseClsISEllipseHasPolygon::vSetARadiusProp>===============
// 
//  Summary: Set the value of the 'ARadius' property.
// 
//  Return Value: None.
// 
//=============================================================================
void vxtBaseClsISEllipseHasPolygon::vSetARadiusProp(const vxtRTTopContext &, vxtFloat a_ARadius)
{
   if (mp_ARadius != a_ARadius)
   {
      mp_ARadius = a_ARadius;
      vRequireUpdate();
   }
}

//==============<vxtBaseClsISEllipseHasPolygon::vSetBRadiusProp>===============
// 
//  Summary: Set the value of the 'BRadius' property.
// 
//  Return Value: None.
// 
//=============================================================================
void vxtBaseClsISEllipseHasPolygon::vSetBRadiusProp(const vxtRTTopContext &, vxtFloat a_BRadius)
{
   if (mp_BRadius != a_BRadius)
   {
      mp_BRadius = a_BRadius;
      vRequireUpdate();
   }
}

//=============<vxtBaseClsISEllipseHasPolygon::vSetIsConsistProp>==============
// 
//  Summary: Set the value of the 'IsConsist' property.
// 
//  Return Value: None.
// 
//=============================================================================
void vxtBaseClsISEllipseHasPolygon::vSetIsConsistProp(const vxtRTTopContext &, vxtBool a_IsConsist)
{
   //--------------------------------------------------------------------------
   // Coding Standard Deviation: SCS.LAN.EXPR.BOOL
   // Description: Boolean argument to equal/not equal
   // Rationale: False positive: The intent of this rule is to prevent comparison
   //            with a boolean constant; this is not the case.
   //--------------------------------------------------------------------------
   //lint -e{731} Suppress SCS.LAN.EXPR.BOOL
   if (mp_IsConsist != a_IsConsist)
   {
      mp_IsConsist = a_IsConsist;
      vRequireUpdate();
   }
}

//===============<vxtBaseClsISEllipseHasPolygon::vSetAngleProp>================
// 
//  Summary: Set the value of the 'Angle' property.
// 
//  Return Value: None.
// 
//=============================================================================
void vxtBaseClsISEllipseHasPolygon::vSetAngleProp(const vxtRTTopContext &, vxtFloat a_Angle)
{
   if (mp_Angle != a_Angle)
   {
      mp_Angle = a_Angle;
      vRequireUpdate();
   }
}

#if VXT_CFG_INTROSPECTION_SUPPORT
//================<vxtBaseClsISEllipseHasPolygon::aGetPropInfo>================
// 
//  Summary: Get a pointer on the properties of this object.
// 
//  Return Value: A pointer to the properties of this object.
// 
//=============================================================================
vxtRTProperty * vxtBaseClsISEllipseHasPolygon::aGetPropInfo()
{
   return S_PROPS;
}
#endif

#if VXT_CFG_INTROSPECTION_SUPPORT
//================<vxtBaseClsISEllipseHasPolygon::aGetPropInfo>================
// 
//  Summary: Get a pointer on the properties and the number of properties of
//           this object.
// 
//  Return Value: A pointer to the properties of this object.
// 
//=============================================================================
const vxtRTProperty * vxtBaseClsISEllipseHasPolygon::aGetPropInfo(vxtUShort &a_rNumProps)
{
   a_rNumProps = VXT_USHORT_ARRAY_SIZE(S_PROPS);
   return S_PROPS;
}
#endif

#if VXT_EDITOR_MODE
const vxtChar * vxtBaseClsISEllipseHasPolygon::pGetDependentTypesDescriptor()
{
   return s_pDependentTypesDescriptor;
}
#endif




// END OF FILE

