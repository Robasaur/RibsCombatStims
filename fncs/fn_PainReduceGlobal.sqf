/*
 * Author: rib
 * Calls ACE bandage handling and reduces pain. globally or something eh its whatever.
 *
 * Arguments:
 * 0: The medic <OBJECT>
 * 1: The patient <OBJECT>
 * 2: Selection Name <STRING>
 * 3: Treatment classname <STRING>
 *
 * Public: Yes
 */

params ["_caller", "_target", "_selection", "_className"];

_this call ace_medical_treatment_fnc_bandage;

[_target, _className] remoteExecCall ["meuPainReduceLocal", _target];