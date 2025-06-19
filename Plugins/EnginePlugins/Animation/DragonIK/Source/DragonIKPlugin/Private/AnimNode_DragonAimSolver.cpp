#include "AnimNode_DragonAimSolver.h"

FAnimNode_DragonAimSolver::FAnimNode_DragonAimSolver() {
    this->Lookat_Radius = 0.00f;
    this->Lookat_Clamp = 0.00f;
    this->Limbs_Clamp = 0.00f;
    this->Downward_Dip_Multiplier = 0.00f;
    this->Side_Move_Multiplier = 0.00f;
    this->Side_Down_Multiplier = 0.00f;
    this->Up_Rot_Clamp = 0.00f;
    this->Lock_Legs = false;
    this->ignore_elbow_modification = false;
    this->ignore_separate_hand_solving = false;
    this->Use_Natural_Method = false;
    this->Head_Use_Separate_Clamp = false;
    this->automatic_leg_make = false;
    this->enable_solver = false;
    this->loc_interp_type = EInterpoLocation_Type_Plugin::ENUM_DivisiveLoc_Interp;
    this->Interpolation_Speed = 0.00f;
}

