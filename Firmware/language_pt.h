/**
 * Portuguese
 *
 * LCD Menu Messages
 * Please note these are limited to 17 characters!
 *
 */

#define WELCOME_MSG							CUSTOM_MENDEL_NAME " pronta."
#define MSG_SD_INSERTED						"Cartao inserido"
#define MSG_SD_REMOVED						"Cartao removido"
#define MSG_MAIN							"Menu principal"
#define MSG_DISABLE_STEPPERS				"Desativar motores"
#define MSG_AUTO_HOME						"Ir para origem"
#define MSG_SET_HOME_OFFSETS				"Def desvio origem"
#define MSG_SET_ORIGIN						"Definir origem"
#define MSG_COOLDOWN						"Arrefecer"
#define MSG_SWITCH_PS_ON					"Ligar alimentacao"
#define MSG_SWITCH_PS_OFF					"Desligar aliment."
#define MSG_MOVE_AXIS						"Mover eixos"
#define MSG_MOVE_X							"Mover X"
#define MSG_MOVE_Y							"Mover Y"
#define MSG_MOVE_Z							"Mover Z"
#define MSG_MOVE_E							"Extrusora"
#define MSG_SPEED							"Velocidade"
#define MSG_NOZZLE							"Bico"
#define MSG_NOZZLE1							"Bico2"
#define MSG_NOZZLE2							"Bico3"
#define MSG_BED								"Cama"
#define MSG_FAN_SPEED						"Veloc. Ventil."
#define MSG_FLOW							"Fluxo"
#define MSG_FLOW0							"Fluxo 0"
#define MSG_FLOW1							"Fluxo 1"
#define MSG_FLOW2							"Fluxo 2"
#define MSG_CONTROL							"Controlo"
#define MSG_MIN								" \002 Min"
#define MSG_MAX								" \002 Max"
#define MSG_FACTOR							" \002 Fator"
#define MSG_TEMPERATURE						"Temperatura"
#define MSG_MOTION							"Movimento"
#define MSG_VOLUMETRIC						"Filamento"
#define MSG_VOLUMETRIC_ENABLED				"E em mm3"
#define MSG_STORE_EPROM						"Guardar na mem."
#define MSG_LOAD_EPROM						"Ler da memoria"
#define MSG_RESTORE_FAILSAFE				"Rest. Val. Segur."
#define MSG_REFRESH							"\xF8" "Atualizar"
#define MSG_WATCH							"Ecra inform."
#define MSG_TUNE							"Afinar"
#define MSG_PAUSE_PRINT						"Pausa impressao"
#define MSG_RESUME_PRINT					"Retomar impressao"
#define MSG_STOP_PRINT						"Parar impressao"
#define MSG_CARD_MENU						"Imprimir do SD"
#define MSG_NO_CARD							"Sem cartao SD"
#define MSG_DWELL							"Em suspensao..."
#define MSG_USERWAIT						"Espera utilizad."
#define MSG_RESUMING						"Retomar impressao"
#define MSG_PRINT_ABORTED					"Impress. abortada"
#define MSG_NO_MOVE							"Sem movimento."
#define MSG_KILLED							"CANCELADA. "
#define MSG_STOPPED							"PARADA. "
#define MSG_FILAMENTCHANGE					"Trocar filamento"
#define MSG_INIT_SDCARD						"Iniciar cartao SD"
#define MSG_CNG_SDCARD						"Trocar cartao SD"
#define MSG_BABYSTEP_X						"Micropassos X"
#define MSG_BABYSTEP_Y						"Micropassos Y"
#define MSG_BABYSTEP_Z						"Ajuste ao vivo Z"
#define MSG_ADJUSTZ							"Auto ajustar Z?"
#define MSG_PICK_Z							"Escolha impressao"

#define MSG_SETTINGS						"Definicoes"
#define MSG_PREHEAT							"Pre aquecimento"
#define MSG_UNLOAD_FILAMENT					"Descargar filam."
#define MSG_LOAD_FILAMENT					"Carga filamento"
#define MSG_LOAD_FILAMENT_1					"Carga filamento 1"
#define MSG_LOAD_FILAMENT_2					"Carga filamento 2"
#define MSG_LOAD_FILAMENT_3					"Carga filamento 3"
#define MSG_LOAD_FILAMENT_4					"Carga filamento 4"
#define MSG_UNLOAD_FILAMENT_1				"Descarga filam. 1"
#define MSG_UNLOAD_FILAMENT_2				"Descarga filam. 2"
#define MSG_UNLOAD_FILAMENT_3				"Descarga filam. 3"
#define MSG_UNLOAD_FILAMENT_4				"Descarga filam. 4"
#define MSG_UNLOAD_ALL						"Descarregar todos"
#define MSG_LOAD_ALL						"Carregar todos"

