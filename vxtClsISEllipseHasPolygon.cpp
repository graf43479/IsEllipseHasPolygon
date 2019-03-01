//=============================================================================
//
// Code generated by [VAPS XT 4.0.1]
//
//=============================================================================

//=============================================================================
//                        I N C L U D E   F I L E S
//=============================================================================

#include "vxtClsISEllipseHasPolygon.h"
#include "vxtRTMathUtils.h"

//===========<vxtClsISEllipseHasPolygon::vxtClsISEllipseHasPolygon>============
// 
//  Summary: Constructor of the 'vxtClsISEllipseHasPolygon' class.
// 
//  Return Value: None.
// 
//=============================================================================
vxtClsISEllipseHasPolygon::vxtClsISEllipseHasPolygon(const InitData &a_rInitData)
: vxtBaseClsISEllipseHasPolygon(a_rInitData)
{
}

//===========<vxtClsISEllipseHasPolygon::~vxtClsISEllipseHasPolygon>===========
// 
//  Summary: Destructor of the 'vxtClsISEllipseHasPolygon' class.
// 
//  Return Value: None.
// 
//=============================================================================
vxtClsISEllipseHasPolygon::~vxtClsISEllipseHasPolygon()
{
}

//===============<vxtClsISEllipseHasPolygon::vExecuteOperation>================
// 
//  Summary: Execute the given operation of the object with the given data.
//           This method is only required when this widget is used
//           within VAPS XT built implementations e.g. Formats, Built XT objects 
//           (generic or A661 widgets)
// 
//  Return Value: None.
// 
//=============================================================================
void vxtClsISEllipseHasPolygon::vExecuteOperation(const vxtRTTopContext &a_rTopContext, vxtUShort a_OperationId, const vxtRTValue &a_rOperationData)
{
   switch(a_OperationId)
   {
      case DOUPDATE_OPER :
      {
		  vUpdate(a_rTopContext);
      }
      break;
      default :
      {
         vxtBaseClsISEllipseHasPolygon::vExecuteOperation(a_rTopContext, a_OperationId, a_rOperationData);
      }
      break;
   }
}

//====================<vxtClsISEllipseHasPolygon::vUpdate>=====================
// 
//  Summary: Update the object.
// 
//  Return Value: None.
// 
//=============================================================================
void vxtClsISEllipseHasPolygon::vUpdate(const vxtRTTopContext &)
{

	mp_IsConsist = s_Calculate(mp_Point1, mp_Point2, mp_Point3, mp_Point4, mp_EllipseCenter, mp_ARadius, mp_BRadius, mp_Angle);
}



vxtBool vxtClsISEllipseHasPolygon::s_Calculate(vxtTypCoord a_P1, vxtTypCoord a_P2, vxtTypCoord a_P3, vxtTypCoord a_P4, vxtTypCoord a_EllipseCenter, vxtFloat a_ARadius, vxtFloat a_BRadius, vxtFloat a_Angle)
{
	
	vxtBool ResultArray[4];

	ResultArray[0] = s_CalculateIsLineInEllipse(a_P1, a_P2, a_EllipseCenter, a_ARadius, a_BRadius, a_Angle);
	ResultArray[1] = s_CalculateIsLineInEllipse(a_P2, a_P3, a_EllipseCenter, a_ARadius, a_BRadius, a_Angle);
	ResultArray[2] = s_CalculateIsLineInEllipse(a_P3, a_P4, a_EllipseCenter, a_ARadius, a_BRadius, a_Angle);
	ResultArray[3] = s_CalculateIsLineInEllipse(a_P4, a_P1, a_EllipseCenter, a_ARadius, a_BRadius, a_Angle);

	for (vxtInt i = 0; i < 4; i++)
	{
		if (ResultArray[i]== VXT_TRUE)
		{
			return VXT_TRUE;
		}
	}
	return VXT_FALSE;

}


