//=============================================================================
//
// Code generated by [VAPS XT 4.0.1]
//
//=============================================================================

#ifndef VXTBASECLSISELLIPSEHASPOLYGON_H
#define VXTBASECLSISELLIPSEHASPOLYGON_H


#ifndef VXTCLSISELLIPSEHASPOLYGON_SPEC
  #if VXT_STATIC_LIB
    #define VXTCLSISELLIPSEHASPOLYGON_SPEC
  #else
    #include "vxtExport.h"
    #ifdef VXT_STATIC_LIB_WITH_EXPORTS
      #define VXTCLSISELLIPSEHASPOLYGON_SPEC VXT_EXPORT_SPEC
    #else
      #ifdef  VXTCLSISELLIPSEHASPOLYGON_DLL
        #define VXTCLSISELLIPSEHASPOLYGON_SPEC VXT_EXPORT_SPEC
      #else
        #define VXTCLSISELLIPSEHASPOLYGON_SPEC VXT_IMPORT_SPEC
      #endif
    #endif
  #endif
#endif

//=============================================================================
//                        I N C L U D E   F I L E S
//=============================================================================

#include "vxtRTCodedCalculator.h"
#include "vxtRTMacros.h"
#include "vxtRTPropIdPath.h"
#include "vxtRTTopContext.h"
#include "vxtRTTypes.h"
#include "vxtRTValue.h"
#include "vxtTypCoord.h"


//=============================================================================
//                                C L A S S
//=============================================================================

class VXTCLSISELLIPSEHASPOLYGON_SPEC vxtBaseClsISEllipseHasPolygon : public vxtRTCodedCalculator
{
   
   
public:

#if VXT_CFG_DBG_ERROR_MESSAGE_SUPPORT || VXT_CFG_INTROSPECTION_SUPPORT
   static const vxtChar* const CLASS_NAME;
#endif
   
   // Property IDs
   static const vxtRTPropId POINT1_PROP        = vxtRTCodedCalculator::NUMBER_OF_PROPS;
   static const vxtRTPropId POINT2_PROP        = vxtRTCodedCalculator::NUMBER_OF_PROPS + 1U;
   static const vxtRTPropId POINT3_PROP        = vxtRTCodedCalculator::NUMBER_OF_PROPS + 2U;
   static const vxtRTPropId POINT4_PROP        = vxtRTCodedCalculator::NUMBER_OF_PROPS + 3U;
   static const vxtRTPropId ELLIPSECENTER_PROP = vxtRTCodedCalculator::NUMBER_OF_PROPS + 4U;
   static const vxtRTPropId ARADIUS_PROP       = vxtRTCodedCalculator::NUMBER_OF_PROPS + 5U;
   static const vxtRTPropId BRADIUS_PROP       = vxtRTCodedCalculator::NUMBER_OF_PROPS + 6U;
   static const vxtRTPropId ISCONSIST_PROP     = vxtRTCodedCalculator::NUMBER_OF_PROPS + 7U;
   static const vxtRTPropId ANGLE_PROP         = vxtRTCodedCalculator::NUMBER_OF_PROPS + 8U;
   // NUMBER_OF_PROPS intentionally hides the base class constant with the same name.
   static const vxtRTPropId NUMBER_OF_PROPS    = vxtRTCodedCalculator::NUMBER_OF_PROPS + 9U;

   // Operation IDs
   static const vxtUShort DOUPDATE_OPER   = vxtRTCodedCalculator::NUMBER_OF_OPERS;
   // NUMBER_OF_OPERS intentionally hides the base class constant with the same name.
   static const vxtUShort NUMBER_OF_OPERS = vxtRTCodedCalculator::NUMBER_OF_OPERS + 1U;


   struct InitData
   {
      vxtTypCoord::InitData   mp_Point1;
      vxtTypCoord::InitData   mp_Point2;
      vxtTypCoord::InitData   mp_Point3;
      vxtTypCoord::InitData   mp_Point4;
      vxtTypCoord::InitData   mp_EllipseCenter;
      vxtFloat                mp_ARadius;
      vxtFloat                mp_BRadius;
      vxtBool                 mp_IsConsist;
      vxtFloat                mp_Angle;
   };

   
   virtual ~vxtBaseClsISEllipseHasPolygon();

   
#if VXT_CFG_SET_PROPERTY_SUPPORT
   virtual void vSetProperty(const vxtRTTopContext &a_rTopContext, const vxtRTPropIdPath &a_rIds, const vxtRTValue &a_rValue);
#endif

   
#if VXT_CFG_OBJECT_GET_PROPERTY_SUPPORT
   virtual vxtRTValue GetProperty(const vxtRTPropIdPath &a_rIds);
#endif

   // Remove following function if vUpdate member function is missing or empty.

   virtual vxtBool HasUpdateFunction();

   const vxtTypCoord & rGetPoint1Prop() const
   {
      return mp_Point1;
   }

