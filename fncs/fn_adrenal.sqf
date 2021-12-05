/*  ______________________________________________________________________________
        Author: Rib/Roach
        Created: 21/10/21
        Last modified: 25/10/21
     -------------------------------------------------------------------------------
        Filename: fn_adrenal.sqf
        Parameter(s): None
        Note: Reduces weapon sway for 2:30 / 150secs
    ________________________________________________________________________________
*/

private _coef = 0.1;
private _item = "stimadrenal";

if(getcustomAimCoef player isEqualTo 1) then {
  player setCustomaimCoef 0.2;
  player setAnimSpeedCoef 0.1;
  uisleep 150;

  while {_coef < 1} do
  {
    _coef = _coef + 0.1;
    player setcustomaimCoef _coef;
    player setanimspeedcoef _coef;
    uisleep 1;
  };
  player setCustomaimCoef 1;
  player setAnimSpeedCoef 1;
};
