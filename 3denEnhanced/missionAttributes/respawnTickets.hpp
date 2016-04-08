class TicketsBLUFOR
{
   displayName = $STR_respawnTickets_BLUFOR_displayName;
   tooltip = "";
   property = "Enh_respawnTickets_west";
   control = "Edit";
   expression = "if (!is3DEN && isMultiplayer) then {[west,_value] call BIS_fnc_respawnTickets};"
   defaultValue = "0";
   typeName = "NUMBER";
};
class TicketsOPFOR: TicketsBLUFOR
{
   displayName = $STR_respawnTickets_OPFOR_displayName;
   property = "Enh_respawnTickets_east";
   expression = "if (!is3DEN && isMultiplayer) then {[east,_value] call BIS_fnc_respawnTickets};"
};
class TicketsINDFOR: TicketsBLUFOR
{
   displayName = $STR_respawnTickets_INDFOR_displayName;
   property = "Enh_respawnTickets_independent";
   expression = "if (!is3DEN && isMultiplayer) then {[independent,_value] call BIS_fnc_respawnTickets};"
};
