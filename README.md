PROJETO BBL.

Projeto destinado a pessoas que acabam esquecendo algum item em qualquer local.

Projeto consta com 1 NODEMCU, 2 Sensores de movimento, 1 Buzzer, 1 relé.

Para condificar foi utilizado PlatformIO, e a biblioteca do Arduino para codar em cima do NODEMCU

![image](https://user-images.githubusercontent.com/110207338/204066613-994b647d-b78e-41ef-868e-4d7c132c2a69.png)

Pinos usados 1 Sensor no D1 outro Sensor no D7, o buzzer no D1, o Relé no D3.

CODIGOS

definindo os sensores, buzzer, e relé.

![image](https://user-images.githubusercontent.com/110207338/204066729-c12b3fe0-741d-44dd-ac46-60b6a56e657d.png)

Variaveis utilizadas.

![image](https://user-images.githubusercontent.com/110207338/204066778-a5bb5735-bae9-4569-8b92-1166c193b137.png)

Inputando a parte fisica.

![image](https://user-images.githubusercontent.com/110207338/204066803-0d614646-3dd1-408e-a35b-dc89b30b5bf5.png)

Lógica

![image](https://user-images.githubusercontent.com/110207338/204066931-ff14991f-da8e-4996-b41c-af801826cb0b.png)

![image](https://user-images.githubusercontent.com/110207338/204066950-e73c31c5-cb20-4dfa-9b45-08eaa8037133.png)

GIF TESTE

![picasion com_68050b53773860f8e14e1908998eb650](https://user-images.githubusercontent.com/110207338/204100305-12d1366f-43ee-4467-b226-5178aeb4d73d.gif)

Descrição do teste:

Caso passar na porta(Primeiro sensor) ele irá setar como true e vai passar para proxima funcção que é esperar passar na Mesa(Segundo sensor), proxima função é esperar a pessoa passar pegar o objeto da mesa, caso ele não pegar e passar pela porta o buzzer irá apitar e a luz acender por 5 segundos. caso contrario não acontece nada.