vxtBool vxtClsISEllipseHasPolygon::s_CalculateIsLineInEllipse(vxtTypCoord a_POne, vxtTypCoord a_PTwo, vxtTypCoord a_EllipseCenter, vxtFloat a_ARadius, vxtFloat a_BRadius, vxtFloat a_Angle)
{
	vxtDouble m, n, x1, x2, y1, y2, x0, y0, a, b = 0;
	vxtDouble Q = 0;

	x1 = a_POne.GetFieldX();
	x2 = a_PTwo.GetFieldX();
	y1 = a_POne.GetFieldY();
	y2 = a_PTwo.GetFieldY();
	x0 = a_EllipseCenter.GetFieldX();
	y0 = a_EllipseCenter.GetFieldY();
	a = a_ARadius;
	b = a_BRadius;

	m = cos(a_Angle);
	n = sin(a_Angle);

	vxtFloat A, B, C, D = 0;

	vxtDouble t = (y2 - y1) / (x2 - x1);

	A = vxtRTMathUtils::CastNumToFloat(pow((m + n*t), 2) / pow(a, 2) + pow((-n + m*t), 2) / pow(b, 2));
	B = vxtRTMathUtils::CastNumToFloat(2 * (m + n*t)*(-x0*m - n*x1*t + n*y1 - y0*n) / pow(a, 2) + 2 * (-n + m*t)*(x0*n - m*x1*t + m*y1 - y0*m) / pow(b, 2));
	C = vxtRTMathUtils::CastNumToFloat(pow((-x0*m - n*x1*t + n*y1 - y0*n), 2) / pow(a, 2) + pow((x0*n - m*x1*t + m*y1 - y0*m), 2) / pow(b, 2) - 1);

	D = B*B - 4 * A*C;

	vxtFloat ELimX1 = a_EllipseCenter.GetFieldX() - a_BRadius;
	vxtFloat ELimX2 = a_EllipseCenter.GetFieldX() + a_BRadius;
	vxtFloat ELimY1 = a_EllipseCenter.GetFieldY();
	vxtFloat ELimY2 = a_EllipseCenter.GetFieldY() + a_ARadius;


	vxtFloat xD1, xD2, Y, Y2 = 0;
	if (D < 0)
	{
		return VXT_FALSE;
	}
	if (D >= 0)
	{
		try{
			xD1 = (-B + sqrt(D)) / (2 * A);
			xD2 = (-B - sqrt(D)) / (2 * A);
		}
		catch (...) {
			xD1 = 0;
			xD2 = 0;
		}
		Y = (xD1 - x1) / (x2 - x1)*(y2 - y1) + y1;
		Y2 = (xD2 - x1) / (x2 - x1)*(y2 - y1) + y1;

		
		if (xD1>=xD2)
		{
			vxtFloat tmpX, tmpY;

			tmpX = xD1;
			tmpY = Y;
			xD1 = xD2;
			Y = Y2;
			xD2 = tmpX;
			Y2 = tmpY;
		}


		if (D > 0)
		{
			vxtBool c1, c2, c3, c4, c5 = VXT_FALSE;

			vxtTypCoord p1, p2;

			p1.vSetFieldX(-a*m + x0);
			p2.vSetFieldX(a*m + x0);

			p1.vSetFieldY(-a*n + y0);
			p2.vSetFieldY(a*n + y0);

			vxtFloat p1x, p2x, p1y, p2y;

			p1x = p1.GetFieldX();
			p2x = p2.GetFieldX();
			p1y = p1.GetFieldY();
			p2y = p2.GetFieldY();
			
			if (p1x>=p2x)
			{
				vxtFloat tmpX, tmpY;
				tmpX = p1x;
				tmpY = p1y;
				p1x = p2x;
				p1y = p2y;
				p2x = tmpX;
				p2y = tmpY;

			}
			
			vxtBool c2_00, c2_01, c2_10, c2_11, c3_1, c3_2, c3_3, c3_4; // = VXT_FALSE;

			c2_00 = c2_01 = c2_10 = c2_11 = VXT_FALSE;

			vxtTypCoord PP1, PP2;

			PP1.vSetFieldX(xD1);
			PP2.vSetFieldX(xD2);
			PP1.vSetFieldY(Y);
			PP2.vSetFieldY(Y2);
			
			//�1 - ��������: ���� �� ���� ���� ����������� �������
			if (x1 < x2)
			{
				if (y1 < y2)
				{
					c1 = (((x1 <= xD1) && (xD1 <= x2)) && ((y1 <= Y) && (Y <= y2))) || (((x1 <= xD2) && (xD2 <= x2)) && ((y1 <= Y2) && (Y2 <= y2)));
				}
				else
				{
					c1 = (((x1 <= xD1) && (xD1 <= x2)) && ((y2 <= Y) && (Y <= y1))) || (((x1 <= xD2) && (xD2 <= x2)) && ((y2 <= Y2) && (Y2 <= y1)));
				}

			}
			else
			{
				if (y1 < y2)
				{
					c1 = (((x2 <= xD1) && (xD1 <= x1)) && ((y1 <= Y) && (Y <= y2))) || (((x2 <= xD2) && (xD2 <= x1)) && ((y1 <= Y2) && (Y2 <= y2)));
				}
				else
				{
					c1 = (((x2 <= xD1) && (xD1 <= x1)) && ((y2 <= Y) && (Y <= y1))) || (((x2 <= xD2) && (xD2 <= x1)) && ((y2 <= Y2) && (Y2 <= y1)));
				}
			}
			
			//c4 - ��������: ���� �� 2 ����������� �������?

			if (x1 < x2)
			{
				if (y1 < y2)
				{
					c4 = (((x1 <= xD1) && (xD1 <= x2)) && ((y1 <= Y) && (Y <= y2))) && (((x1 <= xD2) && (xD2 <= x2)) && ((y1 <= Y2) && (Y2 <= y2)));
				}
				else
				{
					c4 = (((x1 <= xD1) && (xD1 <= x2)) && ((y2 <= Y) && (Y <= y1))) && (((x1 <= xD2) && (xD2 <= x2)) && ((y2 <= Y2) && (Y2 <= y1)));
				}

			}
			else
			{
				if (y1 < y2)
				{
					c4 = (((x2 <= xD1) && (xD1 <= x1)) && ((y1 <= Y) && (Y <= y2))) && (((x2 <= xD2) && (xD2 <= x1)) && ((y1 <= Y2) && (Y2 <= y2)));
				}
				else
				{
					c4 = (((x2 <= xD1) && (xD1 <= x1)) && ((y2 <= Y) && (Y <= y1))) && (((x2 <= xD2) && (xD2 <= x1)) && ((y2 <= Y2) && (Y2 <= y1)));
				}
			}
			//end c4

			//c2 = s_CalculateIsCrossTheLines2(p1, p2, PP1, PP2);
			//�2 - �������� �������� �� ���� ���� ����� ������� �������� � I � II ������� �������. ���� ��, �� ������� true
			c2 = s_CalculateIsPointInEllipse2(a_POne, a_EllipseCenter, a_ARadius, a_BRadius, a_Angle) || s_CalculateIsPointInEllipse2(a_PTwo, a_EllipseCenter, a_ARadius, a_BRadius, a_Angle);
			
			if (c2 == VXT_TRUE)
			{
				//������ ������ ���� ��� �����������
				//��� ������ ���� �����������, ��� ���� ���� �� ����� ������ ���� � I � II ��������� ������� 
				//���� ����������� ����������� - �� true
				return  VXT_TRUE;
			}

			//���� �� ����������� ������
			else if (c1)
			{
				//���� �� ���������� ������� ����� ������ "��������"
				if (c4)
				{
					//���� ���� ���� ����������� � I � II ��������� �������
					if (s_CalculateIsPointInEllipse2(PP1, a_EllipseCenter, a_ARadius, a_BRadius, a_Angle) || s_CalculateIsPointInEllipse2(PP2, a_EllipseCenter, a_ARadius, a_BRadius, a_Angle))
					{
						return VXT_TRUE;
					}
					else
					{
						return VXT_FALSE;
					}
					//return VXT_FALSE;

				}
			
				
				
				c3 = s_CalculateIsPointInEllipse2(a_POne, a_EllipseCenter, a_ARadius, a_BRadius, a_Angle) || s_CalculateIsPointInEllipse2(a_PTwo, a_EllipseCenter, a_ARadius, a_BRadius, a_Angle);
				if (c3)
				{
					return VXT_TRUE;
				}
				else
				{
					//���� �� ����������� ���� ������� I-II � III � IV ���������
					if (s_CalculateIsCrossTheLines2(p1, p2, a_POne, a_PTwo))
					{
						return VXT_TRUE;
					}
					else
					{
						return VXT_FALSE;
					}
					return VXT_FALSE;
				}
				return VXT_FALSE;
			}
			return VXT_FALSE;
		}
	}
}



