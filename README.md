```markdown
# Vinheria Agnello - Sistema de Monitoramento

Este projeto consiste em um sistema de monitoramento desenvolvido para a Vinheria Agnello. O sistema tem como objetivo garantir
as condições ideais de armazenamento para os vinhos, monitorando a luminosidade do ambiente. Caso tal parâmetro esteja fora dos
limites aceitáveis, o sistema aciona alarmes visuais e sonoros para alertar os responsáveis sobre a necessidade de intervenção.

## Dependências do Projeto

Para reproduzir este projeto, você precisará dos seguintes componentes:

- Arduino Uno R3 (ou outro modelo compatível)
- Sensor de luminosidade (LDR)
- LEDs (verde, amarelo e vermelho)
- Buzzer
- Resistores - 3*220Ω e 1*4.20KΩ (para limitação de corrente dos LEDs e do sensor de luminosidade)
- Jumpers (cabos para conexão dos componentes)

## Como Reproduzir

1. Monte os componentes conforme o esquema de conexões abaixo:

![Circuito_projeto](https://github.com/gabriel-lacerda918/EdgeComputing_CP01/assets/161903643/7bc68335-57a5-4dfa-9475-e74f552f5f4f)

2. Faça o upload do código fornecido (BrightnessLevelAlertSystem.cpp) para a placa Arduino. *Se necessário altere a extensão
para ".ino".

3. Conecte a placa Arduino ao computador via cabo USB e configure a porta serial a ser utilizada.

4. Abra o monitor serial da IDE do Arduino para visualizar as mensagens de depuração (opcional).

5. Alimente a placa Arduino e observe o comportamento do sistema de monitoramento perante as alterações de nível de
luminosidade no sensor.

## Esquema de Conexões

Certifique-se de conectar os componentes corretamente de acordo com o esquema acima para garantir o funcionamento adequado do
sistema de monitoramento.

## Autor

Este projeto foi desenvolvido por:
Gabriel Machado Lacerda                RM:556714   TURMA:1ESPW
João Pedro Signor Avelar               RM:558375
Roger Cardoso Ferreira                 RM:557230
Vinicius Augusto Siqueira Gonçalves    RM:557065

```
