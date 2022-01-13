/*  ______________________________________________________________________________
        Author: Rib/Roach
        Created: 21/10/21
        Last modified: 13/1/22
     -------------------------------------------------------------------------------
        Filename: fn_adrenal.sqf
        Parameter(s): setAnimSpeedCoef, setCustomAimCoef
        Note: Reduces weapon sway for 2:30 / 150secs~, increases animation by 1.8x
    ________________________________________________________________________________
*/

private _coef = 0.1;
private _item = "StimAdrenal";

if(getCustomAimCoef player isEqualTo 1) then {
  player setCustomAimCoef 0.2;
  player setAnimSpeedCoef 1.8;
  uisleep 148;

  while {_coef < 1} do
  {
    _coef = _coef + 0.1;
    player setCustomAimCoef _coef;
    uisleep 1;
  };

  while {_coef > 1} do
  {
    _coef = _coef - 0.1;
    player setAnimSpeedCoef _coef;
    uisleep 1;
  };

  player setCustomaimCoef 1;
  player setAnimSpeedCoef 1;
};