// END OF FILE

//vxtBool vxtClsISEllipseHasPolygon::s_CalculateIsCrossTheLines(vxtTypCoord p1, vxtTypCoord p2, vxtTypCoord p3, vxtTypCoord p4)
//{
//	vxtFloat x, y, x1, x2, x3, x4, y1, y2, y3, y4;
//
//	x1 = p1.GetFieldX();
//	x2 = p2.GetFieldX();
//	x3 = p3.GetFieldX();
//	x4 = p4.GetFieldX();
//	y1 = p1.GetFieldY();
//	y2 = p2.GetFieldY();
//	y3 = p3.GetFieldY();
//	y4 = p4.GetFieldY();
//
//	vxtFloat A = x3*(y4 - y3) / (x4 - x3) - x1*(y2 - y1) / (x2 - x1) - y3 + y1; //y3 / (y4 - y3) - y1*(x2 - x1) / (x4 - x3) + (x1 + x3) / (x4 - x3);
//	vxtFloat B = (y4-y3) / (x4-x3) - (y2-y1) / (x2-x1); //1 / (y4 - y3) - (x2 - x1) / (x4 - x3);
//	x = A / B;
//
//	y = (x - x3)*(y4 - y3) / (x4 - x3) + y3;
//
//	
//if ((((x1 <= x)&&(x2 >= x)&&(x3 <= x)&&(x4 >= x))||((y1 <= y)&&(y2 >= y) &&(y3 <= y)&&(y4 >= y))))
//{
//	return VXT_TRUE;
//}
//
//return VXT_FALSE; 
//}

