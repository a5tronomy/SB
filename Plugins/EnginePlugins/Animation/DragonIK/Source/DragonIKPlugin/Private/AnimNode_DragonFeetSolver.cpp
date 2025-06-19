#include "AnimNode_DragonFeetSolver.h"

FAnimNode_DragonFeetSolver::FAnimNode_DragonFeetSolver() {
    this->ik_type = EIK_Type_Plugin::ENUM_Two_Bone_Ik;
    this->trace_type = EIKTrace_Type_Plugin::ENUM_LineTrace_Type;
    this->Trace_Radius = 0.00f;
    this->loc_interp_type = EInterpoLocation_Type_Plugin::ENUM_DivisiveLoc_Interp;
    this->rot_interp_type = EInterpoRotation_Type_Plugin::ENUM_DivisiveRot_Interp;
    this->RotInterp_DifferenceValue = 0.00f;
    this->automatic_leg_make = false;
    this->Use_OptionalRef_Feet_As_Ref = false;
    this->enable_solver = false;
    this->shift_speed = 0.00f;
    this->Location_Lerp_Speed = 0.00f;
    this->feet_rotation_speed = 0.00f;
    this->Trace_Channel = TraceTypeQuery1;
    this->Anti_Trace_Channel = TraceTypeQuery1;
    this->line_trace_upper_height = 0.00f;
    this->line_trace_down_height = 0.00f;
    this->Use_Anti_Channel = false;
    this->Ignore_Lerping = false;
    this->Ignore_Location_Lerping = false;
    this->Should_Rotate_Feet = false;
    this->OwnerBaseComponent = NULL;
    this->show_trace_in_game = false;
    this->Enable_Pitch = false;
    this->Enable_Roll = false;
    this->Foot_01_Height_Offset = 0.00f;
    this->Foot_02_Height_Offset = 0.00f;
    this->Foot_03_Height_Offset = 0.00f;
    this->Foot_04_Height_Offset = 0.00f;
}

