class Activate
{
   displayName = $STR_saveGearAllPlayers_displayName;
   tooltip = $STR_saveGearAllPlayers_tooltip;
   property = "Enh_saveGearPlayers";
   control = "Checkbox";
   expression =
   "\
      if (!is3DEN && _value && isMultiplayer) then\
      {\
         {\
            if (isNil {player getVariable 'Enh_savedLoadout'}) then\
            {\
               player setVariable ['Enh_savedLoadout',getUnitloadout player];\
               player addEventHandler ['respawn',{player setUnitLoadout (player getVariable 'Enh_savedLoadout')}];\
            }\
         } remoteExec ['call',0,true];\
      };\
   ";
   defaultValue = "false";
};



/*
if (!is3DEN && _value && isMultiplayer) then\
{\
   {\
      if !(player getVariable ['Enh_gearSaved',false]) then\
      {\
         [player,[profileNamespace,'Enh_savedInventory']] call BIS_fnc_saveInventory;\
         player setVariable ['Enh_gearSaved',true];\
         player addEventHandler ['respawn', {\
         [_this select 0,[profileNamespace,'Enh_savedInventory']] call BIS_fnc_loadInventory;\
         }];\
      };\
   } remoteExec ['call',0,true];\
};\