#define MSG_RECTRACT						"Retracao"
#define MSG_ERROR							"ERRO:"
#define MSG_PREHEAT_NOZZLE					"Pre-aqueca bico!"
#define MSG_SUPPORT							"Suporte"
#define MSG_CORRECTLY						"Troca correta?"
#define MSG_YES								"Sim"
#define MSG_NO								"Nao"
#define MSG_NOT_LOADED 						"Fil. nao carregado"
#define MSG_NOT_COLOR 						"Cor nao limpida"
#define MSG_LOADING_FILAMENT				"Carregando filam."
#define MSG_PLEASE_WAIT						"Espere p. favor"
#define MSG_LOADING_COLOR					"Carregando cor"
#define MSG_CHANGE_SUCCESS					"Troca sucedida!"
#define MSG_PRESS							"e pressione botao"
#define MSG_INSERT_FILAMENT					"Insira filamento"
#define MSG_CHANGING_FILAMENT				"Trocando filamento!"


#define MSG_SILENT_MODE_ON					"Modo   [silencio]"
#define MSG_SILENT_MODE_OFF					"Modo  [Alta pot.]" 
#define MSG_AUTO_MODE_ON					"Modo  [Pot. auto]"
#define MSG_REBOOT							"Reinicie impressora"
#define MSG_TAKE_EFFECT						" para aplicar"											

#define MSG_Enqueing						"Col. em espera \""
#define MSG_POWERUP							"Ligar"
#define MSG_CONFIGURATION_VER				" Ultima Act.: "
#define MSG_FREE_MEMORY						" Mem. livre: "
#define MSG_PLANNER_BUFFER_BYTES			" PlannerBufferBytes: "
#define MSG_OK								"ok"
#define MSG_ERR_CHECKSUM_MISMATCH			"erro verific., Ult. Linha: "
#define MSG_ERR_NO_CHECKSUM					"Sem verific. com linha num., Ult. Linha: "
#define MSG_BEGIN_FILE_LIST					"Inic. lista fich."
#define MSG_END_FILE_LIST					"Fim lista fich."
#define MSG_M104_INVALID_EXTRUDER			"M104 Extrus. invalida "
#define MSG_M105_INVALID_EXTRUDER			"M105 Extrus. invalida "
#define MSG_M200_INVALID_EXTRUDER			"M200 Extrus. invalida "
#define MSG_M218_INVALID_EXTRUDER			"M218 Extrus. invalida "
#define MSG_M221_INVALID_EXTRUDER			"M221 Extrus. invalida "
#define MSG_ERR_NO_THERMISTORS				"Sem termistor - Sem temperatura"
#define MSG_M109_INVALID_EXTRUDER			"M109 Extrus. invalida "
#define MSG_HEATING							"Aquecendo"
#define MSG_HEATING_COMPLETE				"Aquec. concluido"
#define MSG_BED_HEATING						"Aquecimento cama"
#define MSG_BED_DONE						"Aq. cama concl."
#define MSG_M115_REPORT						"FIRMWARE_NAME:Marlin V1.0.2; Sprinter/grbl mashup for gen6 FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" CUSTOM_MENDEL_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
#define MSG_ERR_KILLED						"Imp. parada. Chamada kill()!"
#define MSG_ERR_STOPPED						"Imp. parou devido a erros. Corrija erro e use M999 para reiniciar. (Temperatura por defeito. Configure apos reinicio)"
#define MSG_RESEND							"Reenvio: "
#define MSG_M119_REPORT						"Indic. estado fim curso"
#define MSG_ENDSTOP_HIT						"ACIONADO"
#define MSG_ENDSTOP_OPEN					"aberto"

