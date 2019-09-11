(*Atividade: COnfigurar as regras 1 e 4*
Regra 1: por segurança, pelo menos uma fonte de luz está ligada quando quarto está ocupado;
 *Regra 4: para energia, se a sala não estiver ocupada, nenhuma luz está ligado e o radiador
está desligado ou no modo de proteção contra congelamento;*)

node  radiator(up1,up2,down1,down2,c1,c2: bool) returns (estate,power: int)
let
	automaton
		state Off do
			estate = 0;
			power = 0;
		unless up1 or not c1 then Frost_protection


		state Frost_protection do
			estate = 1;
			power = 300;
		unless up1 & c1 then Eco
		| down1 or not c1 then Off
		   | up2 & c2 then High

		state Eco do
			estate = 2;
			power = 1500;
		unless up2 & c2 then High
		| down1 or not c1 then Frost_protection


		state High do
			estate = 1;
			power = 2000;
		unless down2 or not c2 then Frost_protection
		| down1 or not c1 then Eco
	end

tel
node room(presence:bool) returns(roomoc:bool)
let
	automaton

		state Empty do
			roomoc=false;
		unless presence then Ocupied

		state Ocupied do
			roomoc=true;
		unless  not presence then Empty


	end
tel

node lamp(c:bool) returns(estado:bool)
let
	automaton

		state Off do
		
		unless  c then On

		state On do

		unless not c then Off

	end
tel
node contolador(up1,up2,down1,down2,c1,c2,presence,ligar,l1,l2:bool) returns(estate,power,roomc,ligado:bool)
	contract
	var regra1,regra4:bool;
let  
regra1 = not(ligar= false & ligado= false);
regra4 = not ((roomc= true & ligado = false) & (estate= 0 or estate = 1 )) ;

tel
	enforce (regra1 & regra4)
with (c1,c2,presence,ligar,l1,l2: bool)
let  
(estate,power) = inlined radiator(up1,up2,down1,down2,c1,c2);
(roomc) = inlined room(presence);
(ligado) = inlined lamp(ligar,l1,l2);
tel