//
//vxtFloat vxtClsISEllipseHasPolygon::Max(vxtFloat a, vxtFloat b)
//{
//	return (a > b ? a : b);
//}
//
//
//vxtFloat vxtClsISEllipseHasPolygon::Min(vxtFloat a, vxtFloat b)
//{
//	return (a < b ? a : b);
//}


//vxtBool vxtClsISEllipseHasPolygon::s_CalculateIsPointInEllipse(vxtTypCoord a_Point, vxtTypCoord a_EllipseCenter, vxtFloat a_ARadius, vxtFloat a_BRadius, vxtFloat a_Angle){
//
//	vxtDouble m, n, x, y, x0, y0, a, b;
//	vxtDouble Q;
//
//	x = a_Point.GetFieldX();
//	y = a_Point.GetFieldY();
//	x0 = a_EllipseCenter.GetFieldX();
//	y0 = a_EllipseCenter.GetFieldY();
//	a = a_ARadius;
//	b = a_BRadius;
//
//	m = cos(a_Angle);
//	n = sin(a_Angle);
//
//	Q = pow(((x - x0)*m + (y - y0)*n), 2) / pow(a, 2) + pow((-(x - x0)*n + (y - y0)*m), 2) / pow(b, 2);
//
//	return(Q <= 1);
//
//}


vxtBool vxtClsISEllipseHasPolygon::s_CalculateIsPointInEllipse2(vxtTypCoord a_Point, vxtTypCoord a_EllipseCenter, vxtFloat a_ARadius, vxtFloat a_BRadius, vxtFloat a_Angle){

	vxtDouble m, n, x, y, x0, y0, a, b;
	vxtDouble Q;

	x = a_Point.GetFieldX();
	y = a_Point.GetFieldY();
	x0 = a_EllipseCenter.GetFieldX();
	y0 = a_EllipseCenter.GetFieldY();
	a = a_ARadius;
	b = a_BRadius;

	m = cos(a_Angle);
	n = sin(a_Angle);

	vxtFloat XM, YM;

	XM = x*m - y*n - x0;
	YM = y*m + x*n - y0;


		//X. = ((X���2*cos(A))-(Y���2*sin(A)))-X���1
		//	Y. = ((Y���2*cos(A)) + (X���2*sin(A))) - Y���1
	
	//Pow((-(Polygon_1.PtsArray[0].X - TransformGroup_1.Position.X) * Sin(TransformGroup_1.Rotation) + (Polygon_1.PtsArray[0].Y - TransformGroup_1.Position.Y) * Cos(TransformGroup_1.Rotation)), 1) / Pow(Ellipse_1.RadiusY, 1)
	vxtFloat b1 = pow((-(x - x0) * n + (y - y0) * m), 1) / pow(a, 1);

	Q = pow(((x - x0)*m + (y - y0)*n), 2) / pow(a, 2) + pow((-(x - x0)*n + (y - y0)*m), 2) / pow(b, 2);
	Q = Q - 0.01;
	
	return(Q <= 1 && b1 >= 0);
}