#define MSG_SD_CANT_OPEN_SUBDIR				"Impos. ver subdir"
#define MSG_SD_INIT_FAIL					"Inic. SD falhou"
#define MSG_SD_VOL_INIT_FAIL				"In. volume falhou"
#define MSG_SD_OPENROOT_FAIL				"Abrir Root falhou"
#define MSG_SD_CARD_OK						"Cartao SD ok"
#define MSG_SD_WORKDIR_FAIL					"Abrir workDir falhou"
#define MSG_SD_OPEN_FILE_FAIL				"Falha abrir, Fich: "
#define MSG_SD_FILE_OPENED					"Fich. aberto: "
#define MSG_SD_FILE_SELECTED				"Fich. selec."
#define MSG_SD_WRITE_TO_FILE				"Escrita no fich: "
#define MSG_SD_PRINTING_BYTE				"Escrev. byte no SD"
#define MSG_SD_NOT_PRINTING					"SD sem impress."
#define MSG_SD_ERR_WRITE_TO_FILE			"erro escrita para fich."
#define MSG_SD_CANT_ENTER_SUBDIR			"Impos. abrir subdir: "

#define MSG_STEPPER_TOO_HIGH				"Taxa Steprate alta: "
#define MSG_ENDSTOPS_HIT					"fim curso lig.: "
#define MSG_ERR_COLD_EXTRUDE_STOP			"prevencao extrus. fria"
#define MSG_BABYSTEPPING_X					"Micropassos X"
#define MSG_BABYSTEPPING_Y					"Micropassos Y"
#define MSG_BABYSTEPPING_Z					"Micropassos Z"
#define MSG_SERIAL_ERROR_MENU_STRUCTURE		"Erro estrut. menus"

#define MSG_LANGUAGE_NAME					"Portugues"
#define MSG_LANGUAGE_SELECT					"Selec. lingua"
#define MSG_PRUSA3D							"prusa3d.com"
#define MSG_PRUSA3D_FORUM					"forum.prusa3d.com"
#define MSG_PRUSA3D_HOWTO					"howto.prusa3d.com"

#define MSG_SELFTEST_ERROR					"Erro teste inic.!"
#define MSG_SELFTEST_PLEASECHECK			"Favor verificar :"	
#define MSG_SELFTEST_NOTCONNECTED			"Sem conexao"
#define MSG_SELFTEST_HEATERTHERMISTOR		"Aquec./Termistor"
#define MSG_SELFTEST_BEDHEATER				"Cama / Aquec."
#define MSG_SELFTEST_WIRINGERROR			"Erro cablagem"
#define MSG_SELFTEST_ENDSTOPS				"Fins de curso"
#define MSG_SELFTEST_MOTOR					"Motor"
#define MSG_SELFTEST_ENDSTOP				"Fim de curso"
#define MSG_SELFTEST_ENDSTOP_NOTHIT			"Fim curso nao ativ."
#define MSG_SELFTEST_OK						"Autoteste OK"
#define MSG_LOOSE_PULLEY					"Folga correia"

#define MSG_SELFTEST_FAN					"Teste ventilador";
#define MSG_SELFTEST_COOLING_FAN			"Ventilador frontal?";
#define MSG_SELFTEST_EXTRUDER_FAN			"Ventilador esquerdo?";
#define MSG_SELFTEST_FAN_YES				"Com rotacao";
#define MSG_SELFTEST_FAN_NO					"Sem rotacao";

#define MSG_STATS_TOTALFILAMENT				"Total filamento :"
#define MSG_STATS_TOTALPRINTTIME			"Total tempo imp. :"
#define MSG_STATS_FILAMENTUSED				"Filamento usado:  "
#define MSG_STATS_PRINTTIME					"Tempo impressao:  "
#define MSG_SELFTEST_START					"Autoteste        "
#define MSG_SELFTEST_CHECK_ENDSTOPS			"Verif. fim curso "
#define MSG_SELFTEST_CHECK_HOTEND			"Verif. bloco aq. "  
#define MSG_SELFTEST_CHECK_X				"Verif. eixo X    "
#define MSG_SELFTEST_CHECK_Y				"Verif. eixo Y    "
#define MSG_SELFTEST_CHECK_Z				"Verif. eixo Z    "
#define MSG_SELFTEST_CHECK_BED				"Verif. cama"
#define MSG_SELFTEST_CHECK_ALLCORRECT		"Tudo correto     "
#define MSG_SELFTEST						"Autoteste    "
#define MSG_SELFTEST_FAILED					"Autoteste falhou "
#define MSG_STATISTICS						"Estatisticas  "
#define MSG_USB_PRINTING					"Impressao USB  "
#define MSG_HOMEYZ							"Calibracao Z"
#define MSG_HOMEYZ_PROGRESS					"Calibrando Z"
#define MSG_HOMEYZ_DONE						"Calibr. concluida"

