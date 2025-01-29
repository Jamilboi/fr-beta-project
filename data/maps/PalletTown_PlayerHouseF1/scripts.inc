# 1 "data/maps/PalletTown_PlayerHouseF1/scripts.pory"

# 2 "data/maps/PalletTown_PlayerHouseF1/scripts.pory"
PalletTown_PlayerHouseF1_MapScripts::
# 3 "data/maps/PalletTown_PlayerHouseF1/scripts.pory"
	.byte 0

PalletTown_PlayerHouseF1_Mom::
# 8 "data/maps/PalletTown_PlayerHouseF1/scripts.pory"
	lock
# 9 "data/maps/PalletTown_PlayerHouseF1/scripts.pory"
	faceplayer
# 10 "data/maps/PalletTown_PlayerHouseF1/scripts.pory"
	checkplayergender
# 11 "data/maps/PalletTown_PlayerHouseF1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PalletTown_PlayerHouseF1_Mom_2
# 14 "data/maps/PalletTown_PlayerHouseF1/scripts.pory"
	msgbox PalletTown_PlayerHouseF1_Mom_Text_1
PalletTown_PlayerHouseF1_Mom_1:
# 16 "data/maps/PalletTown_PlayerHouseF1/scripts.pory"
	release
	return

PalletTown_PlayerHouseF1_Mom_2:
# 12 "data/maps/PalletTown_PlayerHouseF1/scripts.pory"
	msgbox PalletTown_PlayerHouseF1_Mom_Text_0
	goto PalletTown_PlayerHouseF1_Mom_1


PalletTown_PlayerHouseF1_Mom_Text_0:
# 12 "data/maps/PalletTown_PlayerHouseF1/scripts.pory"
	.string "All boys leave home someday. It said so\n"
	.string "on the TV.$"

PalletTown_PlayerHouseF1_Mom_Text_1:
# 14 "data/maps/PalletTown_PlayerHouseF1/scripts.pory"
	.string "All girls leave home someday. It said so\n"
	.string "on the TV.$"
