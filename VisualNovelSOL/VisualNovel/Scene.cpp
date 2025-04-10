#include "Scene.h"

Scene1::Scene1() {
	sceneName = "Primera Escena";
	description = "Te despiertas aturdido en una camilla fr�a, con un intenso pitido en tus o�dos.\nLa luz blanca sobre ti es cegadora, y apenas puedes mover tu cuerpo.\nTu �ltimo recuerdo es estar con tu esposa e hijo en el Festival de la Paz,\npero ahora todo es confuso, como si una parte de ti faltara.\n\nDe repente, una figura se interpone entre la luz y t�.\nSu silueta mec�nica se inclina hacia adelante y una voz �spera resuena:\n\n- Al fin despiertas. Has pasado por mucho, pero no hay tiempo para explicaciones.\nNecesito que me escuches con atenci�n.\n";

	options[0] = "Preguntar qu� ha pasado contigo";
	options[1] = "Preguntar por tu familia";
	options[2] = "Intentar moverte y escapar";

	gameOverFeedback = "Intentas moverte, pero tu cuerpo no responde como antes.\nTu visi�n se vuelve borrosa mientras un dolor insoportable recorre tus extremidades.\n- No est�s listo todav�a... - dice la voz antes de que todo se oscurezca.";
	correctFeedback = "Le preguntas qu� ha pasado. La silueta se revela: es un hombre mayor con pr�tesis, con una bata de laboratorio desgastada.\n\n- Mi nombre es Dr. Renard, cirujano y experto en rob�tica. Te he salvado la vida, pero a un costo...\n\nEl doctor sostiene un espejo frente a ti. Tu reflejo es impactante: mitad humano, mitad m�quina.\n\n- Hubo un ataque. NeoVital destruy� parte de la ciudad. Miles murieron y muchos fueron llevados al hospital central. \nSi quieres respuestas, es ah� donde debes ir.\n\nTus manos mec�nicas se cierran en pu�os. Algo en tu interior te dice que este es solo el comienzo.";
	objectFeedBack = "Renard te mira con seriedad antes de responder.\n- No tengo toda la informaci�n, pero hay reportes de sobrevivientes llevados al hospital central.\nSi tu familia est� viva, es probable que est�n all�. (Has obtenido el objeto: Recuerdo Familiar).";

	nameObject = "RecuerdoFamiliar";

	correctAnswer = 0;
	objectAnswer = 1;
	goAnswer = 2;
}

Scene2::Scene2() {
	sceneName = "Segunda Escena";
	description = "Sales del laboratorio de Renard con un �nico prop�sito en mente: venganza.\nLas calles de la ciudad baja son un caos, llenas de escombros y patrullas de seguridad de NeoVital.\nTu cuerpo se siente extra�o, m�s fuerte pero menos humano. De repente, un dron de seguridad te detecta y activa su alarma.\nPor los altavoces, una voz sint�tica dice:\n\n- Objetivo identificado. Entregarse o ser� neutralizado.\n";

	options[0] = "Esconderse en los callejones";
	options[1] = "Correr hacia el hospital central";
	options[2] = "Enfrentarse al dron con tus nuevas habilidades";

	gameOverFeedback = "No tienes control sobre tu cuerpo a�n. Al intentar pelear, tu brazo mec�nico se bloquea.\nEl dron dispara una r�faga y caes al suelo, tu visi�n se apaga.";
	correctFeedback = "Usas las sombras de los callejones para evitar la detecci�n.\nDesde un rinc�n oscuro, observas c�mo m�s drones llegan al lugar.\nDecides moverte con cautela, dirigi�ndote hacia el hospital central.";
	objectFeedBack = "Te lanzas a correr entre los escombros, los drones intentan seguirte pero tu velocidad mejorada te ayuda a esquivarlos.\nLlegas al hospital central jadeando, pero antes de entrar, notas a varios soldados de NeoVital custodiando la entrada. (Has obtenido el objeto, M�dulo de sigilo).";

	nameObject = "M�dulo de sigilo";

	correctAnswer = 0;
	objectAnswer = 1;
	goAnswer = 2;
}

Scene3::Scene3() {
	sceneName = "Tercera Escena";
	description = "Te encuentras frente al hospital central, el lugar donde posiblemente est� tu familia.\nPero el edificio est� fortificado y rodeado de guardias armados.\nObservas dos posibles maneras de entrar.\nEn ese momento, un mensaje cr�ptico aparece en tu sistema de visi�n:\n\n- Entrada segura por el sector de suministros. Confirma si quieres asistencia.\n";

	options[0] = "Aceptar la asistencia desconocida";
	options[1] = "Buscar una ruta alternativa por los tejados";
	options[2] = "Enfrentarse directamente a los guardias";

	gameOverFeedback = "Subestimas la cantidad de guardias. Apenas das unos pasos cuando te rodean.\nUna descarga el�ctrica desactiva tu sistema y caes al suelo inmovilizado.";
	correctFeedback = "Aceptas la asistencia. Una l�nea de gu�a se dibuja en tu visi�n, mostr�ndote un pasaje oculto en la zona de suministros.\nSigues la ruta y logras entrar al hospital sin ser detectado.";
	objectFeedBack = "Decides subir a los tejados y avanzar con cautela. Desde arriba, ves la distribuci�n de los guardias y detectas un acceso poco vigilado en la parte trasera.\n(Has obtenido el objeto, Datos de vigilancia).";

	nameObject = "Datos de vigilancia";

	correctAnswer = 0;
	objectAnswer = 1;
	goAnswer = 2;
}

void Scene1::PlayScene() {
	std::cout << "*****" << sceneName << "*****" << std::endl;
	std::cout << description << std::endl;
	for (int i = 0; i < OPTIONS_NUM; i++)
	{
		std::cout << "		" << i << "- " << options[i];
	}
	std::cout << std::endl;
}

void Scene2::PlayScene() {
	std::cout << "*****" << sceneName << "*****" << std::endl;
	std::cout << description << std::endl;
	for (int i = 0; i < OPTIONS_NUM; i++)
	{
		std::cout << "		" << i << "- " << options[i];
	}
	std::cout << std::endl;
}

void Scene3::PlayScene() {
	std::cout << "*****" << sceneName << "*****" << std::endl;
	std::cout << description << std::endl;
	for (int i = 0; i < OPTIONS_NUM; i++)
	{
		std::cout << "		" << i << "- " << options[i];
	}
	std::cout << std::endl;
}