#define MSG_SHOW_END_STOPS					"Mostra fins curso"
#define MSG_CALIBRATE_BED					"Calibracao XYZ"
#define MSG_CALIBRATE_BED_RESET				"Limpar calib. XYZ"

#define MSG_MOVE_CARRIAGE_TO_THE_TOP 		"Calibrando XYZ. Rode o botao para mover o eixo Z para cima ate ao fim de curso. Clique quando concluir."
#define MSG_MOVE_CARRIAGE_TO_THE_TOP_Z 		"Calibrando Z. Rode o botao para mover o eixo Z para cima ate ao fim de curso. Clique quando concluir."

#define MSG_CONFIRM_NOZZLE_CLEAN			"Favor limpar o bico para calibracao. Clique quando concluir."
#define MSG_CONFIRM_CARRIAGE_AT_THE_TOP		"Os suportes Z esquerdo e direito estao no topo?"

#define MSG_FIND_BED_OFFSET_AND_SKEW_LINE1		"Procura de pontos de calibracao na cama"
#define MSG_FIND_BED_OFFSET_AND_SKEW_LINE2		" de 4"
#define MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE1	"Melhorando pontos de calibracao na cama"
#define MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE2	" de 9"
#define MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE1	"Medindo altura de referencia de pontos de calibracao"
#define MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE2	" de 9"
#define MSG_FIND_BED_OFFSET_AND_SKEW_ITERATION	"Iteracao "

#define MSG_BED_SKEW_OFFSET_DETECTION_POINT_NOT_FOUND			"Calibracao XYZ falhou. Ponto de calibracao na cama nao encontrado."
#define MSG_BED_SKEW_OFFSET_DETECTION_FITTING_FAILED			"Calibracao XYZ falhou. Favor consultar o manual."
#define MSG_BED_SKEW_OFFSET_DETECTION_PERFECT					"Calibracao XYZ ok. Eixos X/Y perpendiculares. Parabens!"
#define MSG_BED_SKEW_OFFSET_DETECTION_SKEW_MILD					"Calibracao XYZ correta. Eixos X/Y ligeiramente descentrados. Bom trabalho!"
#define MSG_BED_SKEW_OFFSET_DETECTION_SKEW_EXTREME				"Calibracao XYZ correta. Desvio vai ser corrigido automaticamente."
#define MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_LEFT_FAR		"Calibracao XYZ falhou. Ponto frontal esquerdo nao acessivel."
#define MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_RIGHT_FAR	"Calibracao XYZ falhou. Ponto frontal direito nao acessivel."
#define MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_BOTH_FAR		"Calibracao XYZ falhou. Pontos frontais nao acessiveis."
#define MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_LEFT_FAR	"Calibracao XYZ comprometida. Ponto frontal esquerdo nao acessivel."
#define MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_RIGHT_FAR	"Calibracao XYZ comprometida. Ponto frontal direito nao acessivel."
#define MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_BOTH_FAR	"Calibracao XYZ comprometida. Pontos frontais nao acessiveis."

#define MSG_BED_LEVELING_FAILED_POINT_LOW						"Nivelamento cama falhou. Sensor nao foi ativado. Sujidade no bico? Aguardando reset."
#define MSG_BED_LEVELING_FAILED_POINT_HIGH						"Nivelamento cama falhou. Sensor foi ativado muito alto. Aguardando reset."
#define MSG_BED_LEVELING_FAILED_PROBE_DISCONNECTED				"Nivelamento cama falhou. Sensor desligado ou cabo partido. Aguardando reset."

#define MSG_NEW_FIRMWARE_AVAILABLE			"Nova versao de firmware disponivel:"
#define MSG_NEW_FIRMWARE_PLEASE_UPGRADE		"Por favor atualizar."

#define MSG_FOLLOW_CALIBRATION_FLOW			"Impressora ainda nao calibrada. Consultar manual para instrucoes, capitulo Primeiros passos, secao Fluxo de calibracao."
#define MSG_BABYSTEP_Z_NOT_SET				"Distancia entre a ponta do bico e a cama ainda nao definida. Consultar o manual, capitulo Primeiros passos, secao Calibracao primeira camada."