   void vSetPoint1Prop(const vxtRTTopContext &a_rTopContext, const vxtRTPropIdPath &a_rIds, const vxtRTValue &a_rValue);

   void vSetPoint1Prop(const vxtRTTopContext &a_rTopContext, const vxtTypCoord & a_rPoint1);

   const vxtTypCoord & rGetPoint2Prop() const
   {
      return mp_Point2;
   }

   void vSetPoint2Prop(const vxtRTTopContext &a_rTopContext, const vxtRTPropIdPath &a_rIds, const vxtRTValue &a_rValue);

   void vSetPoint2Prop(const vxtRTTopContext &a_rTopContext, const vxtTypCoord & a_rPoint2);

   const vxtTypCoord & rGetPoint3Prop() const
   {
      return mp_Point3;
   }

   void vSetPoint3Prop(const vxtRTTopContext &a_rTopContext, const vxtRTPropIdPath &a_rIds, const vxtRTValue &a_rValue);

   void vSetPoint3Prop(const vxtRTTopContext &a_rTopContext, const vxtTypCoord & a_rPoint3);

   const vxtTypCoord & rGetPoint4Prop() const
   {
      return mp_Point4;
   }

   void vSetPoint4Prop(const vxtRTTopContext &a_rTopContext, const vxtRTPropIdPath &a_rIds, const vxtRTValue &a_rValue);

   void vSetPoint4Prop(const vxtRTTopContext &a_rTopContext, const vxtTypCoord & a_rPoint4);

   const vxtTypCoord & rGetEllipseCenterProp() const
   {
      return mp_EllipseCenter;
   }

   void vSetEllipseCenterProp(const vxtRTTopContext &a_rTopContext, const vxtRTPropIdPath &a_rIds, const vxtRTValue &a_rValue);

   void vSetEllipseCenterProp(const vxtRTTopContext &a_rTopContext, const vxtTypCoord & a_rEllipseCenter);

   vxtFloat GetARadiusProp() const
   {
      return mp_ARadius;
   }

   void vSetARadiusProp(const vxtRTTopContext &a_rTopContext, vxtFloat a_ARadius);

   vxtFloat GetBRadiusProp() const
   {
      return mp_BRadius;
   }

   void vSetBRadiusProp(const vxtRTTopContext &a_rTopContext, vxtFloat a_BRadius);

   vxtBool GetIsConsistProp() const
   {
      return mp_IsConsist;
   }

   void vSetIsConsistProp(const vxtRTTopContext &a_rTopContext, vxtBool a_IsConsist);

   vxtFloat GetAngleProp() const
   {
      return mp_Angle;
   }

   void vSetAngleProp(const vxtRTTopContext &a_rTopContext, vxtFloat a_Angle);

   
#if VXT_CFG_INTROSPECTION_SUPPORT
   static const vxtRTProperty *aGetPropInfo(vxtUShort &a_rNumProps);
#endif

   
#if VXT_CFG_DBG_ERROR_MESSAGE_SUPPORT || VXT_CFG_INTROSPECTION_SUPPORT
   virtual const vxtChar* pGetClassName() const;
#endif

   
#if VXT_EDITOR_MODE
   static const vxtChar* pGetDependentTypesDescriptor();
#endif

   
protected:

   explicit vxtBaseClsISEllipseHasPolygon(const InitData &a_rInitData);

   
   
   //-----------------------------------------------------------------------------
   // Coding Standard Deviation: SCS.LAN.CLS.INH.PROT, MISRA-C++ Rule 11-0-1
   // Description: Give subclasses access to member data by declaring protected
   //              accessors and mutators.
   // Rationale: There are few special cases in which the data members cannot
   //             be made private (e.g. custom get/set fcns, string/array properties
   //              needing to be set via streams in A661 cases). 
   //-----------------------------------------------------------------------------
   // PRQA S 2101 10
   
   vxtTypCoord mp_Point1;
   vxtTypCoord mp_Point2;
   vxtTypCoord mp_Point3;
   vxtTypCoord mp_Point4;
   vxtTypCoord mp_EllipseCenter;
   vxtFloat    mp_ARadius;
   vxtFloat    mp_BRadius;
   vxtBool     mp_IsConsist;
   vxtFloat    mp_Angle;

#if VXT_CFG_INTROSPECTION_SUPPORT
   virtual vxtUShort GetNumProps() const;
   virtual vxtRTProperty *aGetPropInfo();
   static vxtRTProperty S_PROPS[];
#endif

private:

   // Disallow copy
   vxtBaseClsISEllipseHasPolygon( const vxtBaseClsISEllipseHasPolygon& );
   vxtBaseClsISEllipseHasPolygon& operator=( const vxtBaseClsISEllipseHasPolygon& );

   
#if VXT_EDITOR_MODE
   static const vxtChar* s_pDependentTypesDescriptor;
#endif
};


#endif // VXTBASECLSISELLIPSEHASPOLYGON_H

// END OF FILE