vxtBool vxtClsISEllipseHasPolygon::s_CalculateIsCrossTheLines2(vxtTypCoord p1, vxtTypCoord p2, vxtTypCoord p3, vxtTypCoord p4)
{
	vxtFloat x, y, x1, x2, x3, x4, y1, y2, y3, y4 = 0;

	x1 = p1.GetFieldX();
	x2 = p2.GetFieldX();
	x3 = p3.GetFieldX();
	x4 = p4.GetFieldX();
	y1 = p1.GetFieldY();
	y2 = p2.GetFieldY();
	y3 = p3.GetFieldY();
	y4 = p4.GetFieldY();

	vxtFloat k1, k2, b1, b2 = 0;

	if (y2==y1)
	{
		k1= 0;
	}
	else
	{
		k1 = (y2 - y1) / (x2 - x1);
	}

	if (y4==y3)
	{
		k2 = 0;
	}
	else
	{
		k2 = (y4 - y3) / (x4 - x3);
	}

	if (k1==k2)
	{
		return VXT_FALSE;
	}

	b1 = y1 - k1 * x1;
	b2 = y3 - k2 * x3;

	x = (b2 - b1) / (k1 - k2);
	y = k1*x + b1;

	//return ((x1 <= x4) && (x4 <= x2)) || ((x1 <= x3) && (x3 <= x2));
	vxtBool c1, c2, c3, c4 = VXT_FALSE;
	if (y1<y2)
	{
		if (y3<y4)
		{
			c1 = ((y1 <= y) && (y <= y2)) && ((y3 <= y) && (y <= y4));
		}
		else
		{
			c1 = ((y1 <= y) && (y <= y2)) && ((y4 <= y) && (y <= y3));
		}		
	}
	else
	{
		if (y3<y4)
		{
			c1 = ((y2 <= y) && (y <= y1)) && ((y3 <= y) && (y <= y4));
		}
		else
		{
			c1 = ((y2 <= y) && (y <= y1)) && ((y4 <= y) && (y <= y3));
		}
	}

	return (((x1 <= x) && (x <= x2)) && ((x3 <= x) && (x <= x4)) && c1);

}



vxtTypCoord vxtClsISEllipseHasPolygon::s_FindAnglePoints(vxtTypCoord a_EllipseCenter, vxtFloat a_ARadius, vxtFloat a_BRadius, vxtFloat a_Angle, vxtFloat a_AngleG, vxtInt a_flag){

	vxtFloat x0 = a_EllipseCenter.GetFieldX();
	vxtFloat y0 = a_EllipseCenter.GetFieldY();

	vxtFloat a = a_ARadius;
	vxtFloat b = a_BRadius;

	vxtFloat m = cos(a_Angle);
	vxtFloat n = sin(a_Angle);
	vxtFloat t = tan(a_AngleG);


	vxtFloat l1 = (m*m + 2 * m*n*t + n*n*t*t) / (a*a);
	vxtFloat l2 = (t*t*m*m-2*t*m*n+n*n) / (b*b);


	vxtFloat A = l1 + l2;
	vxtFloat B = -2 * x0*(l1 + l2); //     -2 * l1*x0 - 2 * l2*x0;
	vxtFloat C = l1*x0*x0 + l2*x0*x0 - 1;

	vxtFloat D = B*B - 4 * A*C;

	if (D<=0)
	{
		return vxtTypCoord();

	}

	vxtFloat x1 = (-B + sqrt(D)) / (2 * A);
	vxtFloat x2 = (-B - sqrt(D)) / (2 * A);

	vxtFloat y1 = y0 + (x1 - x0)*t;
	vxtFloat y2 = y0 + (x2 - x0)*t;

	if (a_flag==1)
	{
		return vxtTypCoord(x1, y1);
	}
	else
	{
		return vxtTypCoord(x2, y2);
	}

}