#define MSG_FILAMENT_LOADING_T0				"Inserir filamento na extrusora 1. Clique quando concluir."
#define MSG_FILAMENT_LOADING_T1				"Inserir filamento na extrusora 2. Clique quando concluir."
#define MSG_FILAMENT_LOADING_T2				"Inserir filamento na extrusora 3. Clique quando concluir."
#define MSG_FILAMENT_LOADING_T3				"Inserir filamento na extrusora 4. Clique quando concluir."
#define MSG_CHANGE_EXTR						"Trocar extrusora"

#define MSG_FIL_ADJUSTING					"Ajustando filamentos. Favor aguardar."
#define MSG_CONFIRM_NOZZLE_CLEAN_FIL_ADJ	"Filamentos ajustados. Por favor limpe o bico para calibracao. Clique quando concluir."
#define MSG_STACK_ERROR						"Erro - memoria estatica foi sobreescrita"
#define MSG_CALIBRATE_E						"Calibracao E"
//#define MSG_RESET_CALIBRATE_E				"Reset Calibr. E"
#define MSG_E_CAL_KNOB						"Rode o botao ate a marca atingir o corpo da extrusora. Clique quando concluir."

//#define MSG_FARM_CARD_MENU				"Impressao modo fabrica"
#define MSG_MARK_FIL						"Marque o filamento a 100mm da extrusora. Clique quando concluir."
#define MSG_CLEAN_NOZZLE_E					"Calibracao E terminada. Por favor limpe o bico. Clique quando concluir."
#define MSG_WAITING_TEMP					"Aguardando arrefecimento bico e cama"
#define MSG_FILAMENT_CLEAN					"A cor esta limpa?"
#define MSG_UNLOADING_FILAMENT				"Descarga filamento"
#define MSG_PAPER							"Coloque folha de papel debaixo do bico durante a calibracao dos primeiros 4 pontos. Se o Bico arrastar o papel, desligue a impressora de imediato."

#define MSG_BED_CORRECTION_MENU				"Nivel cama correto"
#define MSG_BED_CORRECTION_LEFT				"Esquerda [um]"
#define MSG_BED_CORRECTION_RIGHT			"Direita[um]"
#define MSG_BED_CORRECTION_FRONT			"Frontal[um]"
#define MSG_BED_CORRECTION_REAR				"Retaguarda [um]"
#define MSG_BED_CORRECTION_RESET			"Reset"

#define MSG_MESH_BED_LEVELING				"Malha Nivel. Plataf."
#define MSG_MENU_CALIBRATION				"Calibracao"
#define MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_OFF	"Cartao SD [normal]"
#define MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_ON	"Cartao SD [FlshAir]"
#define MSG_PRINTER_DISCONNECTED			"Impress. disconetada"
#define MSG_FINISHING_MOVEMENTS				"Terminando movimento"
#define MSG_PRINT_PAUSED					"Pausa impressao"
#define MSG_RESUMING_PRINT					"Retomando impressao"
#define MSG_PID_EXTRUDER					"Calibracao PID"
#define MSG_SET_TEMPERATURE					"Def. temperatura:"
#define MSG_PID_FINISHED					"Cal. PID terminada"
#define MSG_PID_RUNNING						"Cal. PID           "

#define MSG_CALIBRATE_PINDA					"Calibracao"
#define MSG_CALIBRATION_PINDA_MENU			"Calibracao Temp."
#define MSG_PINDA_NOT_CALIBRATED			"Calibracao Temperatura ainda nao executada"
#define MSG_PINDA_PREHEAT					"Aquecimento PINDA"
#define MSG_TEMP_CALIBRATION				"Calibr. Temp.       "
#define MSG_TEMP_CALIBRATION_DONE			"Calibracao temperatura terminada. Clique para continuar"
#define MSG_TEMP_CALIBRATION_ON				"Cal. Temp. [Lig]"
#define MSG_TEMP_CALIBRATION_OFF			"Cal. Temp. [Dslg]"

