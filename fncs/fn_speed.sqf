/*  ______________________________________________________________________________
        Author: Rib/Roach
        Created: 12/1/22
        Last modified: 13/1/22
     -------------------------------------------------------------------------------
        Filename: fn_speed.sqf
        Parameter(s): setAnimSpeedCoef, 
        Note: increases animation speed for 240sec
    ________________________________________________________________________________
*/

private _coef = 0.25;
private _item = "StimUeed";

if(getAnimSpeedCoef player isEqualTo 1) then {
  player setAnimSpeedCoef 3.5;
  uisleep 239;

  while {_coef > 1} do
  {
    _coef = _coef - 0.25;
    player setAnimSpeedCoef _coef;
    uisleep 3;
  };
  
  player setAnimSpeedCoef 1;
};