#define MSG_PREPARE_FILAMENT				"Prep. novo filamento"
#define MSG_ALL								"Tudo"
#define MSG_USED							"Usado na impressao"
#define MSG_CURRENT							"Atual"
#define MSG_CHOOSE_EXTRUDER					"Escolha extrusora:"
#define MSG_EXTRUDER						"Extrusora"
#define MSG_EXTRUDER_1						"Extrusora 1"
#define MSG_EXTRUDER_2						"Extrusora 2"
#define MSG_EXTRUDER_3						"Extrusora 3"
#define MSG_EXTRUDER_4						"Extrusora 4"
#define MSG_DATE							"Data:"
#define MSG_XYZ_DETAILS						"Detalhes Cal. XYZ"
#define	MSG_Y_DISTANCE_FROM_MIN				"Distancia Y do min:"
#define	MSG_LEFT							"Esquerda:"
#define MSG_CENTER							"Centro:"
#define MSG_RIGHT							"Direita:"
#define MSG_MEASURED_SKEW					"Desvio medido:"
#define MSG_SLIGHT_SKEW						"Desv. ligeiro:"
#define MSG_SEVERE_SKEW						"Desv. critico:"
#define MSG_DEFAULT_SETTINGS_LOADED			"Valor padrao carreg."
#define MSG_SORT_TIME						"Ordem: [Tempo]"
#define MSG_SORT_ALPHA						"Ordem: [Alfabet.]"
#define MSG_SORT_NONE						"Ordem: [Nenhum]"
#define MSG_SORTING							"Ordenando ficheiros"
#define MSG_FILE_INCOMPLETE					"Fich. incompleto. Continuar?"
#define MSG_WIZARD							"Assistente"
#define	MSG_WIZARD_WELCOME					"Ola, Eu sou a impressora Prusa i3 Original. Gostaria que o guiasse pelo processo de definicoes?"
#define MSG_WIZARD_QUIT						"Pode sempre retomar o Assistente pelo menu Calibracao -> Assistente."
#define MSG_WIZARD_SELFTEST					"Inicialmente, irei executar o processo de Autoteste para verificar habituais problemas de montagem."
#define MSG_WIZARD_CALIBRATION_FAILED		"Por favor consulte o nosso manual e corrija o problema. Depois retome o Assistente reiniciando a impressora."
#define MSG_WIZARD_XYZ_CAL					"Vou executar a calibracao xyz agora. Vai demorar aprox. 12 minutos."
#define MSG_WIZARD_FILAMENT_LOADED			"O filamento esta carregado?"
#define MSG_WIZARD_Z_CAL					"Vou executar a calibracao Z agora."
#define MSG_WIZARD_WILL_PREHEAT				"Vou pre-aquecer o bico para PLA."
#define MSG_WIZARD_HEATING					"Pre-aquec. do bico. Por favor aguarde."
#define MSG_WIZARD_V2_CAL					"Vou calibrar a distancia entre a ponta do bico e a cama."
#define MSG_WIZARD_V2_CAL_2					"Vou iniciar a impressao de uma linha e voce vai gradualmente baixar o bico rodando o botao, ate atingir a altura ideal. Consulte as imagens no nosso manual no capitulo Calibracao."
#define MSG_V2_CALIBRATION					"Cal. 1.a camada."
#define MSG_WIZARD_DONE						"Assistente concluido. Feliz impressao!"
#define MSG_WIZARD_LOAD_FILAMENT			"Por favor insira filamento PLA na extrusora e clique para o carregar."
#define MSG_WIZARD_RERUN					"Executar o Assistente vai apagar os atuais valores de calibracao e reiniciar o processo. Continuar?"
#define MSG_WIZARD_REPEAT_V2_CAL			"Quer repetir o passo anterior para reajustar a distancia entre o bico e a cama?"
#define MSG_WIZARD_CLEAN_HEATBED			"Por favor limpe a cama e clique no botao."
#define MSG_WIZARD_PLA_FILAMENT				"Confirma filamento PLA?"
#define MSG_WIZARD_INSERT_CORRECT_FILAMENT	"Por favor carregue filamento PLA e retome o Assistente reiniciando a impressora."
#define MSG_PLA_FILAMENT_LOADED				"O filamento PLA esta carregado?"
#define MSG_PLEASE_LOAD_PLA					"Por favor carregue filamento PLA."
#define MSG_FILE_CNT						"Alguns ficheiros nao serao ordenados. Num. max. de ficheiros numa pasta para ordenar e 100."
